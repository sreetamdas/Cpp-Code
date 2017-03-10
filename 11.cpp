/* Program for Sales Management */
#include<iostream>
#include<iomanip>
using namespace std;
struct slip
{
	int person_no;
	float sales;
	int product_no;
};
int main()
{
	slip s[5][4];
	float sum_product[5], sum_person[4];
	cout<<"Enter the Details\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<"Enter the "<<i+1<<" product details of "<<j+1<<" Salesperson\n";
			cin>>a[i][j].person_no>>a[i][j].product_no>>a[i][j].sales;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum_product[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			sum_product[i] += a[i][j].sales;
		}
	}
	for (int j = 0; j < 4; j++)
	{
		sum_person[j] = 0;
		for (int i = 0; i < 5; i++)
		{
			sum_person[j] += a[i][j].sales;
		}
	}
	cout<<"The Total Sales for the Day are :\n";
	


}