/*bibliotecas */
#include <stdio.h>
#include <conio.h>


/*Variaveis Globais */
int opcao;


/*Corpo do programa */

int main ()
{
	printf("\n------------------------------------------------------");
	printf("\n------------------------------------------------------");
	printf("\n--------------Caixa Eletrônico------------------------");
	printf("\n-------------- 1. Extrato       ----------------------");
	printf("\n-------------- 2. Depósito      ----------------------");
	printf("\n-------------- 3. Saldo         ----------------------");
	printf("\n-------------- 4. Transferência ----------------------");
	printf("\n------------------------------------------------------");
	printf("\n Escolha uma opção: ");
	scanf ("%i", &opcao);
	
	switch (opcao)
	{
		case 1:
		{
			printf("\n\n\t\t-----------------------------------");
			printf("\n\n\t\t------------ Extrato  -------------");
			printf("\n\n\t\t-----------------------------------");
					
		}
		break;
			
		case 2:
		{ 
			printf("\n\n\t\t-----------------------------------");
			printf("\n\n\t\t--------- 2. Depósito      --------");
			printf("\n\n\t\t-----------------------------------");
		}
		break;
			
		case 3:
		{ 
			printf("\n\n\t\t-----------------------------------");
			printf("\n\n\t\t--------- 3. Saldo        ---------");
			printf("\n\n\t\t-----------------------------------");
		}
		break;

		case 4:
		{ 
			printf("\n\n\t\t-----------------------------------");
			printf("\n\n\t\t---------- 4. Transferência -------");
			printf("\n\n\t\t-----------------------------------");
		}
		break;			
			
	}
	
	
	return 0;
}



