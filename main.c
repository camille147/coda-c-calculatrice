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
		printf("addition\n");
	}
	else if (oper=='-')
	{
		printf("soustraction\n");
	}
	else if (oper=='*')
	{
		printf("multiplication\n");
	}
	else if (oper=='/')
	{
		printf("division\n");
	}
	else if (oper=='%')
	{
		printf("modulo\n");
	}
	else 
	{
		printf("l'opérateur n'est pas reconnu");
	}
exit(0);
}
