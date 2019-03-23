#include <iostream>

using namespace std;
class Employee
{
public:
    void setMonthlypay(int monthly)
    {
        if (monthly > 0)
       {
           pay = monthly;
       }
       else
       {
           pay = 0;
       }
    }
    void setSurname (string ofsurname)
    {
        surname = ofsurname;
    }
    void setname (string ofname)
    {
        name = ofname;
    }
    void dispaymessage()
    {
        cout << "姓名"<<" "<< surname <<" "<< name << "\n年薪" << "  " << pay * 12 <<endl;
    }
    void Plus()
    {
        pluspay = pay*1.2+pay*12;
    }
    void plusdispay()
    {
        cout << "加薪后的年薪为 " << " " <<pluspay ;
    }
    int getMonthlypay()
    {
        return pay;
    }
    string getSurname()
    {
        return surname;
    }
    string getname()
    {
        return name;
    }
private:
    int pay;
    double pluspay;
    string surname;
    string name;
};


int main()
{
    Employee someone;
    string name1;
    cin >> name1;
    cout << name1<<endl;

    cout<<endl;

}
