#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - n is a number either less or greater than 0
 * Description - if n is equal to zero we print 0
 * Description - else if its less than zero its negative
 * Description - else if its greater than zero its positive
 * Return - the value is always (0) success
 */
int main(void) 
{
		
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
				printf("%i is positive\n", n);
		}	
		else if (n == 0)
		{	
				printf("%d is zero\n", n);
		}					
		else if (n < 0)
		{
				printf("%d is negative\n", n);			
		}

		return (0);
}
