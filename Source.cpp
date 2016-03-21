#include <test.h>
#include <iostream> 
#include <windows.h>
#include <string>
using namespace std;

int main() {

	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_FONT_INFOEX font;
	GetCurrentConsoleFontEx(outcon, false, &font);
	font.dwFontSize.X = 7;
	font.dwFontSize.Y = 12;
	SetCurrentConsoleFontEx(outcon, false, &font);
	SetConsoleTextAttribute(outcon, 0X03); //changes consol color


	char ans;

	do {
			test bo;

			cout << "Please enter y/n" << endl;
			cin >> ans;
		} while ((ans == 'y') || (ans == 'Y'));



		return 0;
	}