//#pragma once
#include<iostream>

using namespace std;

#ifndef cmodstring
#define cmodstring

/*0*/int sizeLine(char *line);//возвращает длину строки

/*1*/int WordsCount(char *line); //функция возвращает количество слов в сообщении

/*2*/char **Words(char *line); //функция возвращает массив слов, содержащихся в текстовом сообщении

/*3*/char *longWord(char *line); //функция находит самое длинное слово сообщения

/*4*/void DelWords(char *line, char ch); //функция удаляет из сообщения все слова, которые заканчиваются на заданный символ

/*5*/void DelShortWords(char *line); //удаляет из сообщения все однобуквенные слова (вместе с лишними пробелами)

/*6*/int WordCount(char *line, char* word); //определить сколько раз заданное слово встречается в сообщении

/*7*/void SingleWords(char *line); //вывести только те слова сообщения, которые встречаются в тексте ровно один раз

/*8*/void ABCOrder(char *line); //вывести слова сообщения в алфавитном порядке

/*9*/void SortByLength(char *line); //вывести слова сообщения в порядке возрастания их длин

/*10*/int SortByLength(char *line, char *word); //найти позицию вхождения некоторого слова в сообщение
//(или -1, если такого слова нет в сообщении)

#endif