#include <stdio.h>

int main()
{	
	
	int i,j,n;

       printf("carpim tablosu boyutunu giriniz:");
        scanf("%d",&n);

        if(n<=0)
         {
                printf("hatalı giris yapıtınız\n");      
                return 1;
        }

        
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                        printf("%d\t",i*j);

         printf("\n");
        }

        return 0;
        

}       
