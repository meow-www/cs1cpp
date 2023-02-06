#include <iostream.h>
#include <conio.h>
class Ratio
{
public:
    void print()
    {
        cout << "\nNow X is ALIVE" << endl;
    }
    Ratio()
    {
        cout << "OBJECT IS BORN" << endl;
    }
    ~Ratio()
    {
        cout << "OBJECT DIES";
    }
};
void main()
{
    clrscr();
    Ratio r1;
    r1.print();
    getch();
}
