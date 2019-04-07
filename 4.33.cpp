#include <iostream>

using namespace std;

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    cout<<"Enter three numbers.";
    cin>>a>>b>>c;
    {
        if(a*a+b*b==c*c)
    cout<<"Is true";
     else if(b*b+c*c==a*a)
      cout<<"Is true";
        else if(a*a+c*c==b*b)
           cout<<"Is true";
    }


}
