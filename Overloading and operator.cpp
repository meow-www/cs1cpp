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
