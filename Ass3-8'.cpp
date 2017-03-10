#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	char p[50];
	int intPart=0, floatPart=0, i, dec=0, flag=0, n;
	float number=0;
	cout<<"Enter the String\n";
	cin.getline(p, 50);
	
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i] == '.')
			flag=1;
		if((p[i] >= '0')&&(p[i] <= '9'))
		{
			n = p[i];
			cout<<n<<" ";
			if(!flag)
				intPart = intPart*10 + (n - 48);
			else
			{
				dec++;
				floatPart = floatPart*10 + (n - 48);
			}

		}
		
	}
	cout<<"int="<<intPart;
	cout<<"float="<<floatPart;
	cout<<"dec="<<dec;
	number = intPart + ((float)floatPart/pow(10, dec));
	cout<<"The Final Number is : "<<number;
	return 0;

}
