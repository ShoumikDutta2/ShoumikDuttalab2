#include<stdio.h>
#include<math.h>

int main()
{
	char c = 'a';
	int n = 1;
	for (int i = 8; i > 0; i--)
	{
		printf("+- - -+- - -+- - -+- - -+- - -+- - -+- - -+- - -+\n");
		for (int j = 0; j < 8; j++)
		{
			printf("| %c%d  ", c + j, i);
		}
		//printf("+- - -+\n");
		printf("|\n");
	}
	printf("+- - -+- - -+- - -+- - -+- - -+- - -+- - -+- - -+\n");

	unsigned long long onField = 0;
	unsigned long long   sum = 0;
	
	printf("Field |\tOn field\t\t|\tSum\t\n");
	printf("++- - -+- - -+- - -+- - -+- - -+- - -+- - -+- - -+\n");
	for (int field = 0; field < 64; field++)
	{
		onField = pow(2, field);
		sum = sum + onField;

		if (field + 1 <= 14) {
			printf(" %d\t| %llu \t\t\t| %llu (%12.5e)\n", field + 1, onField, sum, (double)sum);

		}
		else if (field + 1 <= 40)
		{
			printf(" %d\t| %llu \t\t| %llu (%12.5e)\n", field + 1, onField, sum, (double)sum);
		}
		else
		{
			printf(" %d\t| %llu \t| %llu (%12.5e)\n", field + 1, onField, sum, (double)sum);
		}

		

	}
	printf("+- - -+- - -+- - -+- - -+- - -+- - -+- - -+- - -+- - -+- -+- - -+- - -+\n");


	return 0;
}


