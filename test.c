#define  _CRT_SECURE_NO_WARNINGS 1

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

	//��ʼ������ - ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);

	//��ӡ���� - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove();
		//��������
	}
}
int main()
{
	int input = 0;
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












