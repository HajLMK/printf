#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *format, ...);

int	ft_putstr(char *s);
int	ft_putnbr(long int n);
int	ft_putchar(char c);

#endif
