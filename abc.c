#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct position{
		int int_value1;
		int int_value2;
	};

struct characters{
		char charArray[150];
		struct position p[150];
	};


int fillTheChars(int col,int row,int *count,struct characters *chr){
	srand(time(NULL));
	int i,k=0;
	for(i=0;i<col*row;i++){
		(*chr).charArray[i]=NULL;
	}

	while(k<count){
		int n=rand()%(col*row);
		if((*chr).charArray[n]==NULL){
			(*chr).charArray[n]='A'+rand()%26;
			k++;
		}
	}
}

int display(int col,int row,struct characters *chr){
	int i,m=1;
	for(i=0;i<col*row;i++){
		if((*chr).charArray[i]==NULL){
			(*chr).charArray[i]=-49;
		}
	}

	for(i=0;i<col*row;i++){
		printf("%c",(*chr).charArray[i]);
		if(i==col*m-1){
			printf("\n");
			m++;
		}
	}
}
int main(){

	int col,row,count;
	struct characters chr;


	printf("Enter the sizes of the matris(col-row): ");
	scanf("%d %d",&col,&row);

	printf("Enter the character count: ");
	scanf("%d",&count);



	fillTheChars(col,row,&count,&chr);
	display(col,row,&chr);

	return 0;
}
