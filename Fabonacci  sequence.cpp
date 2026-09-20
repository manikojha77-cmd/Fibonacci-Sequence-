#include <stdio.h>
void fibonacci_series(int n);
int main()
{	 int n;
printf("Enter the Fabonacci range:");
scanf("%d",&n);
printf("The Fibonacci Series is:");
 fibonacci_series(n);
	 return 0;
}
void fibonacci_series(int n)

{
 static int a=0,b=1,c=0;
if(n==0)
{
	return;
}
printf("%d,",a);
    	c=a+b;
    	a=b;
    	b=c;
    	fibonacci_series(n-1);
}
