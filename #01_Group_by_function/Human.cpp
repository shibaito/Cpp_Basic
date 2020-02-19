#include "Human.h"

void Human::Move()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		x--;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		x++;
	}
	if (GetAsyncKeyState(VK_UP))
	{
		y--;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		y++;
	}
}

Human::Human(){}
Human::Human(const char* _shape, int _x, int _y)
{
	shape = _shape;
	x = _x;
	y = _y;
}