#define  _CRT_SECURE_NO_WARNINGS 1
//测试游戏的逻辑
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
	char ret = 0;
	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);

	//打印棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}                       //判断输赢

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}                       //判断输赢
	

int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
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












