//#pragma once
//#include<iostream>
//#include<vector>
//using namespace std;
//
//template <class T, int height, int width>
//class Matax
//{
//	T m[height][width];
//
//public:
//	const auto& operator() const (int j, int i) {
//		if (j < 0 || j >= height || i < 0 || i >= width) {
//			cout << " Eror";
//		 }
//		m[j][i];
//	}
//	const auto& operator() (int j, int i) {
//		if (j < 0 || j >= height || i < 0 || i >= width) {
//			cout << " Eror";
//		}
//		m[j][i];
//	}
//	auto getMin() {
//		auto min = m[0][0];
//			for (int i = 0; i < height; i++ ) {
//				for (int j{ 0 }; j < width; j++) {
//					if (m[i][j] < min) min = m[i][j];
//				}
//			}
//		return min;
//	}
//	auto getMax(){
//		auto max = m[0][0];
//			for (int i = 0; i < height; i++) {
//				for (int j{ 0 }; j < width; j++) {
//					if (m[i][j] < max) max = m[i][j];
//				}
//			}
//		return max;
//	}
//
//
//
//};
//
//template <int height, int width>
//class Matax<const char*, height, width>
//{
//	T m[height][width];
//
//public:
//	const auto& operator() const (int j, int i) {
//		if (j < 0 || j >= height || i < 0 || i >= width) {
//			cout << " Eror";
//		}
//		m[j][i];
//	}
//	const auto& operator() (int j, int i) {
//		if (j < 0 || j >= height || i < 0 || i >= width) {
//			cout << " Eror";
//		}
//		m[j][i];
//	}
//	auto getMin() {
//		auto min = m[0][0];
//		for (int i = 0; i < height; i++) {
//			for (int j{ 0 }; j < width; j++) {
//				if (m[i][j] < min) min = m[i][j];
//			}
//		}
//		return min;
//	}
//	auto getMax() {
//		auto max = m[0][0];
//		for (int i = 0; i < height; i++) {
//			for (int j{ 0 }; j < width; j++) {
//				if (m[i][j] < max) max = m[i][j];
//			}
//		}
//		return max;
//	}
//
//
//
//};

