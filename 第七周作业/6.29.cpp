#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
bool isPrime(int);

int main()
{
    int count =1;
    cout<<"The prime number form 1 to 1000 are:"<<endl;
    cout<<setw(6)<<2;
    for(int loop=3;loop<10000;loop+=2)
    {
        if(isPrime(loop))
        {
            count++;
            cout<<setw(6)<<loop;
            if (count%10==0)
                cout<<'\n';

        }
    }
    cout<<endl<<"total of"<<count
    <<"Prime numbers between 1 and 10000."<<endl;
}
 bool isPrime (int n)
 {
     for (int loop2 =2;loop2<=n/2;loop2++)
     {
         if(n%loop2==0)
            return false;
     }
     return true;
 }
