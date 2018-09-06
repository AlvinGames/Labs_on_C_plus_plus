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
	///—пособы сортировки
	///
	///////////////////////////////////////////////////////
	namespace sort
	{
		extern lambda byName;		//сортировка по имени
		extern lambda byZodiak;		//сортировка по знаку зодиака
		extern lambda byDay;		//сортировка по дню
		extern lambda byMonth;		//сортировка по мес€цу
		extern lambda byYear;		//сортировка по году
		extern lambda byDate;		//сортировка по дате

	} // namespace sort

	///////////////////////////////////////////////////////
	///‘ункци€ ввода
	///
	///////////////////////////////////////////////////////
	extern void input(Znak* mas);

	///////////////////////////////////////////////////////
	///‘ункци€ вывода
	///
	///////////////////////////////////////////////////////
	extern void output(const Znak* mas);

	///////////////////////////////////////////////////////
	///‘ункци€ сортировки массива
	///
	///>пример:
	///sortMas(mas, sort::byValue);
	///sort::byName		-> сортирует по имени
	///sort::byZodiak	-> сортирует по знаку зодиака
	///sort::byDay			-> сортирует по дню
	///sort::byMonth	-> сортирует по мес€цу
	///sort::byYear		-> сортирует по году
	///sort::byDate		-> сортирует по дате
	///////////////////////////////////////////////////////
	extern void sortMas(Znak* mas, lambda less = sort::byZodiak);

	///////////////////////////////////////////////////////
	///‘ункци€ ввода церчисленных чисел
	///
	///провер€ет на коррекстность ввода
	///////////////////////////////////////////////////////
	extern void input(Uint32& number);

	///////////////////////////////////////////////////////
	///‘ункци€ писка знаков задиака по мес€цу
	///
	///////////////////////////////////////////////////////
	extern void search(const Znak* mas, Uint32 month);

} // namespace lab

#endif // !FUNCIONAL_HPP
