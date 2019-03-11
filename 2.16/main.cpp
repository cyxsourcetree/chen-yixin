 // function main begins program execution
#include <iostream>

using namespace std;

int main()
{
      int number1 = 0; // first integer to add (initialized to 0)
    int number2 = 0; // second integer to add (initialized to 0)
    int result1 = 0; // sum of number1 and number2 (initialized to 0)
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;


    cout << "Enter first integer: ";
    cin >> number1;
    cout << "Enter second integer: ";
    cin >> number2;
    result1 = number1 + number2;
    result2 = number1 * number2;
    result3 = number1 - number2;
    result4 = number1 / number2;
    cout << "result1 is " << result1 << endl;
    cout << "result2 is " <<  result2 << endl;
    cout << "result3 is " << result3 << endl;
    cout << "result4 is " <<  result4 << endl;
} // end function main
