//#include <iostream>
//#include <tuple>
//#include <algorithm>
//
//std::tuple<long long, long long> cube(int n, int m, int cur_n, int cur_m) {
//    long long num1{}, num2{};
//    for (int i = cur_n; i < n; i++) {
//        for (int j = cur_m; j < m; j++) {
//            // 计算从00开始可以取得的矩形的数量，实际为n*m
//            // 返回正方形的数量
//            num1 += std::min(n - i, m - j);
//            num2 += (n - i) * (m - j) - std::min(n - i, m - j);
//        }
//    }
//    return { num1, num2 };
//}
//
//int main() {
//    int n, m;
//    long long num1{}, num2{};
//    std::tuple<long long, long long> res;
//    std::cin >> n >> m;
//    int cur_n{},cur_m{};
//    res = cube(n, m, cur_n, cur_m);
//    // get返回的值是引用，因此可以用std::get修改值
//    std::cout << std::get<0>(res) << " " << std::get<1>(res) << std::endl;
//}