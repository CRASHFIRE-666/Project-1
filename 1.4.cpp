#include <iostream>
using namespace std;

int main()
{
setlocale( LC_ALL,"Russian" );
double a, b;
cout << "Введите числа через пробел: ";
cin >> a >> b;
a = a*a; b = b*b;
cout << endl << "Сумма: " << a + b;
cout << endl << "Разность: " << a - b;
cout << endl << "Произведение: "<< a*b;
cout << endl << "Частное: "<< a/b;
return 0;
}
