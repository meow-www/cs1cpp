#include<iostream.h>;
#include<conio.h>;
class Ratio
{
int num,den;
public:
void get()
{
    cin>>num>>den;
}
void show()
{
    cout<<num<<"/"<<den<<endl;
}
    Ratio operator +(Ratio r)
{

//o1.operator(o2)
Ratio t;
if(den==r.den)
{
    t.num=num+r.num;
    t.den=den;
}
else
{
    t.num=num*r.den+r.num*den;
    t.den=den*r.den;
}
return t;
}
Ratio operator /(Ratio r)
{
    Ratio t;
    t.num=num*r.den;
    t.den=den*r.num;
    return t;
}
};
void main()
{
    clrscr();
    Ratio o1,o2,o3;
    cout<<"Enter Num and Den of Ratio 1 :";
    o1.get();
    cout<<"Ratio 1:";
    o1.show();
    cout<<"Enter Num and Den of Ratio 2 :";
    o2.get();
    cout<<"Ratio 2:";
    o2.show();
    o3=o1+o2; //o1.operator +(o2)
    cout<<"Addition of 2 ratios :";

    o3.show();
    cout<<"Division of 2 ratios :";
    o3=o1/o2; //o1.operator /(o2)
    o3.show();
    getch();
}
