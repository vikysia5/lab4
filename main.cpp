#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 double x, y; 
 int k = 1;    
 cout<<"Введiть значення x= ";    cin>> x; 
 cout<< "\nРезультати:\n";
 M1:  
switch ( k )
  {
    case 1:   y= sqrt(x+1)-pow(cos(x),2); break; 

    case 2:   y=exp(0.01)+log(x*x); break; 

    case 3:   y=sqrt(x)+pow(sin(x-M_PI),2); break; 

    case 4:   y=x+log10(x); break; 

  }
 cout<< "y" << k << " = " << y << endl;
 k++;
 if (k <= 4) goto M1;
 return 0;
}
