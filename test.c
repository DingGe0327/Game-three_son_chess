#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf(" 三子棋游戏：                             \n");
	printf("               1.play                     \n");
	printf("               0.exit                     \n");
	printf("                                          \n");
}
void Game()
{   //储存数据 -  二维数组
	char board[ROW][COL];

	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);

	//打印棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove();
		//电脑下棋
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择->:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
	    default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}












