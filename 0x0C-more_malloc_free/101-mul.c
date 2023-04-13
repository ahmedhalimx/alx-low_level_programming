#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i] != '\0'; ++i)
	{
		if (!(isdigit(argv[1][i])))
		{
			printf("Error\n");
			exit(98);
		}	
	}

	for (i = 0; argv[2][i] != '\0'; ++i)
        {
                if (!(isdigit(argv[2][i])))
                {
                        printf("Error\n");
                        exit(98);
                }
        }

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}

