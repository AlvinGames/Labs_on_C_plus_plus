//#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

#ifndef cmodofmatrix
#define cmodofmatrix

/*1*/void InputTwoArray(int **A, int n, int m); //ввод элементов прямоугольной целочисленной матрицы размерности NxM с клавиатуры

/*2*/void RandomMatrix(int **A, int n, int m, int a, int b); //заполнение матрицы случайными значениями из отрезка [a,b]

/*3*/void PrintMatrix(int **A, int n, int m); //вывод элементов прямоугольной целочисленной матрицы размерности NxM на консоль

/*4*/int SumLine(int **A, int k, int m); //вычисление суммы элементов k-ой строки матрицы

/*5*/int MaxMatrix(int **A, int n, int m, int &maxi, int &maxj); /*нахождение позиции максимального элемента матрицы и его значения
(функция возвращает значение максимального элемента матрицы, а его позицию сохраняет в переменных maxi и maxj)*/

/*6*/void SortLine(int **A, int k, int m); //сортировка элементов k-ой строки матрицы по возрастанию (любым известным вам алгоритмом)

/*7*/int SortedLine(int **A, int n, int m); //возвращает номер строки, элементы которой упорядочены по убыванию или -1, если такой строки нет в матрице 

/*8*/int ZeroColumn(int **A, int n, int m); //возвращает номер столбца, элементы которого содержат два и более нулей, идущих подряд, или -1, если такого столбца нет.

#endif