#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, s, p;
    cout << "Введите стороны прямоугольника" << endl;
    cin >> a >> b;
    s=a*b;
    p=(a+b)*2;
    cout <<"S="<<s<<", P="<<p;
    return 0;
}
