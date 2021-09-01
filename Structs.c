#include <stdio.h>

struct Student{
	char isim[10];
	char soyisim[10];
	int numara;
	int yas;
};

int main(){
	struct Student ahmet={"ahmet","demir",10,25};
	struct Student mehmet={"mehmet","can",1220,30};
	printf("%s %s %d %d",ahmet.isim,ahmet.soyisim,ahmet.numara,ahmet.yas);
	printf("\n%s %s %d",mehmet.isim,mehmet.soyisim,mehmet.yas);
	return 0;
}
