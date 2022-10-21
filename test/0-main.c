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
	/* print("la programmation en c donne les %s.\n", strings);*/
	/*print("la programmation en c donne les %c.\n", character);*/
	/* print("le pourcentage est %% en c.\n");*/
	/*printed = print("le pourcentage est %% en c.\n");*/
	/*printf("%d\n", printed);*/
	/*_print("la programmation en c donne les %s.\n", strings);*/
	/*_print("la programmation en c donne les %c.\n", character);*/
	/*_print("le pourcentage est %% en c.\n");*/
	/*printed = print("le pourcentage est %% en c.\n");*/
	/*printf("%d\n", printed);*/
	_print("la programmation en c donne les %s.\n", strings);
	_print("la programmation en c donne les %c.\n", character);
	_print("le pourcentage est %% en c.\n");
	_print("Let's try to printf a simple sentence.\n");
	printed = _print("Let's try to printf a simple sentence.\n");
	printf("%d\n", printed);
	_print("Character:[%c]\n", 'H');
	_print("String:[%s]\n", "I am a string !");
	_print("Percent:[%%]\n");
	printed = _print("Percent:[%%]\n");
	printf("%d\n", printed);
	return (0);
}
