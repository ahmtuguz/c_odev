#include <stdio.h>
#include <stdlib.h>

int compressedArray(int dizi[],int uzunluk,int yeniDiziUzunlugu){
	int i,m=0;
	int yeniDizi[yeniDiziUzunlugu];
	for(i=0;i<uzunluk;i++){
		if(dizi[i]!=0){
			yeniDizi[m]=dizi[i];
			m+=1;
			yeniDizi[m]=i;
			m+=1;
		}
	}
	
	printf("\nCompressed Array: ");
	for(i=0;i<yeniDiziUzunlugu;i++){
		printf("%d ",yeniDizi[i]);
	}
}

int main(){
	int *array=(int *)malloc(sizeof(int)*10);;
	int i,boyut,sayac=0;
	printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");
	scanf("%d",&boyut);
	printf("Diziyi giriniz: ");
	
	for(i=0;i<boyut;i++){
		scanf("%d",&array[i]);
		if(array[i]!=0){
			sayac+=1;
		}
	}
	
	printf("Array: ");
	for(i=0;i<boyut;i++){
		printf("%d ",array[i]);
	}
	
	compressedArray(array,boyut,sayac*2);
	
	return 0;
}
