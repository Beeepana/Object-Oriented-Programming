#include<iostream>
#define SQUARE(x)((x)*(x))
#define CUBE(x) ((SQUARE(x)*(x))

using namespace std;
int main()
{
	int n=3;
	cout<<"Cube of "<<n<<" is  :"<<CUBE(n));

}
