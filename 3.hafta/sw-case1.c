#include <stdio.h>


int main () 
{
    int sayi1;
    int sayi2;
    int sonuc=0 ;
    char islem= 'x';

    printf("Lutfen birinci sayi giriniz.");

    scanf("%d",&sayi1);

    printf("Lutfen ikinci sayi giriniz.");

    scanf("%d",&sayi2);

    printf("Lutfen islem  giriniz.");

    scanf(" %c",&islem);

    switch (islem)
    {
        case '+':
        sonuc=sayi1+sayi2;
          break;

        case '-':
        sonuc=sayi1-sayi2;
          break;

        case '':
        sonuc=sayi1sayi2;
          break;

        case '/':
        sonuc=sayi1/sayi2;
          break;
    }
    printf("Sonuc= ",&sonuc);
    
    return 0;


}
