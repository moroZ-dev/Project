#ifndef STATISTICS_CALCULATOR_H
#define STATISTICS_CALCULATOR_H

#include <vector>

class StatisticsCalculator {
private:
    //определение вектора
    std::vector<int> data;
public:
    //Конструктор класса StatisticsCalculator.
    explicit StatisticsCalculator(const std::vector<int>& inputData);
  
    double calculateMean() const;
    //Вычисляет среднее значение элементов массива.

    //Вычисляет медиану элементов массива.
    double calculateMedian() const;

    //Вычисляет моду элементов массива.
    int calculateMode() const;

    //Вычисляет размах элементов массива (разницу между max и min).
    int calculateRange() const;
};

#endif // STATISTICS_CALCULATOR_H