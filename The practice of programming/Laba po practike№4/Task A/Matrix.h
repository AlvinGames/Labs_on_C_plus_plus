//#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

#ifndef cmodofmatrix
#define cmodofmatrix

/*1*/void InputTwoArray(int **A, int n, int m); //���� ��������� ������������� ������������� ������� ����������� NxM � ����������

/*2*/void RandomMatrix(int **A, int n, int m, int a, int b); //���������� ������� ���������� ���������� �� ������� [a,b]

/*3*/void PrintMatrix(int **A, int n, int m); //����� ��������� ������������� ������������� ������� ����������� NxM �� �������

/*4*/int SumLine(int **A, int k, int m); //���������� ����� ��������� k-�� ������ �������

/*5*/int MaxMatrix(int **A, int n, int m, int &maxi, int &maxj); /*���������� ������� ������������� �������� ������� � ��� ��������
(������� ���������� �������� ������������� �������� �������, � ��� ������� ��������� � ���������� maxi � maxj)*/

/*6*/void SortLine(int **A, int k, int m); //���������� ��������� k-�� ������ ������� �� ����������� (����� ��������� ��� ����������)

/*7*/int SortedLine(int **A, int n, int m); //���������� ����� ������, �������� ������� ����������� �� �������� ��� -1, ���� ����� ������ ��� � ������� 

/*8*/int ZeroColumn(int **A, int n, int m); //���������� ����� �������, �������� �������� �������� ��� � ����� �����, ������ ������, ��� -1, ���� ������ ������� ���.

#endif