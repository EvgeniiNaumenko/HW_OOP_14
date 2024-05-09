//�������� �1
//�������� ����������� ������� ���� Employer(����������) � ����� ���������� �������� Print().�������
//��� �������� ����� : President, Manager, Worker.������������� ������� Print() ��� ��������� ����������, ��
//������� ������� ���� ���������.
//
//�������� �2
//�������� ����������� ������� ���� � ����������
//�������� � �����.�������� ������ ����� : �����������, ����, ����������� ���������, �������� � �����
//��������� �����.��� �������� ��������� ����� �������� �� ����������� ����, ���� ������������ ������
//����� �ᒺ���

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
	//�������� �1
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


	//�������� �2
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

	// �������� ����� square() ��� ������� �������� �������
	for (int i = 0; i <size; i++) {
		cout <<arr[i]->getF()<<": "<<arr[i]->square()<<endl;
	}

	return 0;
}