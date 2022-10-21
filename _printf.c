#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: string to print
 *
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
	va_list list;
	int character_printed = 0;
	const char *string;
	char c, current_char;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	while ((current_char = *format) != '\0')
	{
		format++;
		if (current_char != '%')
		{
			putchar(current_char);
			character_printed++;
			continue;
		}

		switch (*format)
		{
		case 'c':
		{
			c = (char) va_arg(list, int);
			putchar(c);
			character_printed++;
			format++;
			break;
		}
		case 's':
		{
			string = (const char *) va_arg(list, const char *);
			while (*string != '\0')
			{
				putchar(*string);
				character_printed++;
				string++;
			}
			format++;
			break;
		}
    case '%':
    {
      c = '%';
			putchar(c);
      character_printed++;
			format++;
			break;
    }
		}
	}
	va_end(list);
	return (character_printed);
}
