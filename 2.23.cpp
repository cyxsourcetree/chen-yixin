#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int min = 0;
    int max = 0;

    cout << "Input five integers :";
    cin >> a >> b >> c >> d >> e;

    min = a;
    if ( min > b )
        min = b;
    if ( min > c )
        min = c;
    if ( min > d )
        min = d;
    if ( min > e )
        min = e;
    cout << " Smallest is " << min << endl;

    max = a;
    if ( max < b )
        max = b;
    if ( max < c )
        max = c;
    if ( max < d )
        max = d;
    if ( max < e )
        max = e;
    cout << " Largest is " << max << endl;


    return 0;



}
