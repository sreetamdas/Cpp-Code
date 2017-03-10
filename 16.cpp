#include<iostream>
using namespace std;
int sum(int x);
int main()
{
	int n, max, maxsum, _sum;
	cout<<"Enter the numbers, enter -1 at the end of input\n";
	cin>>n;
	max=n;
	maxsum=sum(n);
	while(n!=-1)
	{
		cin>>n;
		_sum=sum(n);
		if(_sum>=maxsum)
		{
			max=n;
			maxsum=_sum;
		}
	}
	cout<<"\nThe number with max sum of digits is "<<max;
	cout<<" and its sum is "<<maxsum;
}
int sum(int x)
{
	int d, s=0;
	while(x)
	{
		d=x%10;
		x/=10;
		s+=d;
	}
	if(s>9)
		s=sum(s);
	return s;
}
