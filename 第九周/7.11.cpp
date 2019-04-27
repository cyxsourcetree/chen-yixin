#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int arraySide=10;
    int a[arraySide]={2,4,6,8,10,12,89,68,45,37};
    int hold;
    cout<< "Data items in original order\n";
    for(int pass=0;pass<arraySide-1;pass++)
    {
        for(int j=0;j<arraySide-1;j++)
        {
        if(a[j]>a[j+1])
        {
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
        }
        }
    }
    cout<<"\nData items in ascending order\n";
    for(int k=0;k<arraySide;k++)
        cout<<setw(4)<<a[k];
        cout<<endl;
}
