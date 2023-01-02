#include <stdio.h>

/*
 O programa retorna os argumentos passadas no parâmetro junto com uma quebra de linha.
 */

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while ( i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
