#include "Gradebook.h"
#include<iostream>
using namespace std;
void Gradebook::setCoursename(string name)
{
    Coursename=name;
}
string Gradebook::getCoursename()const
{
    return Coursename;
}
void Gradebook::setTeachername(string a)
{
   Teachername=a;
}
string Gradebook::getTeachername()const
{
    return Teachername;
}
void Gradebook::displaymessage()const
{
    cout<<"Welcome to the gradebook for \n"<<getCoursename()
    <<"!"<<"This course is presented by:"<< getTeachername()<<endl;
}
