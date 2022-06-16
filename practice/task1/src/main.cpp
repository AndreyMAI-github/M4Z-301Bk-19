#include <iostream>
#include <iomanip>
#include "TFunctions.h"
#include "United.h"

int main()
{
    std::cout << "Что меньше: 3 или 7  Ответ: " << least<int>(3, 7) << std::endl;

    double d = 22.0/7;
    std::cout << "Что меньше: 3.14159265358 или 22/7  Ответ: ";
    std::cout << std::setprecision(12) << least<double>(3.1415926, d) << std::endl;

    United  a(3, 'c', 7.7),  b(2, 'd', 7.69), c(3, 'c', 7.7);

    std::cout << "Что меньше: ";
    a.printU();
    std::cout << " или ";
    b.printU();
    std::cout << "  Ответ: ";
    least<United>(a, b).printU();
    std::cout << std::endl;

    std::cout << "Что меньше: ";
    a.printU();
    std::cout << " или ";
    c.printU();
    std::cout << "  Ответ: ";
    if (a == c)
    {
        std::cout << "Они равны" << std::endl;
    }

    return 0;
}
