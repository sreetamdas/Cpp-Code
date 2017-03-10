#include<iostream.h>
using namespace std;
float fac(float m);
int main()
{
	float n, r, C;
	cout<<"\nFor the Combinaion formula, enter the values of N and R\n";
	cin>>n>>r;
	C=(fac(n)/(fac(n-r)*fac(r)));
	cout<<"\n\n\tCombination,\t\tC = "<<C<<endl;
	return 0;
}
float fac(float m)
{
	float x=m;
	if(x!=1)
		x=x*fac(x-1);
	return x;

}
	
		
		

