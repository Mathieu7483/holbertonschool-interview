#ifndef HOLBERTON_H
#define HOLBERTON_H

/* size_t */
#include <stddef.h>

/* _putchar.c */
int _putchar(char c);

/* 0-mul.c */
unsigned int *initDigitArray(size_t size);
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		       char *n2_digits, size_t n1_len, size_t n2_len);
int stringIsPosInt(char *s);
void error(int status);
/* int main(int argc, char **argv) */

#endif /* HOLBERTON_H */