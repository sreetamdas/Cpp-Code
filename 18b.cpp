#include<iostream.h>
using namespace std;
float fact(float m);
int main()
{
	float n, r, C;
	cout<<"\nFor the Combinaion formula, enter the values of N and R\n";
	cin>>n>>r;
	C=(fact(n)/(fact(n-r)*fact(r)));
	cout<<"\n\n\tCombination,\t\tC = "<<C<<endl;
	return 0;
}
float fact(float m)
{
	float x=1;
	for(int i=1;i<=m;i++)
		x*=i;
	return x;
}
	
