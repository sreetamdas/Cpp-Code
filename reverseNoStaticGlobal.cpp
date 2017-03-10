#include<iostream>
#include<math.h>
using namespace std;
int reverse(int, int);
int main()
{
	int m, n=0, r;
	cout<<"Enter the number\n";
	cin>>m;
	r=m;
	while(r)
	{
		n++;
		r/=10;
	}
	
	r = reverse(m, n);
	cout<<r;
	return 0;
}
int reverse(int m, int n)
{
	if(!(m/10))
		return m;
	return ((m%10)*pow(10, --n)) + reverse((m/10), n);
}
