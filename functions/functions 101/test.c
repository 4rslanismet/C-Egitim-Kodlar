#include <stdio.h> 

int main()
{ 
    int sayi = 0, basamakDegeri = 0, ikininKati = 1, toplam = 0;
    
    printf("2lik sayiyi girin \t : ");
    scanf("%d", &sayi);
    111
    
    while(sayi > 0)
    {
        basamakDegeri = sayi % 10;
        sayi /= 10; // Sol basamaga kay
        toplam += ikininKati * basamakDegeri;
        ikininKati *= 2;
    }

    printf("10luk karsiligi \t : %d\n",toplam);
    return 0;
}
