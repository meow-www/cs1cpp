#include <iostream.h>
#include <conio.h>
int binsearch(int[], int); // function prototype
void main()
{
    int a[10], i, j, k, t, s, loc;
    clrscr();
    cout << "Enter 10 array elements:" << endl;
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
    cout << "Enter Number to search :";
    cin >> s;
    loc = binsearch(a, s);
    if (loc == -1)
    {
        cout << "Number not found";
    }
    else
    {
        cout << "Number found at position :" << loc + 1;
    }
    getch();
}
int binsearch(int a[], int no)
{
    int low = 0, mid, high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (no == a[mid])
            return mid;
        if (no < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
