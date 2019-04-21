#include <iostream>

using namespace std;
int qualitypPoints(int);

int main()
{
    int average;
    for (int loop =1;loop<=5;loop++)
    {
        cout<<"\nEnter the student's average:";
        cin>>average;
        cout<<average<<"on a 4 point scale is "
        <<qualitypPoints(average)<<endl;
    }
    cout<<endl;
}
int qualitypPoints(int average)
{
    if(average>=90)
        return 4;
    else if(average>=80)
    return 3;
    else if(average>=70)
    return 2;
    else if(average>=60)
    return 1;
    else//0<=average<60
        return 0;

}
