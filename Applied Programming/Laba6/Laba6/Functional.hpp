#pragma once

#ifndef FUNCTIONAL_HPP
#define	FUNCTIONAL_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include<iostream>
#include"Znak.hpp"
#include"String.hpp"

namespace lab
{
	extern const unsigned int size;

	typedef bool(*lambda)(const Znak&, const Znak&);

	///////////////////////////////////////////////////////
	///������� ����������
	///
	///////////////////////////////////////////////////////
	namespace sort
	{
		extern lambda byName;		//���������� �� �����
		extern lambda byZodiak;		//���������� �� ����� �������
		extern lambda byDay;		//���������� �� ���
		extern lambda byMonth;		//���������� �� ������
		extern lambda byYear;		//���������� �� ����
		extern lambda byDate;		//���������� �� ����

	} // namespace sort

	///////////////////////////////////////////////////////
	///������� �����
	///
	///////////////////////////////////////////////////////
	extern void input(Znak* mas);

	///////////////////////////////////////////////////////
	///������� ������
	///
	///////////////////////////////////////////////////////
	extern void output(const Znak* mas);

	///////////////////////////////////////////////////////
	///������� ���������� �������
	///
	///>������:
	///sortMas(mas, sort::byValue);
	///sort::byName		-> ��������� �� �����
	///sort::byZodiak	-> ��������� �� ����� �������
	///sort::byDay			-> ��������� �� ���
	///sort::byMonth	-> ��������� �� ������
	///sort::byYear		-> ��������� �� ����
	///sort::byDate		-> ��������� �� ����
	///////////////////////////////////////////////////////
	extern void sortMas(Znak* mas, lambda less = sort::byZodiak);

	///////////////////////////////////////////////////////
	///������� ����� ������������ �����
	///
	///��������� �� ������������� �����
	///////////////////////////////////////////////////////
	extern void input(Uint32& number);

	///////////////////////////////////////////////////////
	///������� ����� ������ ������� �� ������
	///
	///////////////////////////////////////////////////////
	extern void search(const Znak* mas, Uint32 month);

} // namespace lab

#endif // !FUNCIONAL_HPP
