#include <stdio.h>
#include <math.h>
#define NUM 0.000001

double my_sin(double x)
{
	long double a=x; /* the first value is x */
	long double result=x; 
	long int count=1; /* count is 1 because we already calculte the first value*/
	long double n=1;
	long double val=x*x;

	while (fabs(a) >= NUM) /* we amount the values to the result until this term */
		{
		x=x*val; /* the calculate of the mone */
		n=n*(2*count)*(2*count+1); /* the calculate of the mechane */
		a=x/n; /* the calculate of the value */

		if(count%2==0) /* the calculate of -1 in the power of count*/
			{
			result= result+a; /* when count is even we amount the values to the result */
			}
		else
			{
			result= result-a; /* when count is odd we minus the values to the result */
			}
		count++;
		}
return result; /* returns the result of sin(x) */
}




int main()
{
	double x=0;

	printf("\n please enter real number \n");
	scanf("%lf",&x);
	
	printf("\n your number is %f \n my_sin function result is %f \n sin function result is %f \n",x, my_sin(x), sin(x));
return 1;
}
