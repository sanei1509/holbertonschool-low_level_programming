#include "variadic_functions.h"

/**
*print_char - print a char
*@params: receive parameter
*/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
*print_int - print a int
*@i: receive int number
*/
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
*print_float - print number
*@f: receive float number
*/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
*print_string - print pointers
*@s: receive pointer
*/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
/**
*print_all - print anything
*@format: receive list of types
*/
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *space = "";

	va_list params;

	types_t type[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

	va_start(params, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (type[i].type != '\0')
		{
			if (type[i].type == format[j])
			{
				printf("%s", space);
				type[i].f(params);
				space = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(params);
	printf("\n");
}
