#include <iostream>
#include<math.h>

using namespace std;
     double a ;
     double b;
     double length=0;


 void hypotenuse()
     {
          length= a*a+b*b;
         length=sqrt(length);
     }

int main()
{
     cout<<"please enter the length of two sides.";
     cin>>a>>b;
     cout<<length;
}
