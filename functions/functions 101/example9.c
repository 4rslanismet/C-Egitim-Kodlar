//Verilen bir dizideki tek sayıların ortalamasını bulan kod yazınız.


#include <stdio.h> 

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int sum = 0;
    int n = 0;
    for (i = 0; i < 10; i++)
    {
        if (array[i]%2 != 0)
        {
            sum += array[i];
            n++;
        }
    }
    if(n == 0)
        printf("Dizide tek sayi yok");
    else
        {
            int result = sum / n;
            printf("tek sayiların ortalamasi = %d\n", result);
        }
}
