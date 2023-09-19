/**
* _printf - printf function
* @format: format
* by Khadija and Ebrahim
* Return: printed chars
*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...)
{
int num;
int printed_chars = 0;
va_list args;
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
{
char c = va_arg(args, int);
putchar(c);
printed_chars++;
}
break;
case 'd':
case 'i':
{
num = va_arg(args, int);
printf("%d", num);
printed_chars += 1;
}
break;
case 's':
{
const char *str = va_arg(args, const char *);
fputs(str, stdout);
printed_chars += strlen(str);
}
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
