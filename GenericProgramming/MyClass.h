#pragma once
#include <iostream>

// Ŭ������ template���� �Ϲ�ȭ ��ų ��
template <typename T>
class MyClass
{
	T mValue;
public:
	void Function(T arg);
};

// �Լ��� ����� ���Ǹ� �и��� ���
template <typename T>
void MyClass<T>::Function(T arg)
{
	T temp = arg;
	temp += arg;
}