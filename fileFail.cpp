#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f1, f2, f3, f4;
	ofstream file;

	int roll, m1, m2;
	char name[25];

	f1.open("Name.txt", ios::out);
	f2.open("Roll.txt", ios::out);
	f3.open("Marks1.txt", ios::out);
	f4.open("Marks2.txt", ios::out);

	cout<<"Enter the Roll, Name, and marks\n";
	for (int i = 0; i < 2; i++)
	{
		cin>>roll>>name>>m1>>m2;
		f1<<name<<";";
		f2<<roll<<" ";
		f3<<m1<<" ";
		f4<<m2<<" ";
	}
	cout<<"Files created\n";
	f1.close();
	f2.close();
	f3.close();
	f4.close();
	

	f1.open("Name.txt", ios::in);
	f2.open("Roll.txt", ios::in);
	f3.open("Marks1.txt", ios::in);
	f4.open("Marks2.txt", ios::in);
	file.open("Student.txt", ios::out);

	while((!f1.eof())&&(!f2.eof())&&(!f3.eof())&&(!f4.eof()))
	{
		f1.getline(name, 25, 't');
		f2>>roll;
		f3>>m1;
		f4>>m2;
		file<<roll<<" "<<name<<" "<<m1<<" "<<m2<<"\n";

	}
	cout<<"Done\n";
	return 0;

	}
