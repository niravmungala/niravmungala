#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter char:";
    cin >> ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout << "char is vowel:";
    }
    else
    {
        cout << "char is consonant:";
    }
}