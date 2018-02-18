#include <windows.h>
#include <process.h>
#include <stdio.h>

void gotoxy(int x, int y) {
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x - 1;
	dwCursorPosition.Y = y - 1;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}