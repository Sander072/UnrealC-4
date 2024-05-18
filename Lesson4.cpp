// Lesson4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::string a = "The fourth lesson";
    std::cout << a << "\n";
    std::cout << size(a) << "\n";
    std::cout << a.substr(0, 1) << "\n";
    std::cout << a.substr(16);
}

