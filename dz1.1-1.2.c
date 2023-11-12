#include <stdio.h>
#include <stdbool.h>

int main()
{
	long int i;
	int dec;
	printf("Enter a number: \n");
	scanf("%d",&dec);
	i = 2147483648;   
	
	while(true)
	{
		if(dec & i) 
			printf("1");
		else
			printf("0");
		if(i == 1)
			break;	
	
		i >>= 1;
	
	}
	printf("\n");
}
