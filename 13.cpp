#include<iostream.h>
#include<math.h>
using namespace std;
int main()
{
	float S=1, x, n;
	long fac=1;
	cout<<"Enter the Values for X and N\n";
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		fac*=i;
		S+=((pow(x,i))/fac);
	}
	cout<<"\nFor the Series,\n\n\tS = "<<S;
	return 0;
}

		
