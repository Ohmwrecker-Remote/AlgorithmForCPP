//#include<iostream>
//
//int main() {
//	int pencilNeeds;
//	int pacage1,price1,pacage2,price2,pacage3,price3;
//	int totalPrice1,totalPrice2,totalPrice3 = 0;
//	std::cin >> pencilNeeds;
//	std::cin >> pacage1 >> price1 >> pacage2 >> price2 >> pacage3 >> price3;
//	if (pencilNeeds % pacage1 > 0) {
//		totalPrice1 = price1 * ((pencilNeeds / pacage1) + 1 );
//	}
//	else {
//		totalPrice1 = price1 * (pencilNeeds / pacage1);
//	}
//	if (pencilNeeds % pacage2 > 0) {
//		totalPrice2 = price2 * ((pencilNeeds / pacage2) + 1);
//	}
//	else {
//		totalPrice2 = price2 * (pencilNeeds / pacage2);
//	}
//	if (pencilNeeds % pacage3 > 0) {
//		totalPrice3 = price3 * ((pencilNeeds / pacage3) + 1);
//	}
//	else {
//		totalPrice3 = price3 * (pencilNeeds / pacage3);
//	}
//	if (totalPrice1 <= totalPrice2 && totalPrice1 <= totalPrice3) {
//		std::cout << totalPrice1 << std::endl;
//	}
//	else if (totalPrice2 <= totalPrice1 && totalPrice2 <= totalPrice3) {
//		std::cout << totalPrice2 << std::endl;
//	}
//	else {
//		std::cout << totalPrice3 << std::endl;
//	}
//}
