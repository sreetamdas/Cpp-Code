#include<iostream>
using namespace std;
int main()
{
	unsigned int d, mask, r, flag;
	cout<<"Enter the value\n";
	cin>>d;
	r=1;
	mask=~0;
	mask>>=4;
	mask=~mask;
	cout<<"\nmask = "<<mask;
	cout<<endl;
	cout<<"\n\n\tI HaexaDecimal, "<<d<<" is : 0x";
	flag=0;
	while(mask)
	{
		r=mask&d;
		while(!(15&r)&&(r))
		{
			r>>=4;
		}
		if(r)
			flag=1;
		if(flag)
		switch(r)
		{
			case 1: cout<<"1"; break;
			case 2: cout<<"2"; break;
			case 3: cout<<"3"; break;
			case 4: cout<<"4"; break;
			case 5: cout<<"5"; break;
			case 6: cout<<"6"; break;
			case 7: cout<<"7"; break;
			case 8: cout<<"8"; break;
			case 9: cout<<"9"; break;
			case 10: cout<<"a"; break;
			case 11: cout<<"b"; break;
			case 12: cout<<"c"; break;
			case 13: cout<<"d"; break;
			case 14: cout<<"e"; break;
			case 15: cout<<"f"; break;
			default: cout<<"0";
		}
		mask>>=4;
	}
	cout<<endl;
	return 0;
}
