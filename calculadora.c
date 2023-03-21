#include <stdio.h>

int main()
{
	int n1,n2,res,pow;
	int esc;
	
	printf("digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("digite o segundo numero: ");
	scanf("%d", &n2);	
	
	printf("Escolha \n\n");
	printf("1 - adicao \n");
	printf("2 - subtracao \n");
	printf("3 - multiplicacao \n");
	printf("4 - divisao \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			res = n1+n2;
			printf("Resultado %d\n\n", res);
			
			break;
			
		case 2: 
			res = n1-n2;
			printf("Resultado %d\n\n", res);
			
			break;

		case 3: 
			res = n1*n2;
			printf("Resultado %d\n\n", res);
			
			break;	
			
		case 4: 
			res = n1/n2;
			printf("Resultado %f\n\n", res);
			
			break;	
				
	}
	return 0;
}
