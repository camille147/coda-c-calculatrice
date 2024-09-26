#include <stdlib.h>
#include <stdio.h>
int main()
{
	int nb_1;
	int nb_2;
	char oper;
	printf("Bonjour, veuillez choisir un opérateur parmi ceux_ci: +,-,*,/,%%\n");
	scanf("%c", &oper);
	printf("Veuillez choisir un premier nombre\n");
	scanf("%d",&nb_1);
	printf("Veuillez choisir un deuxième nombre\n");
	scanf("%d",&nb_2);
	if (oper=='+')
	{	
		int resultat = nb_1 + nb_2;
		printf("addition\n");
		printf("%d %c %d = %d\n", nb_1, oper, nb_2, resultat);
	}
	else if (oper=='-')
	{
		int resultat = nb_1 - nb_2;
		printf("soustraction\n");
		printf("%d %c %d = %d\n", nb_1, oper, nb_2, resultat);
 	}
	else if (oper=='*')
	{
		int resultat =  nb_1 * nb_2;
		printf("multiplication\n");
		printf("%d %c %d = %d\n", nb_1, oper, nb_2, resultat);
	}
	else if (oper=='/')
	{
		if (nb_2!=0 )
		{
			double  resultat =  nb_1 / nb_2;
			printf("division\n");
			printf("%d %c %d = %.2f\n", nb_1, oper, nb_2, resultat);
		}
		else
		{
			printf("Il est impossible de diviser par 0\n");
		}
	}
	else if (oper=='%')
	{
		if (nb_2!=0)
		{
			int resultat= nb_1 %nb_2;
			printf("modulo\n");
			printf("%d %c %d = %d\n", nb_1, oper, nb_2, resultat);
		}
		else
		{
			printf("Il est impossible de diviser par 0\n");
		}
	}
	else 
	{
		printf("l'opérateur n'est pas reconnu");
	}
exit(0);
}
