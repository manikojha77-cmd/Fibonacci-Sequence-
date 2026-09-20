#include <stdio.h>
int fibonacci_series(int n);
int main()
{	 int n,i;
printf("Enter the Fabonacci range:");
scanf("%d",&n);
printf("The Fibonacci Series is %d:",fibonacci_series(n));
	 return 0;
}
int fibonacci_series(int n)

{
if(n==0)
{
	return 0;
}
if(n==1)
{
	return 1;
}
return fibonacci_series(n-1)+fibonacci_series(n-2);

}
