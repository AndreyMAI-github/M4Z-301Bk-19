#include "func.h"

int main()
{
    const int sizeQ = 6;
    const int sizeW = 19;

        double arrQ[sizeQ] = {1, 3, 4, 6, 7, 9};
        double arrW[sizeW] = {};

    std::cout << "Array Q["<< sizeQ << "]: ";
    printArr(arrQ, sizeQ);

    interFunc(arrQ, arrW, sizeQ, sizeW);

    std::cout << "Written array Q["<< sizeQ << "] to array W[" << sizeW <<"] with interpolation: ";

    printArr(arrW, sizeW);

    return 0;
}
