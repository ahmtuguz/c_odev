#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fillTheChars(int col,int row,int count,char charArray[]){
	srand(time(NULL));
	int i,m=1,k=0;
	for(i=0;i<col*row;i++){
		charArray[i]=NULL;
	}
	
	while(k<count){
		if(charArray[k]==NULL){
			charArray[k]='A'+rand()%26;
			//printf("%c\t",charArray[k]);	
		}
	k++;
	//printf("\n");
	}
	
	for(i=0;i<col*row;i++){
		if(charArray[i]==NULL){
			charArray[i]=-49;
		}
	}

	for(i=0;i<col*row;i++){
		printf("%c\t",charArray[i]);
		if(i==col*m-1){
			printf("\n");
			m++;
		}
	}
}

int display(){
	
}
int main(){
	int col,row,count;
	
	struct position{
		int int_value1;
		int int_value2;
	};
	
	struct characters{
		char char_name;
		struct position p;
	};
	
	printf("Enter the sizes of the matris(col-row): ");
	scanf("%d %d",&col,&row);
	
	printf("Enter the character count: ");
	scanf("%d",&count);
	
	char charArray[col*row];
	charArray[0]='A';
	fillTheChars(col,row,count,charArray);
	
	return 0;
}
