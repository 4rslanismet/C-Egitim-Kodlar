
#include <stdio.h>

int main ()
{
	
		int a=22 , b=12;
		
		int k=5;
		
		k<<=2;
		printf("k:%d\n",k);
		
		k>>=2;
		printf("k:%d\n",k);
		
		int c = a&b;
	
		printf("c:%d",c);
	
	}



/*
 * 
 * 
 * 
 * 
 * 
 * 										shift
 * 5(10) = 101 (2)       >>=          sağa doğru 0 silinir
 * 	                    <<=           sola doğru 0 atılır
 * 
 * 
 * 5<<2    -> 10100 =     20
 * 
 * 20>>2    -> 10100 -> 101 = 5

kuv 43210

	10110 (2) = 22 (10)
	  &
	01100 (2) = 12 (10)
-------------------	
	00100 (2) = 4 (10)
	
	
	
	& and                 | or 			^ xor
	             
	00 0 				00 0			00 0
	01 0				01 1			01 1
	10 0				10 1			10 1
	11 1				11 1			11 0
	
	*/
