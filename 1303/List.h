#pragma once
#include<iostream>
#include<vector>
using namespace std;


//template <class T>
//class List
//{
//	vector <T> list;//������� �������
//
//public:
//	void add(T item) {// ���������� � ����� 
//		list.pop_back(item);
//	}
//	void remove(int index) {
//		list.erase(list.begin()+index);//�������� ���������� �� ��������, ���������� ����������
//	}
//	T getmin() {
//		auto pMin = list.begin();
//		for (auto it = list.end(); it < list.end; it++) {
//			if (*it < *pMin) pMin = it;
//		}
//		return *pMin;
//	}
//	T getmax() {
//		auto pMax = list.begin();
//		for (auto it = list.end(); it < list.end; it++) {
//			if (*it < *pMax) pMax = it;
//		}
//		return *pMax;
//	}
//};
//template<>
//class List <const char*> {
//	vector <const char*> list;//������� �������
//
//public:
//	void add(const char* item) {// ���������� � ����� 
//		list.pop_back();
//	}
//	void remove(int index) {
//		list.erase(list.begin() + index);//�������� ���������� �� ��������, ���������� ����������
//	}
//	const char* getmin() {
//		auto pMin = list.begin();
//		for (auto it = list.end(); it < list.end(); it++) {
//			if (*it < *pMin) pMin = it;
//		}
//		return *pMin;
//	}
//	const char* getmax() {
//		auto pMax = list.begin();
//		for (auto it = list.end(); it < list.end(); it++) {
//			if (*it < *pMax) pMax = it;
//		}
//		return *pMax;
//	}
//};