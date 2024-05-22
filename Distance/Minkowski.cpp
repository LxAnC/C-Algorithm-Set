
//闵可夫斯基距离
//其实就是对欧几里得(p=2)和曼哈顿(p=1)的解释
#include <vector>
#include <cmath>
#include <iostream>

double MinkowskiDistance(const std::vector<double>& x, const std::vector<double>& y, double p) {
    if (x.size() != y.size()) {
        throw std::invalid_argument("Vectors must be of the same size.");
    }

    double sum = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        sum += std::pow(std::abs(x[i] - y[i]), p);
    }

    return std::pow(sum, 1.0 / p);
}

int main() {
    std::vector<double> x = {1.0, 2.0, 3.0};
    std::vector<double> y = {4.0, 5.0, 6.0};
    double p = 2.0; // 例如，p=2时，Minkowski距离就是欧几里得距离

    try {
        double distance = MinkowskiDistance(x, y, p);
        std::cout << "Minkowski Distance: " << distance << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}