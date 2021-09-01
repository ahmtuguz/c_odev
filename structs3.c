#include <stdio.h>
#include <string.h>

struct Adres{
	char mahalle[20];
	char cadde[20];
	char sokak[20];
};

struct Ogrenci{
	char ad[10];
	char soyad[10];
	int yas;
	
	struct Adres adres;
};

int main(){
	struct Ogrenci ogrenci;
	strcpy(ogrenci.ad,"Ahmet");
	strcpy(ogrenci.soyad,"Bulut");
	ogrenci.yas=20;
	strcpy(ogrenci.adres.mahalle,"Bahcelievler");
	strcpy(ogrenci.adres.cadde,"7.cad.");
	strcpy(ogrenci.adres.sokak,"1032.sok.");
	
	printf("%s %s %d %s %s %s",ogrenci.ad,ogrenci.soyad,ogrenci.yas,ogrenci.adres.mahalle,ogrenci.adres.cadde,ogrenci.adres.sokak);
	return 0;
}
