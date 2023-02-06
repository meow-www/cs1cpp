#include <iostream.h>
#include <conio.h>
class student
{
protected:
    int roll;
    char name[20];

public:
    void getinfo()
    {
        cout << "Enter rollno and name : "; cin>>roll>>name;
    }
    void showinfo()
    {
        cout << "Roll No :" << roll << endl;
        cout << "Name :" << name << endl;
    }
};
class test : public student
{
protected:
    int m1, m2;

public:
    void getmarks()
    {
        cout << "Enter marks of Subject 1:";
        cin >> m1;
        cout << "Enter marks of Subject 2:";
        cin >> m2;
    }
    void showmarks()
    {
        cout << "Subject1 Marks:" << m1 << endl;
        cout << "Subject 2 Marks :" << m2 << endl;
    }
};
class sports
{
protected:
    int spmarks;

public:
    void getsports()
    {
        cout << "Enter Sports marks :";
        cin >> spmarks;
    }
    void showsports()
    {
        cout << "Sports Marks :" << spmarks << endl;
    }
};
class result : public test, public sports
{
    int total, per;

public:
    void calculate()
    {
        total = m1 + m2 + spmarks;
        per = total / 3;
    }
    void showresult()
    {
        cout << "Total Marks :" << total << endl;
        cout << "Percentage :" << per;
    }
};
void main()
{
    clrscr();
    result s;
    s.getinfo();
    s.getmarks();
    s.getsports();
    s.calculate();
    s.showinfo();
    s.showmarks();
    s.showsports();
    s.showresult();
    getch();
}
