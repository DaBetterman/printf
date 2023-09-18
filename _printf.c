#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int i = 0;
while (format[i] != '\0')
{
if (format[i] != '%')
{
putchar(format[i]);
i++;
}
else
{
i++;
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 's':
printf("%s", va_arg(args, char *));
break;
case 'd':
printf("%d", va_arg(args, int));
break;
default:
putchar('%');
break;
}
i++;
}
}
va_end(args);
}
