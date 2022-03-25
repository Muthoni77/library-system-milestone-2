#include <stdio.h>
#include<stdlib.h>
int menu()
{
	int action;
	printf("select an action:\n");
	printf("1.Add new patron:\n");
	printf("2.View all patrons:\n");
	printf("3.View books:\n");
	printf("4.add a new book:\n");
	printf("your action:\n");
	scanf("%d,&action")	;
	if(action<1 || action >){
		printf("invalid action.try again \n")
	}
	return action:	
}

