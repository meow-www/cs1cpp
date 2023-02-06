#include <iostream.h>
#include <conio.h>
class ratio
{
public:
    void assign(int, int);
    double convert();
    void invert();
    void print();

private:
    int num, den;
};
void main()
{
    ratio x;
    x.assign(22, 7);
    clrscr();
    cout << "x=";
    x.print();
    cout << "=" << x.convert() << "\n";
    x.invert();
    cout << "1/x=";
    x.print();
    cout << "\n";
    getch();
}
void ratio::assign(int numerator, int denominator)
{
    num = numerator;
    den = denominator;
}
double ratio::convert()
{
    return (double)num / den;
}
void ratio::invert()
{
    int temp = num;
    num = den;
    den = temp;
}
void ratio::print()
{
    cout << num << "/" << den;
}
