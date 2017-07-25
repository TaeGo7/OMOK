#include <stdio.h>
#include <windows.h>
#include <conio.h>

/* 자판별 ASCII 코드 */
enum {
	ESC = 27,
	UP = 72,
	DOWN = 80,
	RIGHT = 77,
	LEFT = 75,
	SPACE = 32
};

void main()
{
	system("mode con:cols=75 lines=25");	// 콘솔 창의 크기 조절
                                           	// cols = 가로 lines = 세로
	printf("\n\n\n\n");
	printf("\t \t \t=========================== \n\n");
	printf("\t \t \t         오      목         \n\n");
	printf("\t \t \t=========================== \n");
	printf("\n\n\n\n\n\n\n");
	printf("\t \t \t       press any key !    \n\n");

	char ch = getch();    // 아무 키나 입력받음

	if (ch != ESC) {
		system("cls");
		//game();
	}
	else {
		exit(1);     // 종료
	}
}
