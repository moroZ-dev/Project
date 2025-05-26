#include <iostream>
#include "StatisticsCalculator.h"

int main() {
    //задаем вектор
    std::vector<int> testData = { 1, 3, 2, 2, 5, 4, 4, 4, 3 };

    //инициализируем класс
    StatisticsCalculator calculator(testData);

    //вывод анализированных параметров по вектору
    std::cout << "Mean: " << calculator.calculateMean() << "\n";
    std::cout << "Median: " << calculator.calculateMedian() << "\n";
    std::cout << "Mode: " << calculator.calculateMode() << "\n";
    std::cout << "Range: " << calculator.calculateRange() << "\n";

    return 0;
}