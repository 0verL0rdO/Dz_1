#include <stdio.h>
#include <stdbool.h>

int main()
{
int num;
int num2;
printf("Enter number:\n");
scanf("%d",&num);
printf("Enter 1 or 0\n");
scanf("%d",&num2);
	switch(num2)
	{
		case 0:
		num = num & (~(1<<3));
		printf("Number in dec = %d\n",num);
		break;
		
		case 1:
		num = num | (1<<3);
		printf("Number in dec = %d\n",num);
		break;
		
		default:
		printf("Enter correct number\n");
	}

}



