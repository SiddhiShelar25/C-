// print the pattern user input: n= 4
/*
1
0 1
1 0 1
0 1 0 1

     */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    int a = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            a = 1;
        else
            a = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            // Flipping
            if (a == 1)
                a = 0;
            else
                a = 1;
        }
        cout << endl;
    }
}
