#ifndef INTERFUNC_H
#define INTERFUNC_H

template<typename T>
T interFunc(T *a, T *b, int len_old, int len_new)
{
    float step = (a[len_old - 1] - a[0]) / (len_new - 1);
    b[0] = a[0];
    b[len_new - 1] = a[len_old - 1];
    std::cout << b[0] << ' ';
    for (int i = 1; i < len_new - 1; ++i)
    {
        b[i] = b[i - 1] + step;
        std::cout << b[i] << ' ';
    }
    std::cout << b[len_new - 1] << ' ';
    std::cout << '\n';
    return 0;
}

#endif /* INTERFUNC_H */ 
