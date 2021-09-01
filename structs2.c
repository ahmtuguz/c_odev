#include <stdio.h>

struct Araba{
	int tekerlekSayisi;
	int vitesSayisi;
	int model;
	float motor;
	int beygir;
}araba2;
int main(){
	//struct Araba araba1={0};
	struct Araba araba1={4,6,2000,3,5};
	araba2=araba1;
	printf("%d\n%d",araba1.tekerlekSayisi,araba2.model);
	return 0;
}
