#include<stdio.h>
#include<stdlib.h>

int main (){
	//Variables
	int cc;
	int operation;
	float credit, value;
	
	//Execution
	printf("Account Number:\n");
	scanf("%d",&cc);
	printf("Your Credit is:\n");
	printf("%f",&credit);
	
	//Condition	
do{
	printf("Inform the desired action:\n");
	printf("Type: 1 (Deposit) | 2 (Withdraw) | 3 (Exit) ");
	scanf("%d",&operation);
	
}while(operation |=3);

system("pause");
return 0;
}
