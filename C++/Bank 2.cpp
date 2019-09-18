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
	
	switch(operation){
		case 1: //deposit
		  printf("Value of deposit:\n");
		  scanf("%f",&value);
		  credit = credit + value;
		  printf("Deposit was a sucess!\n")
		break;
		
		case 2: //Withdraw
		  if(credit <= 0){
		  	printf("Error, No value to withdraw");
	     )else(
	        printf("Value to Withdraw:")
		  	scanf("%f",&value);
		  	credit = credit + value;
		  	printf("Withdraw was a sucess!\n")
		break
return 0;
}
