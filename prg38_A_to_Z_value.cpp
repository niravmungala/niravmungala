#include <iostream>
using namespace std;
int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << char(ch) << " " << int(ch) << endl;
    }
}