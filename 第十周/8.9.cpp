#include <iostream>

using namespace std;

int main()
{
    long value1 = 200000;
    long value2;

    long *Ptr,long;

    Ptr=&value1;

    cout << *Ptr;

    value2=*Ptr;

    cout << value2;

    cout << &value1;

    cout << Ptr;


}
