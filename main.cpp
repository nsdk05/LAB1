#ifdef _WIN32
#include <windows.h>
#endif

#include <clocale>
#include <iostream>

#include "Methods.h"

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    while (true) {
        std::cout << "\nРазделы лабораторной №1 \n";
        std::cout << "Выберите Задание из лабораторной №1 \n";
        std::cout << "Задание 1: Методы \n";
        std::cout << "Задание 2: Условия \n";
        std::cout << "Задание 3: Циклы \n";
        std::cout << "Задание 4: Массивы \n";
        std::cout << "Выход: 0 \n";
        int choise_task = ReadInt("Ваш выбор :");

        switch (choise_task) {
            case 1:
                Task1();
                break;
            case 2:
                Task2();
                break;
            case 3:
                Task3();
                break;
            case 4:
                Task4();
                break;
            case 0:
                return 0;
            default:
                std::cout << "Такого задания нет \n";
                break;
        }
    }
}
