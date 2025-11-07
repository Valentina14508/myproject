//Знайдіть всі “щасливі” квитки з номерами в діапазоні від 000000 до 999999. Щасливим зазивається квиток, у якого сума цифр першої половини рівна сумі цифр другої половини, наприклад: 526265, 145226
#include <iostream>

int main() {
    int ticket;
    int d1, d2, d3, d4, d5, d6;
    int sum1, sum2;

    std::cout << "Введіть 6-значний номер квитка: ";
    std::cin >> ticket;

    d6 = ticket % 10;
    ticket = ticket / 10;

    d5 = ticket % 10;
    ticket = ticket / 10;

    d4 = ticket % 10;
    ticket = ticket / 10;

    d3 = ticket % 10;
    ticket = ticket / 10;

    d2 = ticket % 10;
    ticket = ticket / 10;

    d1 = ticket % 10;

    sum1 = d1 + d2 + d3;
    sum2 = d4 + d5 + d6;

    if (sum1 == sum2) {
        std::cout << "Щасливий квиток" << std::endl;
    } else {
        std::cout << "Не щасливий квиток" << std::endl;
    }

    return 0;

}
