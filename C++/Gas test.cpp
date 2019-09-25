#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main (){
	//Variables
	int gas,alcool,operation;
	float al1,al2,gas1,gas2;
	
	//Interface
	printf(":::::Discount tab:::::\n");
	printf("---Alcool---\n");
	printf("Up to 20 litros, discount of 3 percent per liter\n");
	printf("Above 20 litros, discount of 5 percent per liter\n");
    printf("---Gas---\n");
    printf("Up to 15 liters, discount of 3,5 percent per liter\n"); 
	printf("Above 15 liter, discount of 6 percent per liter\n");
	printf("::::::::::::\n");
	printf("Options\n");
	printf("1 - Alcool | 2 -  Gas\n");
	scanf("%d",&operation);
	
	//code
	switch (operation){
		case 1: //Alcool
		 if (alcool <= 20){
	      cout<<"Value of purchase - "<<al2<<endl;	
	    }
	     if (alcool > 20){
		  cout<<"Value of purchase -"<<al2<<endl;
        }
		 printf("How many liters you wish?");
		 scanf("%d",alcool); 
		 al1 = ((9.4*3)/100);
	     al2 = ((9.4*5)/100);
		break;
		
        case 2: //Gas
       	 if (gas <= 15){
		 cout<<"Value of purchase -"<<gas1<<endl;
	    }
	     if (gas > 15){
		 cout<<"Value of purchase -"<<gas2<<endl;
	    }
         printf("How many liters you wish?");
         scanf("%f",gas);
         gas1 = ((7.95*3.5)/100);
	     gas2 = ((7.95*6)/100);
        break;
	return 0;
 }
}
