#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"a change is made"<<endl;
    cout << "enter size" << endl;
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n / 2 - i || j > n / 2 + i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = n / 2 + 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( j<n / 2 - (n - 1 - i) || j> n / 2 + (n - 1 - i))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
