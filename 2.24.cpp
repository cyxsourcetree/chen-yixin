#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    cout << "Enter an integer :";
    cin >> x;
    if ( x % 2 == 0 )
        cout << x << " is an even number " << endl;
    else
        cout << x << " is an odd number " << endl;
    return 0;

}


