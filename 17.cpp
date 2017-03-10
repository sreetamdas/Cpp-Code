#include<iostream>
#include<math.h>
using namespace std;
int bin(int n, int s);
int i=0;
int main()
{
	int m, b;
	char ch;
	cout<<"Enter the number\n";
	cin>>m;
	b=bin(m,0);
	ch=m;
	if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
		cout<<"\n\n\nCharacter Equivalent of "<<m<<" is "<<ch;
	cout<<"\n\n\nIn Binary :\n";
	cout<<b<<endl;
	return 0;
}
int bin(int n, int s)
{
	int r, binary;
	
		r=n%2; cout<<"\n r = "<<r;
		n=(n-r)/2;	cout<<"\n n = "<<n;
		s=s+(r*pow(10,i));	cout<<"\n s = "<<s;
			i++;		cout<<"\n i = "<<i;
		if(n)
			binary=bin(n,s);
		else
			binary=s;			
		return binary;
	
}
