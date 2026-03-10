//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
///*
//
//*/
//
//struct Student {
//	std::string name;
//	int year;
//	int month;
//	int day;
//	int id;
//};
//
//int main() {
//	int n;
//	std::cin >> n;
//	std::vector<Student> a(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> a[i].name >> a[i].year >> a[i].month >> a[i].day;
//		a[i].id = i;
//	}
//	// 自定义lambda函数排序
//	std::sort(a.begin(), a.end(), [](const Student& s1, const Student& s2) {
//		if (s1.year < s2.year) {
//			return true;
//		}
//		else if (s1.year == s2.year) {
//			if (s1.month < s2.month) {
//				return true;
//			}
//			else if (s1.month == s2.month) {
//				if (s1.day < s2.day) {
//					return true;
//				}
//				else if (s1.day == s2.day) {
//					// 出生时赋予独一无二的ID，需要后输入的先输出只需要给ID排序就可以
//					// 比较函数返回true表示s1应该排在前面
//					return s1.id > s2.id;
//				}
//				else {
//					return false;
//				}
//			}
//			else {
//				return false;
//			}
//		}
//		else {
//			return false;
//		}
//		}
//	);
//	for (int i = 0; i < n; i++) {
//		std::cout << a[i].name << std::endl;
//	}
//}