 // comparing integers using if statements, relational operators
 // and equal operators.
#include <iostream> // allows program to perform input and output

   using std :: cout; // program uses cout
    using std :: cin; // program uses cin
     using std :: endl; //program uses endl
 // function main begins program execution
int main()
{
   int x = 0; // first integer to compare ( initialized to 0 )
   int y = 0; // second integer to compare ( initialized to 0 )

   cout << "Enter two integers to compare: "; // prompt user for data
   cin >> x >>y; // read two integers from user

   if ( x > y )
    cout  <<  x << " is large " << endl;

    if (x < y )
    cout << y << " is larger " << endl;
    if(x == y )
    cout <<"These number is equal"<< endl;
}



