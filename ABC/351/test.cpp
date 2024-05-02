#include <bits/stdc++.h>
//测试c++版本的指令
int main() {
    // c++23
    std::cout <<__cplusplus<< '\n';

    // c++20
    std::cout << std::midpoint(1, 15) << '\n';
    std::cout << std::lerp(1, 114514, 2) << '\n';
    std::map<long double, int> mp;
    mp[2] = 3;
    std::cout << mp.contains(114514) << "\n";

    // c++17
    std::cout << std::lcm(114514, 7) << '\n';
    std::cout << std::gcd(114514, 7) << '\n';
    for (auto [x, c] : mp) {
        std::cout << x << " " << c << '\n';
    }

    // other
    std::cout << std::__lg(114514) << '\n';
    std::cout << __builtin_ffs(114514) << '\n';
    int n;
    std::cin >> n;
    std::cout << n << '\n';

    return 0;
} 