#include "Methods.h"

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

// Задание 1 Методы

// Задача 1 Дробная часть
double Fraction(double number) {
    return number - static_cast<int64_t>(number);
}

// Задача 3 Букву в число
int CharToNum(char symbol) {
    return symbol - '0';
}

// Задача 5 Двузначное
bool Is2Digits(int number) {
    if (10 <= number && number <= 99) {
        return true;
    } else {
        return false;
    }
}

// Задача 7 Диапазон
bool IsInRange(int left, int right, int number) {
    if ((left <= number && number <= right) ||
        (left >= number && number >= right)) {
        return true;
    } else {
        return false;
    }
}

// Задача 9 Равенство
bool IsEqual(int number_one, int number_two, int number_three) {
    if (number_one == number_two && number_two == number_three) {
        return true;
    } else {
        return false;
    }
}

// Задание 2 Условия

// Задача 1 Модуль числа
int AbsNum(int number) {
    if (number >= 0) {
        return number;
    } else {
        return -number;
    }
}

// Задача 3 Тридцать пять
bool Is35(int number) {
    bool by3 = (number % 3 == 0);
    bool by5 = (number % 5 == 0);
    if (by3 != by5) {
        return true;
    } else {
        return false;
    }
}

// Задача 5 Тройной максимум
int Max3(int number1, int number2, int number3) {
    int result = number1;
    if (number2 > result) {
        result = number2;
    }
    if (number3 > result) {
        result = number3;
    }
    return result;
}

