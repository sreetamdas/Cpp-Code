/* A file contains integers, read from it and write Odd numbers oddFile, and 
even numbers in evenFile */
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int x;
	fstream ofsOdd, ofsEven;
	ofstream ofs("Integers.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		x = rand() % 50;
		ofs<<x<<" ";
	}
	ofs.close();

	ifstream ifs("Integers.txt");
	ofsOdd.open("oddFile.txt", ios::out);
	ofsEven.open("evenFile.txt", ios::out);
	while(!(ifs.eof()))
	{
		ifs>>x;
		if(x % 2)
			ofsOdd<<x<<" ";
		else
			ofsEven<<x<<" ";
	}

	ifs.close();
	ofsEven.close();
	ofsOdd.close();
	return 0;
}
