#define  _CRT_SECURE_NO_WARNINGS 1
//关于游戏相关的函数声明，符号声明，头文件的包含
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 10
#define	COL 10

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);    //初始化的棋盘

void DisplayBoard(char board[ROW][COL], int row, int col);  //打印棋盘

void PlayerMove(char board[ROW][COL], int row, int col);    //玩家下棋

void ComputerMove(char board[ROW][COL], int row, int col);   //电脑下棋

//判断输赢
//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//继续   - 'C'

char IsWin(char board[ROW][COL], int row, int col);





