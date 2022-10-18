#include "main.h"

/**
 ** func_char - print a char, or nothing if it is not
 ** @list: the list of arguments the funcion id receiving
 ** Return: 1 if it is a char, 0 otherwise
 **/
int func_char(va_list list)
{
	char c;

	c = (va_arg(list, int));
	_putchar(c);
	return (1);
}

/**
 ** func_char - print a char, or nothing if it is not
 ** @list: the list of arguments the funcion id receiving
 ** Return: 1 if it is a char, 0 otherwise
 **/
int func_char(va_list list)
{
	char s;

	s = (va_arg(list, int));
	_putchar(s);
	return (1);
}


/**
 ** func_percent - print the sing percent
 ** @list: the list of arguments the funcion id receiving
 ** Return: 1 as just one of character
 **/
int func_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
