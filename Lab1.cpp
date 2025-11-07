//Вам задані два числа (або вводить користувач, або константи в коді). Знайдіть суму всіх цілих парних чисел в діапазоні між цими заданими числами включно



#include <iostream>

int main() {
    int a;
    int b;
    int i;
    int sum;

    std::cout << "Vvedit pershe chyslo: ";
    std::cin >> a;

    std::cout << "Vvedit druhe chyslo: ";
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

    std::cout << "Suma vsikh parnykh chysel u diapazoni: " << sum << std::endl;

    return 0;
}




