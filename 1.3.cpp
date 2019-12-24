#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    float a,b,s;
    cout<<"Введите A и B"<<endl;
    cin>>a>>b;
    s=(a+b)/2;
    cout<<"Среднее арифмитическое="<<s<<endl;
    return 0;
}
