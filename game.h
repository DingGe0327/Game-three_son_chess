#define  _CRT_SECURE_NO_WARNINGS 1
//������Ϸ��صĺ�������������������ͷ�ļ��İ���
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 10
#define	COL 10

//����������
void InitBoard(char board[ROW][COL], int row, int col);    //��ʼ��������

void DisplayBoard(char board[ROW][COL], int row, int col);  //��ӡ����

void PlayerMove(char board[ROW][COL], int row, int col);    //�������

void ComputerMove(char board[ROW][COL], int row, int col);   //��������

//�ж���Ӯ
//��������������Ϸ��״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��   - 'Q'
//����   - 'C'

char IsWin(char board[ROW][COL], int row, int col);





