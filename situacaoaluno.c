/* Bibliotecas */

#include <stdio.h>
#include <conio.h>


/* Variáveis Globais */

int faltas, podefaltar;
float p1, p2, t, m, pontos;




/* Corpo do programa */

int main()
{
		printf("Digite a quantidade de Faltas: ");
		scanf ("%i" , &faltas);
		
		if(faltas > 23)
		   printf ("\n\nRETIDO POR FALTAS\a\a\a");
		else 
		{ 	podefaltar = 23 - faltas;
			printf ("\nO aluno ainda pode ter %i faltas ", podefaltar);
			printf ("\nDigite p1: ");
			scanf ("%f" , &p1);
			printf ("\nDigite p2: ");
			scanf ("%f" , &p2);
			printf ("\nDigite t: ");
			scanf ("%f" , &t);
			m = (p1 + p2 + t)/ 3;
			pontos = 6 - m;
			printf ("\nSua media e %f ", m);
		
		
		    if(m >=  6)
		       printf ("\n\nAprovado\a\a\a");
		    else
			   if (m<4)
			       printf ("\n\nReprovado\a\a\a");
			   else
			       printf ("\n\nTá em Recuperação\a\a\a");
			       printf ("\nO aluno ainda ainda precisa tirar %f pontos ", pontos);
		}
		
		getch();
		return 0;
}




