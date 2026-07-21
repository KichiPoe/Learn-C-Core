#include <math.h>
#include "calculator.h"

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mul(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

double power(double base, double exponent)
{
    return pow(base, exponent);
}

int modulus(int a, int b)
{
    return a % b;
}

double square_root(double value)
{
    return sqrt(value);
}