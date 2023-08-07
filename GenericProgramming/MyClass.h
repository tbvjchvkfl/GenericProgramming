#pragma once
#include <iostream>

// 클래스를 template으로 일반화 시킬 때
template <typename T>
class MyClass
{
	T mValue;
public:
	void Function(T arg);
};

// 함수의 선언과 정의를 분리할 경우
template <typename T>
void MyClass<T>::Function(T arg)
{
	T temp = arg;
	temp += arg;
}