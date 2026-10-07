#ifndef LAB1_METHODS_H_
#define LAB1_METHODS_H_

#include <cstdint>
#include <string>

// Максимальный размер массива, вводимого с клавиатуры
constexpr int kMaxSize = 100;

// Задание 1 Методы

// Возвращает дробную часть числа
double Fraction(double number);

// Преобразует символ-цифру от '0' до '9' в соответствующее число
int CharToNum(char symbol);

// Возвращает true, если число двузначное
bool Is2Digits(int number);

// Возвращает true, если number лежит между limit_one и limit_two
// включительно
// Какая из границ больше, заранее неизвестно
bool IsInRange(int limit_one, int limit_two, int number);

// Возвращает true, если все три числа равны
bool IsEqual(int number_one, int number_two, int number_three);

// Задание 2 Условия

// Возвращает модуль числа
int AbsNum(int number);

// Возвращает true, если число делится на 3 или на 5, но не на оба сразу
bool Is35(int number);

// Возвращает максимальное из трёх чисел
int Max3(int number_one, int number_two, int number_three);

// Возвращает сумму чисел, а если она лежит в диапазоне от 10 до 19, то 20
int Sum2(int number_one, int number_two);

// Возвращает название дня недели по номеру от 1 до 7
std::string Day(int day_number);

// Задание 3 Циклы

// Возвращает строку со всеми числами от 0 до limit включительно
std::string ListNums(int limit);

// Возвращает строку со всеми чётными числами от 0 до limit включительно
// Требуется limit >= 0
std::string Chet(int limit);

// Возвращает количество цифр в числе
int NumLen(int64_t num);

// Выводит на экран квадрат из символов '*' размером size x size
void Square(int size);

// Выводит на экран прямоугольный треугольник из '*',
// выровненный по правому краю
void RightTriangle(int size);

// Задание 4 Массивы

// Возвращает индекс первого вхождения number в массив или -1
int FindFirst(const int* arr, int number, int limit);

// Возвращает наибольшее по модулю значение массива
int MaxAbs(const int* arr, int limit);

// Возвращает новый массив размера limit_one + limit_two, в котором
// в позицию pos вставлены элементы массива ins
// При некорректных параметрах возвращает nullptr
// Память освобождает вызывающий
int* Add(const int* arr, const int* ins, int pos, int limit_one,
         int limit_two);

// Возвращает новый массив, в котором элементы arr записаны в обратном
// порядке
// Память освобождает вызывающий
int* ReverseBack(const int* arr, int limit);

// Возвращает новый массив индексов всех вхождений number в arr;
// количество найденных индексов записывается в *count_limit
// Память освобождает вызывающий
int* FindAll(const int* arr, int number, int limit, int* count_limit);

// Ввод с проверкой и вывод

// Выводит приглашение и считывает строку целиком
std::string ReadLine(const std::string& message);

// Запрашивает целое число до тех пор, пока ввод не будет корректным
int ReadInt(const std::string& message);

// Запрашивает вещественное число до тех пор, пока ввод не будет корректным
double ReadDouble(const std::string& message);

// Запрашивает один символ-цифру от '0' до '9'
char ReadCharToNum(const std::string& message);

// Запрашивает целое число из отрезка [min_value, max_value]
int ReadIntInRange(const std::string& message, int min_value, int max_value);

// Заполняет массив arr размера size значениями с клавиатуры
void ReadArr(int* arr, int size, const std::string& name);

// Выводит массив в виде [1, 2, 3]
void PrintArr(const int* arr, int size);

// Возвращает текстовое представление логического значения
std::string BoolText(bool value);

// Меню заданий

void Task1();
void Task2();
void Task3();
void Task4();

#endif  // LAB1_METHODS_H_
