#include "Human.h"

void SetCursorPosition(int _x, int _y);

void main()
{
	Human human("¿Ê", 10, 10);
	while (true)
	{
		system("cls");
		human.Move();
		SetCursorPosition(human.x, human.y);
		cout << human.shape;
		Sleep(50);
	}
}

void SetCursorPosition(int _x, int _y)
{
	COORD pos;
	pos.X = _x * 2;
	pos.Y = _y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}