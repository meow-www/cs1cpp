#include <iostream.h>
#include <conio.h>
void main()
{
    int a[10], i, j, k, t;
    clrscr();
    cout << "Enter 10 Numbers to sort :";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Array Elements :" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    for (k = 1; k < 10; k++)
    {
        for (j = 0; j < 10 - k; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    cout << "Sorted Array :" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
