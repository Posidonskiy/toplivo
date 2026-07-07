#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	system("chcp 65001 > nul");
    float number, number2, result,number3 = 0.0f;
    
	cout << "Введите сколько литров топлива ";
    cin >> number;
	cout << "Введите цену за 1 литр бензина";
	cin >> number2;
	cout << "Введите скидку на 1 литр бензина";
	cin >> number3;
	result = number * (number2 - number3);

	cout << "Сумма к оплате: " << result << endl;
	cin>> result;

    return 0;
}
