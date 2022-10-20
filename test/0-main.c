#include "main.h"

/**
 * main - test codes
 *
 * Return: always 0 success
 */

int main(void)
{
	int printed = 0;
	char *strings = "Vertiges";
	char character = 'v';
	/*_printf("la programmation en c donne les %s", strings);*/
	/*_printf("la programmation en c donne les %c", character);*/
	print("la programmation en c donne les %s.\n", strings);
	print("la programmation en c donne les %c.\n", character);
	print("le pourcentage est %% en c.\n");
	printed = print("le pourcentage est %% en c.\n");
	printf("%d\n", printed);
	return (0);
}
