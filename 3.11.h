#ifndef GRADEBOOK_H
#define GRADEBOOK_H
using namespace std;
#include<string>
class Gradebook
{
    public:
         void setCoursename(string);
         string getCoursename()const;
         void setTeachername(string);
         string getTeachername()const;
         void displaymessage()const;
    private:
        string  Coursename;
        string  Teachername;
};

#endif // GRADEBOOK_H
