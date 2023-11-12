#include <stdio.h>
#include <stdbool.h>

int main()
{
int num, i;
long int mask;
printf("enter an integer\n");
scanf("%d",&num);
mask = 2147483648;

	while(true)
	{
		if(num & mask)
			i++;
		if(1 == mask)
			break;
		mask >>= 1;
	}
printf("Quantity 1: %d\n",i);
}
