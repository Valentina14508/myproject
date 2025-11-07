//Вам задане деяке число (або вводить користувач, або константа в коді). Перетворіть його в строку (std::string)
#include <iostream>

int main() {
    int number;
    char buffer[99]; 

    std::cout << "Vvedit chyslo: ";
    std::cin >> number;

    std::sprintf(buffer, "%d", number);

    std::cout << << buffer << std::endl;

    return 0;

}

