#pragma once
#include <string>

//                  Declaration of the Rectangle class and its members

template <class T>
class Rectangle
{
private:
	T a = 1;
	T b = 1;
public:
	T getA();
	T getB();
	
	T getPeremeter();
	T getArea();
	T getArea(T diag);
	T getDiagonal();

	void setA(T);
	void setB(T);

	void printInfo();
	void printInfo(std::string name);

	Rectangle& operator++();
	Rectangle& operator--();

	Rectangle operator++(int);
	Rectangle operator--(int);

	void printExc(std::string val);

	Rectangle();
	Rectangle(T, T);
};

//                  Defining methods of the Rectangle class
#include "Rectangle.hpp"