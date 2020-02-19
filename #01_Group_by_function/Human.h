#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class Human
{
public:
	const char* shape;
	int x;
	int y;
public:
	void Move();
public:
	Human();
	Human(const char* _shape, int _x, int _y);
};