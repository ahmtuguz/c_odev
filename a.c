#include <stdio.h>
int main(){
	float test;
	float ptest;
	printf("Enter the test number:");
	scanf("%d",&test);
	printf("Enter the positive test number:");
	scanf("%d",&ptest);
	
	float ntest=test-ptest;
	float poran=((ptest*100)/test);
	float noran=((ntest*100)/test);
	
	printf("Positive test rate:");
	printf("%.5f",poran);
	
	if(poran>50){
		printf("\nStatus: Bad");
	}else if(poran<=50){
		printf("\nStatus: Good");
	}
	
	return 0;
	
}
