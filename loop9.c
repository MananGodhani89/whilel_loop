#include<stdio.h>

main()

{
	int fact=1,n,a=1;
	printf("Enter Number=");
	scanf("%d",&n);
	while(n>=a)
		{
			fact=fact*n;
			n--;
		}
	
	printf("Factorial value = %d",fact);
}
