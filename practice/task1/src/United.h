#ifndef UNITED_H
#define UNITED_H

class United
{
public:
    United(int i = 0, char c = -128, double d = 0.0);

    bool operator > (United U);
    bool operator < (United U);
    bool operator == (United U);
    bool operator != (United U);

    void printU();

    virtual ~United();

private:
    int fInt;
    char fChar;
    double fDouble;
};

#endif
