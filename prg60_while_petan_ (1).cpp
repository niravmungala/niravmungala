#include<iostream>
using namespace  std;
int main()
{
    int i,j;
    i=5;
    while (i>=1)
    {
        j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        i--;
        cout<<"\n";
    }
    
}