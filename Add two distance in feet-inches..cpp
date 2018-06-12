     Define a class with
	     data members:
                          -feet and inches
             member function:
                          -to read data member
			  -to display result in format feet-inches
			  -to add two distance object and returning distance object.


#include<iostream>
using namespace std;
class length
{
	private:
		
	int feet;
	int inches;
	public:
			
	void setdata(int f,int i)
	{
	   feet=f;
	   inches=i;
	}
	
	void display()
	{
	   cout<<"feet:"<<feet;
	   cout<<"inches:"<<inches;
	}
    void addlength(length,length);
};
	
void length::addlength(length d1,length d2)
	{
		feet=d1.feet+d2.feet;
		inches=d1.inches+d2.inches;
		feet=feet+inches/12;
		inches=inches%12;
	}
	
int main()
	{
		length d1,d2,d3;
		d1.setdata(4,5);
		d2.setdata(6,7);
		d3.adddistance(d1,d2);
		cout<<endl<<"d1:";
		d1.display();
		cout<<endl<<"d2:";
		d2.display();
		cout<<endl<<"d3:";
		d3.display();
	}
