//Вам задане деяке число (або вводить користувач, або константа в коді). Необхідно перевірити чи воно від’ємне чи додатнє, результат перевірки вивести в консоль
#include <iostream>

int main() {
    int number;

    std::cout << "Vvedit chyslo: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Chyslo dodatnie" << std::endl;
    } else {
        if (number < 0) {
            std::cout << "Chyslo vidiemne" << std::endl;
        } else {
            std::cout << "Nul" << std::endl;
        }
    }

    return 0;

}

