#include <bits/stdc++.h>
using namespace std;

typedef struct employee
{
    int a, b;
    float c;
    char d;
} empl;

int main()
{
    // int n =6;
    // int marks[6] = {32, 99, 87, 56, 78, 34};

    // int* p = marks;
    // cout<<* p<<endl;
    // cout<<* (p+1)<<"This Is Awesome."<<endl;
    // cout<<* (p+2)<<"This Is Awesome."<<endl;
    // cout<<* (p+3)<<"This Is Awesome."<<endl;
    // cout<<* (p+4)<<"This Is Awesome."<<endl;
    // cout<<* (p+5)<<"This Is Awesome."<<endl;

    empl chetan;

    cin >> chetan.a >> chetan.b >> chetan.c >> chetan.d;

    cout << chetan.a << endl;
    cout << chetan.b << endl;
    cout << chetan.c << endl;
    cout << chetan.d << endl;

    return 0;
}