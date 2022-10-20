#include "main.h"


void _putchar(char c);

int print(const char *format, ...)
{
  int i=0, character_printed = 0, j=0;
  char c;
  const char *str;
  va_list args;

  if (format == NULL)
    return (-1);

  va_start(args, format);

  while(format[i])
  {
    if (format[i] != '%')
    {
      _putchar(format[i]);
      character_printed++;
    }
    else
    {
      if (format[++i] == '%')
      {
        _putchar(format[i]);
        ++character_printed;
      }
      else
      {
        switch (format[i])
        {
          case 'c':
          {
            c = (char) va_arg(args, int);
            _putchar(c);
            character_printed++;
            break;
          }
          case 's':
          {
            str = (const char *) va_arg(args, const char *);
            while (str[j])
            {
              _putchar(str[j]);
              character_printed++;
      				j++;
            }
            break;
          }
        }
      }
    }
    ++i;
  }
  va_end(args);
  return (character_printed);
}

void _putchar(char c)
{
  write(1, &c, 1);
}
