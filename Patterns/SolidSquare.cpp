// Print the given pattrn. User input -> n -> side of square
/* ****
 ****
 ****
 **** */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter one side of Square:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
            cout<<"*";
        }
        cout << endl;
    }
}