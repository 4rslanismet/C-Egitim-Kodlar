#include <stdio.h>

#define BOYUT 15

char dizi[BOYUT];

void display(void)
{
    int i;
    printf("Merhaba\t");

    for(i=0;i<BOYUT;i++)
        printf("%c",dizi[i]);

}

int main()
{

    printf("ismini giriniz:\n");
 
    scanf("%s",&dizi);

    yazdir();
    
    
    return 0;   
}

