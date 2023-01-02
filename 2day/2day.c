#include <stdio.h>


int main(void)
{
	int i, j, num;
	
	printf("Informe um número");
	printf("\n");
	scanf("%i", &num);
	
	i = 0;
	while (i < num)
	{
		j = 0;
		while (j < num)
		{
			if (j < num - (i + 1))
			{
				printf(" ");
			}	
			else 
				printf("*");
			j++;	
		}
		i++;
		printf("\n");
	}
	//printf("%i\n", num);


}
