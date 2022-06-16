#include <iostream>
#include "United.h"

United::United(int i, char c, double d)
{
    fInt = i;
    fChar = c;
    fDouble = d;
}

bool United::operator > (United U)
{
    return ( (fInt-U.fInt) + (fChar-U.fChar) + (fDouble-U.fDouble) );
}
bool United::operator < (United U)
{
    return ( (U.fInt-fInt) + (U.fChar-fChar) + (U.fDouble-fDouble) );
}
bool United::operator == (United U)
{
    return ( (fInt==U.fInt) && (fChar==U.fChar) && (fDouble==U.fDouble) );
}
bool United::operator != (United U)
{
    return ( (fInt!=U.fInt) || (fChar!=U.fChar) || (fDouble!=U.fDouble) );
}

void United::printU()
{
    std::cout << '('<< fInt << ", " << fChar << ", " << fDouble << ')';
}

United::~United()
{
}

