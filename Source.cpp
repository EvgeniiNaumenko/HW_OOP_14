//Завдання №1
//Створити абстрактний базовий клас Employer(службовець) з чисто віртуальною функцією Print().Створіть
//три похідних класи : President, Manager, Worker.Перевизначите функцію Print() для виведення інформації, що
//відповідає кожному типу службовця.
//
//Завдання №2
//Створити абстрактний базовий клас з віртуальною
//функцією — площа.Створити похідні класи : прямокутник, коло, прямокутний трикутник, трапеція зі своїми
//функціями площі.Для перевірки визначити масив посилань на абстрактний клас, яким присвоюються адреси
//різних об’єктів

#include <iostream>
using namespace std;

#include "Employer.h"
#include "Manager.h"
#include "President.h"
#include "Worker.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"

int main()
{
	//Завдання №1
	cout << "Task 1" << endl;
	Manager Employer1("Bob");
	President Employer2("Alex");
	Worker Employer3("Jhon");
	Employer* emp = &Employer1;
	emp->print();
	emp = &Employer2;
	emp->print();
	emp = &Employer3;
	emp->print();


	//Завдання №2
	cout << "-----------------------------------" << endl;
	cout << "Task 2" << endl;
	Rectangle rect(20, 10);
	Circle1 circ(15.0f);
	RightTriangle trian(20, 15);
	Trapezoid trap(10, 15, 5);

	const int size = 4;
	Figure* arr[size]={ &rect ,&circ ,&trian ,&trap };

	arr[0] = &rect;
	arr[1] = &circ;
	arr[2] = &trian;
	arr[3] = &trap;

	// Вызываем метод square() для каждого элемента массива
	for (int i = 0; i <size; i++) {
		cout <<arr[i]->getF()<<": "<<arr[i]->square()<<endl;
	}

	return 0;
}