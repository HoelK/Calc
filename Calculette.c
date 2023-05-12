#include <stdio.h>


void interface()
{
	printf("Addition......................1\nSoustraction..................2\nDivision......................3\nMultiplication................4\nModulo........................5\nQuitter.......................6\n");
}

int selection_choix(int *choix)
{
	*choix = 0;
	int error = 1;
	do
	{
		printf("Veuillez selecitonner un mode opératoire parmis les choix : ");
		scanf("%d", choix);

		if(*choix > 5 || *choix < 0)
		{
			printf("ERREUR : Mode opératoire du choix inéxistant\n");
			error = 0;
		}
		else
			error = 1;
	}while(error == 0);

	return *choix;
}

void operations(const int choix)
{
	int a = 0;
	int b = 0;

	switch(choix)
	{
	case 1:
		printf("Veuillez saisir deux nombres à additionner : \n");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d + %d = %d\n",a, b, a+b);
		break;

	case 2:
		printf("Veuillez saisir deux nombres à soustraire : \n");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d - %d = %d\n",a, b, a-b);
		break;

	case 3:
		printf("Veuillez saisir deux nombres à diviser : \n");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d/%d = %d\n",a, b, a/b);
		break;

	case 4:
		printf("Veuillez saisir deux nombres à multiplier : \n");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d*%d = %d\n",a, b, a*b);
		break;

	case 5:
		printf("Veuillez saisir deux nombres donc vous voulez le reste : \n");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d/%d = %d\n",a, b, a%b);
		break;

	case 0:
		break;
	}
}


void main()
{
	int choix;
	do
	{
		interface();
		selection_choix(&choix);
		operations(choix);
	}while(choix != 0);
}