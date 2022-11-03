#include "Rectangle.h"
#include <math.h>
#include <string>
#include <iostream>

//                  Defining methods of the Rectangle class

template <class T>
T Rectangle<T>::getA()
{
    return Rectangle::a;
}

template <class T>
T Rectangle<T>::getB()
{
    return b;
}

template <class T>
T Rectangle<T>::getPeremeter()
{
    return a * 2 + b * 2;
}

template <class T>
T Rectangle<T>::getArea()
{
    return a * b;
}

template <class T>
T Rectangle<T>::getArea(T diag)
{
    try {
        if (diag <= 0)
        {
            throw - 1;
        }
        return a * (T)(sqrt(diag * diag - a * a));
    }
    catch (int)
    {
        printExc("diagonal");
    }
    return 1;
}

template <class T>
T Rectangle<T>::getDiagonal()
{
    return (T)(sqrt(a * a + b * b));
}

template <class T>
void Rectangle<T>::setA(T a)
{
    try
    {
        if (a >= 1)
        {
            this->a = a;
        }
        else
        {
            throw - 1;
        }
    }
    catch (int exc)
    {
        printExc("side A");
    }

}

template <class T>
void Rectangle<T>::setB(T b)
{
    try
    {
        if (b >= 1)
        {
            this->b = b;
        }
        else
        {
            throw - 1;
        }
    }
    catch (int exc)
    {
        printExc("side B");
    }

}

template <class T>
void Rectangle<T>::printInfo()
{
    using namespace std;
    cout << "Rectangle: { a = "
         << getA()
         << ", b = "
         << getB()
         << "}";
}

template <class T>
void Rectangle<T>::printInfo(std::string name)
{
    using namespace std;

    cout << "Rectangle name = " 
        << name
        << ": { a = " << getA()
        << ", b = " << getB()
        << ", perimeter = " << getPeremeter()
        << ", area = " << getArea()
        << ", diagonal = " << getDiagonal()
        << "}";
}

//Prefix increment

template <class T>
Rectangle<T>& Rectangle<T>::operator++()
{
    *this = Rectangle(++a, ++b);
    return *this;
}

//Prefix deccrement

template <class T>
Rectangle<T>& Rectangle<T>::operator--()
{
    *this = Rectangle(--a, --b);
    return *this;
}

//Postfix increment

template <class T>
Rectangle<T> Rectangle<T>::operator++(int)
{
    return Rectangle(a++, b++);
}

//Postfix deccrement

template <class T>
Rectangle<T> Rectangle<T>::operator--(int)
{
    return Rectangle(a--, b--);
}

template <class T>
void Rectangle<T>::printExc(std::string val)
{
    std::cout << "Exception is caught: "<< val <<" value less than 1" << std::endl;
}

template <class T>
Rectangle<T>::Rectangle()
{
}

template <class T>
Rectangle<T>::Rectangle(T a, T b)
{
    setA(a);
    setB(b);
}
