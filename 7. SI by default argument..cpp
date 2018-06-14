#include<iostream>
using namespace std;
float SI(float p,float t,float r=15)
{
	return (p*t*r)/100;
}
int main()
{
	float principle,time;
	cout<<"enter principle and time:";
	cin>>principle>>time;
	cout<<"Simple interest is:"<<SI(principle,time);
}
