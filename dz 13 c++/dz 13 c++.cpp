#include <iostream>
using namespace std;



void power_f(int num1, int num2)
{
    int power = 1;
    for (int i = num2; i > 0; i--) {
        power *= num1;
    }
    cout << "Simple func = " << power << "\n";
}

void power_p(int num1, int num2, int* power)
{
    *power = 1;
    for (int i = num2; i > 0; i--) {
        *power *= num1;
    }
}
int main()
{
    cout << "Input num1: ";
    int num1;
    cin >> num1;
    cout << "Input num2: ";
    int num2;
    cin >> num2;
    int result = 0;
    power_f(num1, num2);
    power_p(num1, num2, &result);
    cout << "Pointer func = " << result;
}

