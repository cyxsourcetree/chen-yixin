#include <iostream>

using namespace std;
int integerPower(int,int);
int main()
{
    int exP;
    int base;
    cout<<"Enter base and exponent:";
    cin>>base>>exP;
    cout<<base<<"to the power"<<exP<<" is:"
    <<integerPower(base,exP)<<endl;
}

int  integerPower(int b,int e)
{
    int product =1;
    for(int i=1;i<=e;i++)
        product*=b;
    return product;
}


