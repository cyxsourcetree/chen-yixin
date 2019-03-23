#include <iostream>
#include <string>
using namespace std;


class Dateview
{
public:
    void setyears (int years)
    {
        year = years;
    }
    void setmonth (int months)
    {
        if(months >= 1 && months <=12)
        {
            month = months;
        }
        else
        {
            month = 1;
            cout << "错误！输入的月份应该在1~12之间"<<endl;
            cout << endl;
        }
    }
    void setday (int days)
    {
        day = days;
    }
    int getyears()
    {
        return year;
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
    void displayDate()
    {
        cout <<"今天是："<< year << "/" <<month << "/"<<day<<endl;
    }
private:
int year;
int month;
int day;
};

int main()
{
    Dateview date;
    int year;
    int month;
    int day;
    cout << "请分别输入今天的年月日"<<endl;
    cin >> year >> month >> day;
    date.setday(day);
    date.setmonth(month);
    date.setyears(year);
    date.displayDate();
}
