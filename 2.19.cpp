 #include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int min = 0;
    int max = 0;


    cout << "Input three different integers :";
    cin >> x >> y >> z;
    cout << " Sum is " << x + y + z << endl;
    cout << " Average is " << (x + y + z)/3 << endl;
    cout << " Product is " << x * y * z << endl;

    if ( x > y )
        min = y;
    else
        min = x;
    if ( min > z )
        min = z;
    cout << " Smallest is " << min << endl;

    if ( x > y )
        max = x;
    else
        max = y;
    if ( max < z )
        max = z;
    cout << " Largest is " << max << endl;

    return 0;
}


