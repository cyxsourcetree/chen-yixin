 #include <iostream>

using namespace std;

int main()
{
    int *number;
    cout << *numbr << endl;

    double *realPtr;
    long *integerPtr;
    *integerPtr = *realPtr;

    int *x;
    int y;
    *x = y;

    double x = 19.34;
    double *xPtr = &x;
    cout << *xPtr;
}
