#include <stdio.h>

int main(){
	int en,boy;
	printf("Dýkdortgenin enini giriniz?");
	scanf("%d",&en);
	printf("Dýkdortgenin boyunu giriniz?");
	scanf("%d",&boy);
	
	int i,j;
	for(i=0;i<boy;i++){
		for(j=0;j<en;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
