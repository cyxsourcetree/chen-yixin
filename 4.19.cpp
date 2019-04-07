#include <iostream>

using namespace std;

int main()
{
    int largest = 0;
    int second =0;
    int counter = 1;
    while(counter <= 10)
    {
        cout<<"enter number:";
        int number;
        cin>>number;
    if(number>largest)
        largest=number;
    else if(number>second)
        second=number;
        counter=counter+1;
    }
    cout<<"The largest number is:"<<largest<<endl;
    cout<<"The second number is:"<<second;
}
