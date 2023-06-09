// task1_preprocessor_directives.cpp
#include <iostream>
#define add(a,b) a+=b
#define MODE 0
#ifndef MODE
#error <MODE is not initialized>
#endif

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru_RU");
    int a = 0;
    int b = 0;
#if (MODE == 0)
    std::cout << "Работаю в режиме тренировки..." << std::endl;
#elif (MODE == 1):
    std::cout << "Работаю в боевом режиме..." << std::endl;
    add(a, b);
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << (add(a, b))<< std::endl;
#else ((MODE != 0) && (MODE !=1))
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif
#undef MODE
    return 0;
}