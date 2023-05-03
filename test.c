#define  _CRT_SECURE_NO_WARNINGS 1
//������Ϸ���߼�
#include "game.h"
void menu()
{
	printf(" ��������Ϸ��                             \n");
	printf("               1.play                     \n");
	printf("               0.exit                     \n");
	printf("                                          \n");
}
void Game()
{   //�������� -  ��ά����
	char board[ROW][COL];
	char ret = 0;
	//��ʼ������ - ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);

	//��ӡ���� - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}                       //�ж���Ӯ

		//��������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}                       //�ж���Ӯ
	

int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
	    default:
			printf("�����������������\n");
			break;
		}

	} while (input);
	return 0;
}












