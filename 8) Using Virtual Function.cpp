#include<iostream.h>
#include<conio.h>
class Person
{
public:
virtual void print()
{
    cout<<"Name of person :BOB"<<endl;
}
};
class Student : public Person
{
    public:
    void print()
    {
        cout<<"Name of student :TOM";
    }
};
void main()
{
    clrscr();
    Person *p,p1;
    p=&p1;
    p->print();
    Student s1;
    p=&s1;
    p->print();
    getch();
}
