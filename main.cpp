#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double computeWCF(double v, double t);
//Precondition: v and t are both non-negative, non-zero numbers.
//Returns the wind chill factor.

//void clearScreen(); //Clears the console screen;

int main(int argc, char* argv[])
{
	char ans;
	double v, t;

	do
	{
	   cout<<"Enter today's temperature (in degrees Celsius <= 10) and wind speed (in m/sec): ";
	   cin>>t;
	   cin>>v;
	   cout.setf(ios::showpoint);
	   cout.setf(ios::fixed);
	   cout.precision(2);
	   cout<<"The wind chill factor for today is: "<< computeWCF(v, t)<<"°C\n\nStart over? (y/n) ";
	   cin>>ans;
	    
	   if(ans == 'y' || ans == 'Y')
		   cout<<"\n\n";
	}while(ans == 'y' || ans == 'Y');

	system ("PAUSE");
	return 0;
}

double computeWCF(double v, double t)
{
	if (t > 10)
	{
		cout<<"Fatal error: Aborting program.";
		exit(1);
	}

	double w = 33.0 - (((10*sqrt(v)) - v + 10.5)*(33.0 - t))/23.1;
	
	return w;
}

/*
void clearScreen()
{
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
*/
