/*
 * Filename:    ranges.c
 * Author:      Thomas van der Burgt <thomas@thvdburgt.nl>
 * Date:        23-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 2-1, page 34
 *
 * Write a program to determine the ranges of char, short, int, and long
 * variables, both signed and unsigned, by printing appropriate values
 * from standard headers and by direct computation. Harder if you
 * compute them: determine the ranges of the various floating-point
 * types.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    printf("\nchar:\n");
    printf("Size of char: %d bits\n", CHAR_BIT);
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Minimum value of char: %d\n", CHAR_MIN);
    printf("Maximum value of signed char: %d\n", SCHAR_MAX);
    printf("Minimum value of signed char: %d\n", SCHAR_MIN);
    printf("Maximum value of unsigned char: %u\n", UCHAR_MAX);
    printf("\nint:\n");
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);
    printf("\nlong:\n");
    printf("Maximum value of long: %ld\n", LONG_MAX);
    printf("Minimum value of long: %ld\n", LONG_MIN);
    printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);
    printf("\nshort:\n");
    printf("Maximum value of short: %d\n", SHRT_MAX);
    printf("Minimum value of short: %d\n", SHRT_MIN);
    printf("Maximum value of unsigned short: %u\n", USHRT_MAX);
    return EXIT_SUCCESS;
}



/* 
 * Output
char:
Size of char: 8 bits
Maximum value of char: 127
Minimum value of char: -128
Maximum value of signed char: 127
Minimum value of signed char: -128
Maximum value of unsigned char: 255

int:
Maximum value of int: 2147483647
Minimum value of int: -2147483648
Maximum value of unsigned int: 4294967295

long:
Maximum value of long: 9223372036854775807
Minimum value of long: -9223372036854775808
Maximum value of unsigned long: 18446744073709551615

short:
Maximum value of short: 32767
Minimum value of short: -32768
Maximum value of unsigned short: 65535
 */