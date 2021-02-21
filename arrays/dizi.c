#include <stdio.h>

int main()

{
    int dizi[5];

    int i;

    for(i=0;i<5;i++)
        dizi[i]=0;
   
    for(i=0;i<5;i++)
        printf("%d\n",dizi[i]);

    for(i=0;i<5;i++)
        printf("%p\n",&dizi[i]);
        

}