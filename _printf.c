/**
* _printf - printf function
* @format: format
* by Khadija and Ebrahim
* Return: printed chars
*/
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
putchar(*format);
printed_chars++;
}
else
{
format++;
switch (*format)
{
case 'c':
print_char(&printed_chars, args);
break;
case 's':
print_string(&printed_chars, args);
break;
case '%':
putchar('%');
printed_chars++;
break;
default:
putchar('%');
putchar(*format);
printed_chars += 2;
break;
}
}
format++;
}
va_end(args);
return (printed_chars);
}
