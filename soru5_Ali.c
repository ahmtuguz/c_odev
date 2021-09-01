#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char cdizi[5] = "HELLO";
    printf(" Character array is: %s\n",cdizi);

    int dizi[6];
    int i=0;
    printf(" Integer Array Table\n");
    printf(" Index Value\n");
    for(i=0;i<5;i++){
        dizi[0]=2;
        printf("%3d%5d\n",i,dizi[i]);
        dizi[i+1]= dizi[i]+2;

    }
    return 0;
}
