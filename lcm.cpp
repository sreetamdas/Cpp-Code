#include<iostream>
using namespace std;
int lcm( int, int);
int main()
{
	int m,n,l;
	cout<<"Enter the values\n";
	cin>>m>>n;
	l = lcm(m,n);
	cout<<"The LCM is "<<l;
	return 0;
}

int lcm(int a, int b)
{
	int r=1;
	while(r)
	{
		if(a > b)
			r = a - b;
		else
			r = b - a;
		a = b;
		b = r;
	}
	return a;
}
