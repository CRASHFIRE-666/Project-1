#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale( LC_ALL,"Russian" );
    double a, b;
    cout << "Введите числа" <<endl;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "Сумма: " << a + b <<endl;
    cout << "Разность: " << a - b<<endl;
    cout << "Произведение: "<< a*b<<endl;
    cout << "Частное: "<< a/b<<endl;
    return 0;
}
