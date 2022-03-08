#include<stdio.h>
#include"main.h"

int main()
{ 
	int choice;
	int a, b, result;
	printf("Enter your choice: 0 for add, 1 for sub, 2 for mul, 3 for div: \n");
	scanf("%d", &choice);
	printf("Enter 2 numbers :\n");
	scanf("%d %d", &a, &b);

	switch(choice)
	{
		case 0: result = add(a,b);
			break;
		case 1: result = sub(a,b);
                        break;
                case 2: result = mul(a,b);
                        break;
                case 3: result = div(a,b);
                        break;
	}
	printf("%d \n", result);
	return 0;
}

