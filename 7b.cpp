/* Sort the given string */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[20][20], t[20];
	int i=0, j=0, l;
	cout<<"Enter the String\n";
	do
	{
		cin>>str[i];
		i++;

	}while(strcmp(str[i-1], "~"));
	j = --i;
	for(int m=0; m<j; m++)
	{
		for(i=0; i<j; i++)
			if(strcmp(str[i], str[i+1]) == 1)
			{
				strcpy(t, str[i]);
				strcpy(str[i], str[i+1]);
				strcpy(str[i+1], t);
			}
	}
	cout<<"After Sorting :\n\n\t";
	for(i=0; i<j; i++)
		cout<<str[i]<<" ";
	cout<<endl;
	return 0;

}

