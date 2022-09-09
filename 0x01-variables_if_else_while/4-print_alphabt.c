#include <stdio.h>

/**
*main - print alphabet in lower case without q and e
*result return (sucess)
*/

int main(void)
{
	char lw = 'a';
	while (lw <= 'z')

	{
		if(lw !='q' && lw != 'e')
		{
			putchar(lw);
		}
	lw++;
	}
		putchar('\n');
		return (0);
}

