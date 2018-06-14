#include<iostream>
using namespace std;
class amount
{
	private:
		
	int rupees;
	int paisa;
	public:
			
	void setdata(int r,int p)
	{
	  rupees=r;
	  paisa=p;
	}
	
	void display()
	{
	   cout<<"rupees:"<<rupees;
	   cout<<"paisa:"<<paisa;
	}
    void addamount(amount,amount);
};
	
void amount::addamount(amount a1,amount a2)
	{
		rupees=a1.rupees+a2.rupees;
		paisa=a1.paisa+a2.paisa;
		rupees=rupees+paisa/100;
		paisa=paisa%100;
	}
	
int main()
	{
		amount a1,a2,a3;
		a1.setdata(400,500);
		a2.setdata(120,170);
		a3.addamount(a1,a2);
		cout<<endl<<"a1:";
		a1.display();
		cout<<endl<<"a2:";
		a2.display();
		cout<<endl<<"a3:";
		a3.display();
	}
