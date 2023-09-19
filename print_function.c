#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a char
 * @printed_chars: prints each character
 * @args: takes the next argument
 * Return: Number of chars printed
 */

void print_char(int *printed_chars, va_list args)
{
putchar(va_arg(args, int));
(*printed_chars)++;
}

/**
 * print_string - Prints a string
 * @printed_chars: prints each character
 * @args: takes the next argument
 * Return: a string
 */
void print_string(int *printed_chars, va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str)
{
putchar(*str);
str++;
(*printed_chars)++;
}
}
