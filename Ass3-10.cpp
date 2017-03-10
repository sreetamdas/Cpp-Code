#include<iostream>
using namespace std;
struct point
{
	int x, y;
};
int main()
{
	point p[3];
	int i;
	cout<<"Enter the Coordinates of the First point\n";
	cin>>p[1].x>>p[1].y;
	cout<<"Enter the Coordinates of the Second point\n";
	cin>>p[2].x>>p[2].y;

	p[3].x = p[1].x * p[2].x;
	p[3].y = p[1].y * p[2].y;

	cout<<"The Coordinates of the Third point are : ("<<p[3].x;
	cout<<","<<p[3].y<<")\n";
	return 0;
}
