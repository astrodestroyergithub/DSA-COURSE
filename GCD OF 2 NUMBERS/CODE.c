#include<stdlib.h>
#include<stdio.h>

int GCD(int a, int b)
{
	int i,gcd,s=a>b?b:a;
	for(i=1;i<=s;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

int main()
{
	int a,b;
	
	printf("Enter 2 NUMBERS: ");
	scanf("%d%d",&a,&b);
	
	printf("The GCD of the 2 NUMBERS is: %d",GCD(a,b));
	
	return 0;
}

