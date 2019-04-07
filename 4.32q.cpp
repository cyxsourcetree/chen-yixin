#include <iostream>

using namespace std;

int main()
{
   double a;
   double b;
   double c;
   cout<<"Enter the numbers" ;
   cin>>a>>b>>c;
   if(a+b>c||a+c>b||b+c>a)
    cout<<"Can represent the three sides of a triangle. ";
    else
    cout<<"Can not represent the three sides of a triangle.";
}
