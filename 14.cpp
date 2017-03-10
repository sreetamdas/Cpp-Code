#include<iostream>
using namespace std;
int main()
{
	
	float a=1, b=1, c;
	float gratio=1;
	for(int i=0;i<20;i++)			//100 iterations should give accurate value
	{
		c=a+b; 
		a=b; 
		b=c; 
		gratio=c/a;
		cout<<"\nRatio of the consecutive Fibonacci numbers is "<<gratio; 
	}
	cout<<"\n\nGolden Ratio = "<<gratio<<endl;
	cout<<endl;
	return 0;
}
