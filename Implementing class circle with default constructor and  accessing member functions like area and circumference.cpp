#include <iostream.h>
#include <conio.h>
class circle
{
private:
    float rad, x, y;

public:
    circle() // default constructor
    {
        rad = 0;
        x = 0;
        y = 0;
    }
    void getdata()
    {
        cout << "Enter x-coord and y-coord of center point :";
        cin >> x >> y;
        cout << "Enter radius :";
        cin >> rad;
    }
    void area()
    {
        float ar;
        ar = 3.14 * rad * rad;
        cout << "Area :" << ar << endl;
    }
    void circumference()
    {
        cout << "Circumference :" << 2 * 3.14 * rad << endl;
    }
};
void main()
{
    clrscr();
    circle o;
    o.getdata();
    o.area();
    o.circumference();
    getch();
}
