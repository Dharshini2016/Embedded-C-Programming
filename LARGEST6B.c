#include <reg51.h>
void main()
{
	unsigned long array[]={0x33334444,0x10008888,0xffffbbbb,0x00009999,0x11110000};
	unsigned long i, smallest=0xFFFFFFFF;
	for(i=0;i<5;i++)
	{
		if(smallest>array[i])
			smallest=array[i];
	}
	P0=smallest&0xff;
	P1=(smallest&0xff00)>>8;
	P2=(smallest&0xff0000)>>16;
	P3=(smallest&0xff000000)>>24;
	while(1);
}