#!/usr/bin/python3
"""
Module to query Reddit API recursively and count keywords in hot titles.
"""
import requests


def count_words(subreddit, word_list, instances={}, after="", count=0):
    """
    Recursively queries the Reddit API, parses article titles,
    and prints a sorted count of keywords.
    """
    if not instances:
        for word in word_list:
            w = word.lower()
            instances[w] = instances.get(w, 0)

    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    headers = {"User-Agent": "linux:holberton.task:v1.0 (by /u/mathieu)"}
    params = {"limit": 100, "after": after, "count": count}

    response = requests.get(
        url,
        headers=headers,
        params=params,
        allow_redirects=False
    )

    if response.status_code != 200:
        return

    try:
        data = response.json().get("data")
        after = data.get("after")
        children = data.get("children")
    except Exception:
        return

    for post in children:
        title_words = post.get("data").get("title").lower().split()
        for word in instances:
            instances[word] += title_words.count(word)

    if after is not None:
        count_words(
            subreddit, word_list, instances, after, count + len(children)
        )
    else:
        sorted_words = sorted(
            instances.items(),
            key=lambda item: (-item[1], item[0])
        )
        for word, cnt in sorted_words:
            if cnt > 0:
                print("{}: {}".format(word, cnt))
