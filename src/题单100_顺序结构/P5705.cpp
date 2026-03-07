//#include <iostream>
//int main() {
//    int a, b, c, d;
//    float in;
//    std::cin >> in;
//
//    // 获取整数部分
//    int inInt = in / 1;
//
//    // 计算小数部分的各个位
//    a = (inInt / 100);
//    b = ((inInt - a * 100) / 10);
//    c = (inInt - a * 100 - b * 10);
//
//    // 对整数部分的最低位进行位运算
//    d = ( in - (a * 100 + b * 10 + c * 1) )*10;
//
//    // 构造输出
//    float out = d + c * 0.1 + b * 0.01 + a * 0.001;
//    std::cout << out;
//}
