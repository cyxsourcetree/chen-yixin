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
            cout << "����������·�Ӧ����1~12֮��"<<endl;
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
        cout <<"�����ǣ�"<< year << "/" <<month << "/"<<day<<endl;
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
    cout << "��ֱ���������������"<<endl;
    cin >> year >> month >> day;
    date.setday(day);
    date.setmonth(month);
    date.setyears(year);
    date.displayDate();
}
