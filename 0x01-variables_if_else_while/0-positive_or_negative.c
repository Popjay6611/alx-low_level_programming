#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- assign a randon number to io int n
 * every time it execute and print it
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if(n>0)
							printf("%d is positive\n", n);
						else if(n==0)
								printf("%d is zero\n", n)
										else if(n<0)
												printf("%d is negative\n",);
											return (0);
}

