#include<iostream>
using namespace std;
int Add(int, int);
int Mul(int, int);
int main()
{
	int a, b, c;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	c=Mul(a,b);
	cout<<"Product = "<<c;
	return 0;
}

int Mul(int x, int y)
{
	int m, s=x, t=x;
	for(int i=0;i<(y-1);i++)
	{
		t=s;
		while(t)
		{
			
			m=x&t;
			x=x^t;
			t=m<<1;
		}
		cout<<"\nx="<<x;
	}
	return x;
}
		
	
