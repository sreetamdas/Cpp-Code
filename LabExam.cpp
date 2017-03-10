#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, j, max=0, min=0;
	int _1,_2,_3,_4,_5,_6,_7,_8,_9;
	_1=_2=_3=_4=_5=_6=_7=_8=_9=0;
	
	int prod=1, sum=0;
	int _prod=1, _sum=0;
	int pad;
	
	cout<<"Enter the value\n";
	cin>>n;
	for(i=1,j=n;i<=n;i++,j--)
	{
		max=max+(i*pow(10,i-1));
		min=min+(j*pow(10,i-1));
	
	}
	for(i=1;i<=n;i++)
	{
		prod*=i;
		sum+=i;
		
	}
	for(i=min;i<=max;i++)
	{
		_prod=1;
		_sum=0;
		pad=i;
		while(i!=0)
		{
			int d=i%10;
			i/=10;
			
			_prod*=d;	
			_sum+=d;			
		}
		
		if((sum==_sum)&&(prod==_prod))
		{
			cout<<"\n"<<pad;
		}
		i=pad;
	}
	return 0;
}

		
