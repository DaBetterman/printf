#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);


void print_char(int *printed_chars, va_list args);
void print_string(int *printed_chars, va_list args);


#endif
