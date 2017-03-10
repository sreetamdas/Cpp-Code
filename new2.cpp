#include<iostream>
using namespace std;
void swap( int &);
int main()
{
	int c;
	cout<<"Enter the vaue\n";
	cin>>c;
	swap(c);
	cout<<c;
	cout<<"\n"<<&c;
	
	return 0;
}
void swap(int &a)
{
	int n;
	n=a;
	cout<<"n="<<n;
	n+=10;
	cout<<"n="<<n<<"a="<<a<<endl;
}
