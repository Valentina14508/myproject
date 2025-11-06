Вам задані два числа (або вводить користувач, або константи в коді). Знайдіть суму всіх цілих парних чисел в діапазоні між цими заданими числами включно



#include <iostream>

int main() {
    int a;
    int b;
    int i;
    int sum;

    std::cout << "Введіть перше число: ";
    std::cin >> a;

    std::cout << "Введіть друге число: ";
    std::cin >> b;

    sum = 0;

    if (a <= b) {
        i = a;
        while (i <= b) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
            i = i + 1;
        }
    } else {
        i = b;
        while (i <= a) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
            i = i + 1;
        }
    }

    std::cout << "Сума всіх парних чисел у діапазоні: " << sum << std::endl;

    return 0;
}


