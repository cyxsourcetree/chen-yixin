#include <iostream>
#include<string>
using namespace std;

int main()
{
    int counter = 1;
    int largest = 0;
    int number;
    while(counter<=10)
    {
        cout<<"Enter number:"<<endl;
        int largest = 0;
        cin>>number;
        if(number>=largest)
            largest=number;
    }
    cout<<"The largest number is"<<largest<<endl;
}
