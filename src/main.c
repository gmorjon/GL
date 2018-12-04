//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"



void main(void)
{
	char prenom[100];
	char nom[100];
	char age[100];
	
	printf("veuillez taper un nom :");
	scanf("%s", nom);

	
	printf("veuillez taper un prenom :");
	scanf("%s", prenom);

	
	printf("veuillez taper un age :");
	scanf("%s", age);

	
	printf("je m'appelle %s %s j'ai %s",prenom, nom, age);
	getchar();

}
