#include<stdio.h>
#include<math.h>
main()
{
	int i=0;
	float T=0, df=0, F=0;

	printf("Enter the initial value of T in Kelvin= ");
	scanf("%f",&T);
		
	for(i=0;i<=100;i++)
	{
		float l=log (T);
	
		F= (28.41-log(760))-(15243/T)-(1.255*l);
		
		if(fabs(F)<=1e-5)
	
		{
		printf ("\nThe boiling point is =  %5.2f Kelvin\n\n", T);
		printf ("\nNumber of interations=  %d \n\n\n", i);
		i=1000;
		}

		else

		{
		df=(15243/(T*T))-(1.255/T);
		T=T-(F/df);
		i++;
		}
	}
}