// Задача 7 Двойная сумма
int Sum2(int number1, int number2) {
    int sum = number1 + number2;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

// Задача 9 День недели
std::string Day(int day_number) {
    switch (day_number) {
        case 1:
            return "Понедельник";
        case 2:
            return "Вторник";
        case 3:
            return "Среда";
        case 4:
            return "Четверг";
        case 5:
            return "Пятница";
        case 6:
            return "Суббота";
        case 7:
            return "Воскресенье";
        default:
            return "Это не день недели";
    }
}

// Задание 3 Циклы

// Задача 1 Числа подряд
std::string ListNums(int limit) {
    std::string result = "";
    for (int i = 0; i <= limit; ++i) {
        result += std::to_string(i) + " ";
    }
    if (!result.empty()) {
        result.pop_back();
    }
    return result;
}

// Задача 3 Чётные числа
std::string Chet(int limit) {
    std::string result = "0";
    for (int i = 2; i <= limit; i += 2) {
        result += " " + std::to_string(i);
    }
    return result;
}

// Задача 5 Длина числа
int NumLen(int64_t num) {
    if (num == 0) {
        return 1;
    } else {
        int count = 0;
        while (num != 0) {
            num = num / 10;
            ++count;
        }
        return count;
    }
}

// Задача 7 Квадрат
void Square(int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

// Задача 9 Правый треугольник
void RightTriangle(int size) {
    for (int i = 1; i <= size; ++i) {
        for (int j = 0; j < size - i; ++j) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

// Задание 4 Массивы

// Задача 1 Поиск первого значения
int FindFirst(const int* arr, int number, int limit) {
    for (int i = 0; i < limit; ++i) {
        if (arr[i] == number) {
            return i;
        }
    }
    return -1;
}

// Задача 3 Поиск максимального по модулю
int MaxAbs(const int* arr, int limit) {
    int result = 0;
    for (int i = 0; i < limit; ++i) {
        if (AbsNum(arr[i]) > AbsNum(result)) {
            result = arr[i];
        }
    }
    return result;
}

// Задача 5 Добавление массива в массив
int* Add(const int* arr, const int* ins, int pos, int limit1, int limit2) {
    if (pos < 0 || pos > limit1 || limit1 < 0 || limit2 < 0) {
        return nullptr;
    }
    int* result = new int[limit1 + limit2];
    int limit_result = 0;
    for (int i = 0; i < pos; ++i) {
        result[limit_result] = arr[i];
        ++limit_result;
    }
    for (int i = 0; i < limit2; ++i) {
        result[limit_result] = ins[i];
        ++limit_result;
    }
    for (int i = pos; i < limit1; ++i) {
        result[limit_result] = arr[i];
        ++limit_result;
    }
    return result;
}

// Задача 7 Возвратный реверс
int* ReverseBack(const int* arr, int limit) {
    int* result = new int[limit];
    int limit_result = 0;
    for (int i = limit - 1; i >= 0; --i) {
        result[limit_result] = arr[i];
        ++limit_result;
    }
    return result;
}

// Задача 9 Все вхождения
int* FindAll(const int* arr, int number, int limit, int* count_limit) {
    *count_limit = 0;
    for (int i = 0; i < limit; ++i) {
        if (arr[i] == number) {
            ++*count_limit;
        }
    }
    int* result = new int[*count_limit];
    int limit_result = 0;
    for (int i = 0; i < limit; ++i) {
        if (arr[i] == number) {
            result[limit_result] = i;
            ++limit_result;
        }
    }
    return result;
}

// Проверка ввода

// Если поток ввода закрыт, завершает программу
std::string ReadLine(const std::string& message) {
    std::cout << message;
    std::string line;
    if (!std::getline(std::cin, line)) {
        std::cout << "Ввод завершён \n";
        std::exit(0);
    }
    return line;
}

// Строка корректна, если в ней только целое число без лишних символов
int ReadInt(const std::string& message) {
    while (true) {
        std::istringstream stream(ReadLine(message));
        int value = 0;
        char extra = '\0';
        if (stream >> value && !(stream >> extra)) {
            return value;
        }
        std::cout << "Ошибка: нужно ввести целое число \n";
    }
}

double ReadDouble(const std::string& message) {
    while (true) {
        std::istringstream stream(ReadLine(message));
        double value = 0;
        char extra = '\0';
        if (stream >> value && !(stream >> extra)) {
            return value;
        }
        std::cout << "Ошибка: нужно ввести число \n";
    }
}

// Принимается ровно один символ от '0' до '9'
char ReadCharToNum(const std::string& message) {
    while (true) {
        std::string line = ReadLine(message);
        if (line.size() == 1 && line[0] >= '0' && line[0] <= '9') {
            return line[0];
        }
        std::cout << "Ошибка: нужно ввести один символ от 0 до 9 \n";
    }
}

int ReadIntInRange(const std::string& message, int min_value, int max_value) {
    while (true) {
        int value = ReadInt(message);
        if (value >= min_value && value <= max_value) {
            return value;
        }
        std::cout << "Ошибка: число должно быть от " << min_value << " до "
                  << max_value << " \n";
    }
}

// Ввод массива с клавиатуры с проверкой каждого элемента через ReadInt
void ReadArr(int* arr, int size, const std::string& name) {
    for (int i = 0; i < size; ++i) {
        arr[i] = ReadInt(name + "[" + std::to_string(i) + "] = ");
    }
}

void PrintArr(const int* arr, int size) {
    std::cout << "[";
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << arr[i];
    }
    std::cout << "]\n";
}

std::string BoolText(bool value) {
    return value ? "true (да)" : "false (нет)";
}

// Выбор задач из заданий и их выполнение

// Задание первое
void Task1() {
    while (true) {
        std::cout << "Выберите Задачу из Задания №1 \n";
        std::cout << "Задача 1: Дробная часть числа \n";
        std::cout << "Задача 2: Перевод из символа в число \n";
        std::cout << "Задача 3: Проверка на двузначность \n";
        std::cout << "Задача 4: Входит ли число в заданные рамки \n";
        std::cout << "Задача 5: Равны ли три числа \n";
        std::cout << "Задача 0: Назад \n";
        int choise_quest = ReadIntInRange("Ваш выбор: ", 0, 5);

        switch (choise_quest) {
            case 1: {
                double number =
                    ReadDouble("Введите число с дробной частью: ");
                std::cout << "Дробная часть числа :" << Fraction(number)
                          << "\n";
                break;
            }
            case 2: {
                char number = ReadCharToNum("Введите символ от 0 до 9: ");
                std::cout << "Ваше число :" << CharToNum(number) << "\n";
                break;
            }
            case 3: {
                int number = ReadInt("Введите число: ");
                std::cout << "Двузначность числа :"
                          << BoolText(Is2Digits(number)) << "\n";
                break;
            }
            case 4: {
                int limit1 = ReadInt("Введите первую границу :");
                int limit2 = ReadInt("Введите вторую границу :");
                int number = ReadInt("Введите число :");
                std::cout << "Ваше число входит в отрезок от " << limit1
                          << " до " << limit2 << " : "
                          << BoolText(IsInRange(limit1, limit2, number))
                          << "\n";
                break;
            }
            case 5: {
                int number1 = ReadInt("Введите первое число :");
                int number2 = ReadInt("Введите второе число :");
                int number3 = ReadInt("Введите третье число :");
                std::cout << "Ваши числа равны "
                          << BoolText(IsEqual(number1, number2, number3))
                          << "\n";
                break;
            }
            default: {
                return;
            }
        }
    }
}

// Задание второе
void Task2() {
    while (true) {
        std::cout << "\nВыберите Задачу из Задания №2 \n";
        std::cout << "Задача 1: Модуль числа \n";
        std::cout << "Задача 2: Число делится на 3 или 5 без остатка, "
                     "но не делится на оба \n";
        std::cout << "Задача 3: Максимальное из трех чисел \n";
        std::cout << "Задача 4: Сумма двух чисел, если от 10 до 19, "
                     "то выводить 20 \n";
        std::cout << "Задача 5: Вывод дня недели по числу \n";
        std::cout << "Задача 0: Назад \n";
        int choise_quest = ReadIntInRange("Ваш выбор: ", 0, 5);

        switch (choise_quest) {
            case 1: {
                int number = ReadInt("Введите число: ");
                std::cout << "Модуль числа :" << AbsNum(number) << "\n";
                break;
            }
            case 2: {
                int number = ReadInt("Введите число: ");
                std::cout << "Ваше число делится на 3 или 5, но не делится "
                             "на них одновременно : "
                          << BoolText(Is35(number)) << "\n";
                break;
            }
            case 3: {
                int number1 = ReadInt("Введите первое число :");
                int number2 = ReadInt("Введите второе число :");
                int number3 = ReadInt("Введите третье число :");
                std::cout << "Максимальное число из трех :"
                          << Max3(number1, number2, number3) << "\n";
                break;
            }
            case 4: {
                int number1 = ReadInt("Введите первое число :");
                int number2 = ReadInt("Введите второе число :");
                std::cout << "Сумма чисел :" << Sum2(number1, number2)
                          << "\n";
                break;
            }
            case 5: {
                int day_number =
                    ReadInt("Введите номер дня недели от 1 до 7 :");
                std::cout << "День недели :" << Day(day_number) << "\n";
                break;
            }
            default: {
                return;
            }
        }
    }
}

// Задание третье
void Task3() {
    while (true) {
        std::cout << "\nВыберите Задачу из Задания №3 \n";
        std::cout << "Задача 1: Запись всех чисел от 0 до N \n";
        std::cout << "Задача 2: Запись всех четных чисел от 0 до N \n";
        std::cout << "Задача 3: Посчитать длину числа \n";
        std::cout << "Задача 4: Нарисовать квадрат NxN \n";
        std::cout << "Задача 5: Нарисовать правый треугольник NxN \n";
        std::cout << "Задача 0: Назад \n";
        int choise_quest = ReadIntInRange("Ваш выбор: ", 0, 5);

        switch (choise_quest) {
            case 1: {
                int number = ReadIntInRange("Введите число N: ", 0, 1000);
                std::cout << "Ваши числа от 0 до N :" << ListNums(number)
                          << "\n";
                break;
            }
            case 2: {
                int number = ReadIntInRange("Введите число N: ", 0, 1000);
                std::cout << "Ваши четные числа от 0 до N :" << Chet(number)
                          << "\n";
                break;
            }
            case 3: {
                int number = ReadInt("Введите число : ");
                std::cout << "Кол-во знаков в числе :" << NumLen(number)
                          << "\n";
                break;
            }
            case 4: {
                int number = ReadIntInRange(
                    "Введите размер квадрата от 1 до 50: ", 1, 50);
                std::cout << "Ваш квадрат : \n";
                Square(number);
                break;
            }
            case 5: {
                int number = ReadIntInRange(
                    "Введите размер треугольника от 1 до 50: ", 1, 50);
                std::cout << "Ваш треугольник : \n";
                RightTriangle(number);
                break;
            }
            default: {
                return;
            }
        }
    }
}

// Задание четвертое
void Task4() {
    while (true) {
        std::cout << "\nВыберите Задачу из Задания №4 \n";
        std::cout << "Задача 1: Найти первое вхождение N в массив (индекс) \n";
        std::cout << "Задача 2: Найти наибольшее по модулю значение массива \n";
        std::cout << "Задача 3: Вставить массив в массив на позицию \n";
        std::cout << "Задача 4: Получить новый массив задом наперед \n";
        std::cout << "Задача 5: Найти индексы всех вхождений N в массив \n";
        std::cout << "Задача 0: Назад \n";
        int choise_quest = ReadIntInRange("Ваш выбор: ", 0, 5);
        if (choise_quest == 0) {
            return;
        }
        int arr[kMaxSize];
        int size = ReadIntInRange("Введите правую границу массива: ", 1,
                                  kMaxSize);
        ReadArr(arr, size, "arr");

        switch (choise_quest) {
            case 1: {
                int number = ReadInt("Введите искомое число: ");
                int index = FindFirst(arr, number, size);
                if (index == -1) {
                    std::cout << "Числа нет в массиве \n";
                } else {
                    std::cout << "Первое вхождение (индекс) :" << index
                              << "\n";
                }
                break;
            }
            case 2: {
                std::cout << "Наибольшее по модулю :" << MaxAbs(arr, size)
                          << "\n";
                break;
            }
            case 3: {
                int ins[kMaxSize];
                int ins_size = ReadIntInRange(
                    "Введите размер вставляемого массива ins :", 1, kMaxSize);
                ReadArr(ins, ins_size, "ins");
                int pos = ReadIntInRange(
                    "Введите позицию вставки ins в основной массив :", 0,
                    size);
                int* result = Add(arr, ins, pos, size, ins_size);
                if (result == nullptr) {
                    std::cout << "Ошибка: некорректные параметры.\n";
                } else {
                    std::cout << "Результат :";
                    PrintArr(result, size + ins_size);
                    delete[] result;
                }
                break;
            }
            case 4: {
                int* result = ReverseBack(arr, size);
                std::cout << "Результат :";
                PrintArr(result, size);
                delete[] result;
                break;
            }
            case 5: {
                int number =
                    ReadInt("Введите искомое число, которое надо найти :");
                int count = 0;
                int* result = FindAll(arr, number, size, &count);
                if (count == 0) {
                    std::cout << "Число не найдено в массиве \n";
                } else {
                    std::cout << "Индексы вхождений :";
                    PrintArr(result, count);
                }
                delete[] result;
                break;
            }
            default: {
                return;
            }
        }
    }
}
