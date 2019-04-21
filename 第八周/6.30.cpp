#include <iostream>
#include<iomanip>
using namespace std;
int reverseDigits(int);

int main()
{
    int a;
    cout<<"Enter a number between 1 to 9999.";
    cin>>a;

    cout<<"The number with its digits reversed is:";
    cout<<reverseDigits(a)<<endl;
}
    int reverseDigits(int n)
    {
        int reverse =0;
        while(n>0)
        {
            reverse*=10;
            reverse+=n%10;
            n/=10;
        }
        return reverse;
    }

