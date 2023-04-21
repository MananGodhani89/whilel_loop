#include<stdio.h>

main()

{
	int a=1,n,sum=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("Ans=%d \n",sum);
}
