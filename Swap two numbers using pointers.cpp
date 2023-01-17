#include <iostream.h>
#include <conio.h>
void swap(int *, int *);
void main()
{
    int n1, n2;
    clrscr();
    cout << "Enter Number 1 :";
    cin >> n1;
    cout << "Enter Number 2 :";
    cin >> n2;
    cout << "Numbers before swapping :" << n1 << "\t" << n2 << endl;
    swap(&n1, &n2);
    cout << "Numbers after swapping :" << n1 << "\t" << n2 << endl;
    getch();
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
