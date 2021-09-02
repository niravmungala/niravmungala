#include<iostream>
using namespace std;
int main()
{
    int a[5], i;
    for (i = 0; i < 5;i++)
    {
        cout << "enter a:"<<int(i);
        cin >> a[i];
    }
        for (i = 0; i < 5;i++)
        {
            cout<<"\n :" << a[i];
        }
    
}