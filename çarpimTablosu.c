#include<stdio.h>

int main(){
	int i,sayi;
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	for(i=1;i<sayi+1;i++){
		printf("%d * %d = %d\n",sayi,i,sayi*i);
	}
	return 0;
}
