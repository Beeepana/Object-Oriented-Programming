#include<iostream>
using namespace std;
	inline int SI(float p,float t,float r)
	{
		return (p*t*r)/100;
	}
	
int main()
{
	float principal,time,rate;
	cout<<"Enter principal,time and rate:";
	cin>>principal>>time>>rate;
	cout<<"Simple Interest is:"<<SI(principal,time,rate);
}
