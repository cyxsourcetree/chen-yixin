#include <iostream>

  using namespace std;
  int main()
{
      const int SIZE = 12;
      double monthlyTemperatures [SIZE] ;
      for(int i = 0;i < 12; i++)
{
      cin>>monthlyTemperatures[i] ;
}
    for(int i =0;i < 12; i++)
{
    cout<<monthlyTemperatures[i]<<"\t";
}
}

