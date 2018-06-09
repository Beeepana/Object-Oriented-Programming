     Create a class named time with data members hour,minute and second. Use member function settime() to set time, gettime() to read
time from user,addtime() to add two times and showtime() to show time in HH:MM:SS format.



# include<iostream>
using namespace std;


//Class Time
class time
{
	int m,s,h;
	int mm,ss,hh;
	int hr, min, sec;

	public:
		//Input
		void gettime()
			{
				//Time 1
				cout<<"Enter hour:";
				cin>>h;
				cout<<"Enter minute:";
				cin>>m;
				cout<<"Enter seconds:";
				cin>>s;
				
				//Time 2
				cout<<endl<<"Enter hour:";
				cin>>hh;
				cout<<"Enter minute:";
				cin>>mm;
				cout<<"Enter seconds:";
				cin>>ss;
				
			}
			
		//Display Time
		void showtime()
			{
				cout<<endl<<"time1 is:"<<h<<":"<<m<<":"<<s<<endl;
				cout<<"Time2 is:"<<hh<<":"<<mm<<":"<<ss<<endl; 
				cout<<endl<<"Added time is:"<<hr<<":"<<min<<":"<<sec;
			}
		
		//Adding Time
		void addtime()
			{
				//Addition
				hr = hh+h;
				min = mm+m;
				sec = ss+s;
				
				
				//Overflow Correcction
					
					//Second
					if(sec>60){
						int tempsec=sec%60;
						int tempmin = sec/60;
						min = min + tempmin;
						sec = tempsec;
					}
					
					//Minute
					if(min>60){
						int tempmin=min%60;
						int temphr= min/60;
						hr = hr + temphr;
						min = tempmin;
					} 
			}
};

//Main Function

int main()
{
	time t;
	t.gettime();
	t.addtime();
	t.showtime();
}

