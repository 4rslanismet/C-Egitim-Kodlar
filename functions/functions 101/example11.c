
// Verilen bir dizideki her ikilinin toplamlarının mutlak 
//değerini döndüren bir kod yazınız 
//(Örneğin 7,3,-2,5,0,20,-1,1234512454 sayıları için (7+3); (-2+5); (0+20) => 4 + 7 + 20 = 31)

#include <stdio.h> 

#define BOYUT 11

int mutDeger(int x,int y);

int main()
{
    
    int toplam=0,i,arr[BOYUT];
        
    for(i=0;i<BOYUT;i++)
    {
        printf("%d. değeri giriniz:",i+1);
        scanf("%d",&arr[i]);
    }

    arr[BOYUT]=0;

    for(i=0;i<BOYUT;i+=2)
    {   
        toplam+=mutDeger(arr[i],arr[i+1]);

    } 
     
     printf("%d\n",toplam);
}


int mutDeger(int x,int y)
{
    x+=y;

    if(x<0)
    {
        x*=-1;

        printf("%d\n",x);
    } 

    else
        printf("%d\n",x);

    return x;
}