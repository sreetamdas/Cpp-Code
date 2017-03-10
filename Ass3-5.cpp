/*Program using a Function to Delete all occurences of a character from a 
String*/
#include<iostream>
#include<string.h>
using namespace std;
char* omit(char*, char);
int main()
{
	char str[100], ch, *new_str, *p;
	cout<<"Enter the String\n";
	cin.getline(str, 100);
	cout<<"Enter the Character to be Deleted\n";
	cin>>ch;
	p = str;
	cout<<*p;
	new_str = omit(str, ch);
	cout<<"After Deleting "<<ch<<" from the String, :\n\n\t";
	for(int i=0;*(new_str+i);i++)
		cout<<*(new_str+i);
	return 0;
}

char* omit(char *p, char x)
{
	int i, j;
	for(i=0;*(p+i);i++)
	{
		if(x == *(p+i))
		{
			for(j=i;*(p+j);j++)
				*(p+j) = *(p+j+1);
			i--;
		}
	}

	return p;
}
