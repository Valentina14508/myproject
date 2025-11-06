Вам задане деяке число (або вводить користувач, або константа в коді). Необхідно перевірити чи воно від’ємне чи додатнє, результат перевірки вивести в консоль
#include <iostream>

int main() {
    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Число додатнє" << std::endl;
    } else {
        if (number < 0) {
            std::cout << "Число від’ємне" << std::endl;
        } else {
            std::cout << "Нуль << std::endl;
        }
    }

    return 0;
}