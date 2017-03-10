#include<fstream>
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	fstream file;
	file.open("Data.txt", ios::out);

	int i, x;
	for(i=0;i<20;i++)
	{
		x = rand() % 50;
		file<<x<<" ";
	}
	file.close();

	file.open("Data.txt", ios::in);

	cout<<"The Numbers in the file are :\n";
	while(!file.eof())
	{
		file>>x;
		cout<<x<<" ";

	}
	file.close();
	return 0;
}
