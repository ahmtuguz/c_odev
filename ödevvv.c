#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fillTheChars(int col,int row,int count,char charArray[]){
	srand(time(NULL));
	int i,k=0;
	for(i=0;i<col*row;i++){
		charArray[i]=NULL;
	}
	
	while(k<count){
		int n=rand()%(col*row);
		if(charArray[n]==NULL){
			charArray[n]='A'+rand()%26;
			k++;
		}
	}
}

int display(int col,int row,char charArray[]){
	int i,m=1;
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
	display(col,row,charArray);
	
	return 0;
}
