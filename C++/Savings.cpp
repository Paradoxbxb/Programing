#include<stdio.h>
#include<stdlib.h>

int main (){
	//Variables
	int bread,broa;
	float total;
	float savings; 
	
	//Data
	printf("Amount of bread:\n");
	scanf("%d",&bread);
	printf("Amount of broa:\n");
	scanf("%d",&broa);
	
	//Processing
	total = (0.12*bread) + (1.50*broa);
	savings = total*0.10;
	
	//Exit
	printf("Total Value is: %f",total);
	printf("\n");
	printf("Your savings are: %f\n",savings);
}
