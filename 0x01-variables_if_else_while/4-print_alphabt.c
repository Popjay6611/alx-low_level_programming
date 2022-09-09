#include <stdio.h>

/**
 *main - print alphabet in lower case without q and e
 *result return (sucess)
*/

int main(void)
{
	char lw;

	for(lw ="a"; lw <= 'z'; lw++);
	{
		if(lw !='q' && lw != 'e';)
		{
			putchar(lw);
		}
	}
		putchar('\n');
		return (0);
}

