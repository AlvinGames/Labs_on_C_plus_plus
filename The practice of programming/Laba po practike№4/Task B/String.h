//#pragma once
#include<iostream>

using namespace std;

#ifndef cmodstring
#define cmodstring

/*0*/int sizeLine(char *line);//���������� ����� ������

/*1*/int WordsCount(char *line); //������� ���������� ���������� ���� � ���������

/*2*/char **Words(char *line); //������� ���������� ������ ����, ������������ � ��������� ���������

/*3*/char *longWord(char *line); //������� ������� ����� ������� ����� ���������

/*4*/void DelWords(char *line, char ch); //������� ������� �� ��������� ��� �����, ������� ������������� �� �������� ������

/*5*/void DelShortWords(char *line); //������� �� ��������� ��� ������������� ����� (������ � ������� ���������)

/*6*/int WordCount(char *line, char* word); //���������� ������� ��� �������� ����� ����������� � ���������

/*7*/void SingleWords(char *line); //������� ������ �� ����� ���������, ������� ����������� � ������ ����� ���� ���

/*8*/void ABCOrder(char *line); //������� ����� ��������� � ���������� �������

/*9*/void SortByLength(char *line); //������� ����� ��������� � ������� ����������� �� ����

/*10*/int SortByLength(char *line, char *word); //����� ������� ��������� ���������� ����� � ���������
//(��� -1, ���� ������ ����� ��� � ���������)

#endif