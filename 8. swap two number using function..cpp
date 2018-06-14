#include<iostream>
using namespace std;

void exc (int&x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=10,b=20;
	exc(a,b);
	cout<<"a="<<a<<endl<<"b="<<b;
	
}
