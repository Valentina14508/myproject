//В коді задана строка типу const char *. Необхідно вивести в консоль довжину цієї строки
#include <iostream>

int main() {
    const char* str = "Аааааааааа";
    int length = 0;

    while (str[length] != '\0') {
        length = length + 1;
    }

    std::cout << "Dovzhyna:  " << length << std::endl;

    return 0;

}

