#include <stdio.h>

int main(){
	int taban;
	printf("Taban Degeri Giriniz?");
	scanf("%d",&taban);	
	
	int n=1,i,j;
	while(n<=taban){
		for(i=0;i<(taban-n)/2;i++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
		n+=2;
	}
	
	return 0;
}

