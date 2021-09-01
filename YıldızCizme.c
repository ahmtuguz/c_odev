#include <stdio.h>

int main(){
	int i=5,j;
	while(i>0){
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
		i--;
	}
	i=0;
	while(i<5){
		for(j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
		i++;
	}
	return 0;
}
