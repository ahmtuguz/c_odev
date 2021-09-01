#include <stdio.h>
int multiplication();

int main(){
	int sayi1;
	int sayi2;
	
	printf("Enter first number:");
	scanf("%d",&sayi1);
	printf("Enter second number:");
	scanf("%d",&sayi2);
	
	multiplication(sayi1,sayi2);
	return 0;
}

int multiplication(int sayi1,int sayi2){
	int multi=sayi1*sayi2;
	printf("Multiplication Result: %d",multi);
} 
