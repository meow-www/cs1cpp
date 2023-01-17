#include<iostream.h>
#include<conio.h>
class ratio
{
    private:
    int num,den;
    float f,ref;
    double n;
    public:
    void assign();
    void convert();
    void invert();
    void print();
};
void ratio::assign()
{
    cout<<" Enter the numerator of the ratio\n";
    cin>>num;
    cout<<" Enter the denominator of the ratio\n";
    cin>>den;
    f=(float)num/den;
}
void ratio::convert()
{
    n=f;
}
void ratio::invert()
{
    ref=1/f;
}
void ratio::print()
{
    cout<<"\n The original ratio is=\n"<<f;
    cout<<"\n The reciprocal of the ratio is=\n"<<ref;
}
void main()
{
    clrscr();
    ratio obj;
    obj.assign();
    obj.convert();
    obj.invert();
    obj.print();
    getch();
}
