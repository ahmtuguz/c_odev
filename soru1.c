#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int basamak(int sayi){
	float deger=sayi;
	int sayac=1;
	
	while(deger>10){
		deger=deger/10;
		sayac+=1;
	}
	
	return sayac;
}

int bellek(char basamak){
	char *charDizisi=(char *)malloc(sizeof(char)*basamak);
	
	return charDizisi;
}

int degistir(int sayi,char *charDizisi,int diziUzunlugu){
	int i,m=0,mod,basamakSayilari;	
	
	for(i=0;i<diziUzunlugu;i++){
		m=pow(10,i);
		mod=sayi%(10*m);
		
		basamakSayilari=mod/m;
		charDizisi[i]=basamakSayilari;
		
	}
	
	return charDizisi;
	
}

int yazdirma(char *charDizisi,int diziUzunlugu){
	int i;
	printf("Array: ");
	
	for(i=diziUzunlugu-1;i>=0;i--){
		printf("%d ",charDizisi[i]);
	}
}

int main(){
	int N=4521;
	
	char basamakSayisi=basamak(N);
	char *dizi=bellek(basamakSayisi);
	char *charDizi=degistir(N,dizi,basamakSayisi);
	yazdirma(charDizi,basamakSayisi);
	
	return 0;
}
