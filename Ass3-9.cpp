#include<iostream>
#include<string.h>
using namespace std;
int compare(char*, char*);
int main()
{
	char str1[50], str2[50], *p, *q;
	int result, len2;

	cout<<"Enter the First string\n";
	cin.getline(str1, 50);
	cout<<"Enter the Second string\n";
	cin.getline(str2, 50);
	
	p = str1;
	q = &str2[strlen(str2)-8];
	result = compare(p, q);

	cout<<"\n\n\tResult is : "<<result;
	return 0;
}

int compare(char *p, char *q)
{
	if(*p == '\0' || *q == '\0')
		return 0;
	if(*p > *q)
		return 1;
	else if(*p < *q)
		return -1;
	return compare(++p, ++q);
}
