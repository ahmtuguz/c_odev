#include <stdio.h>

int fib(int sayi)

{

      if(sayi==1 || sayi==0)

      return sayi;

         else 

      return(fib(sayi-1) + fib(sayi-2));

}

int main()

{

    int sayi;

        printf("Kacinci Fibonacci Sayisi:"); scanf ("%d",&sayi);

        printf("%d.Fibonacci Sayisi =  %d",sayi,fib(sayi));

    return 0;

}
