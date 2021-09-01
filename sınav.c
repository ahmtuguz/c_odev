#include <stdio.h>
#include <string.h>


int main(){
	char array[10]="merhaba";
	array[4]="A";
	*array="c";
	*array+1="m";
	printf("s\n",array);
}
