#include <REGX52.H>

void Delay(unsigned int xms)	//@11.0592MHz
{
	while(xms--!=0)
	{
		unsigned char data i, j;
	
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
}
