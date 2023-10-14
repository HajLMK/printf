#include "main.h"

/**
 * ft_format - function format
 * @arg : list arguments
 * @format : format
 * Return: c
 */

static int	ft_format(va_list arg, char format)
{
	int	c;

	c = 0;
	if (format == 'c')
		c += ft_putchar(va_arg(arg, int));
	else if (format == '%')
		c += ft_putchar('%');
	else if (format == 'd' || format == 'i')
		c += ft_putnbr(va_arg(arg, int));
	else if (format == 's')
		c += ft_putstr(va_arg(arg, char *));
	return (c);
}

/**
 * _printf - printf
 * @format : last argument in varidic function
 * Return: c
 */




int	_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(arg, format);
	if (!format)
		return (-1);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			c += ft_format(arg, format[i]);
		}
		else
			c += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (c);
}
