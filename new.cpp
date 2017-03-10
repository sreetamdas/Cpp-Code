#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n,s;
	cout<<"enter the n value";
	cin>>n;
	s=fact(n);
	cout<<"s = "<<s;
	return 0;
}
int fact(int n)
{    int f;
	if(n>1)
	f=n*fact(n-1);
	else
	f=1;
	return f;
	
	
}
