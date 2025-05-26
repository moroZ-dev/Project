#include "StatisticsCalculator.h"
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <stdexcept>

StatisticsCalculator::StatisticsCalculator(const std::vector<int>& inputData) : data(inputData) {}

double StatisticsCalculator::calculateMean() const {
    //проверка на пустоту - вовзращет 0
    if (data.empty()) {
        return 0;
    }
    
    //вычисляет среднее (сумма деленая на кол-ва) с помощью accamulate 
    double sum = std::accumulate(data.begin(), data.end(), 0);
    return sum / data.size();
}

double StatisticsCalculator::calculateMedian() const {
    //проверка на пустоту - вовзращет 0
    if (data.empty()) {
        return 0.0;
    }

    //сортировка перед вычислением медианы
    std::vector<int> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    //вычисление медианы (среднее в ряду)
    size_t size = sortedData.size();
    if (size % 2 == 0) {
        return (sortedData[size / 2 - 1] + sortedData[size / 2]) / 2.0;
    }
    else {
        return sortedData[size / 2];
    }
}

int StatisticsCalculator::calculateMode() const {
    
    //проверка на пустоту - вовзращет 0
    if (data.empty()) {
        return 0;
    }

    // Создаybt карты частот для учёта повторений каждого элемента.  
    std::unordered_map<int, int> frequencyMap;
    for (int num : data) {
        frequencyMap[num]++;
    }

    int mode = data[0];
    int maxCount = frequencyMap[mode];

    //поиск элемента с максимальной частотой
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount ||
            (pair.second == maxCount && pair.first < mode)) {
            mode = pair.first;
            maxCount = pair.second;
        }
    }

    //возвращает моду 
    return mode;
}

int StatisticsCalculator::calculateRange() const {

    //проверка на пустоту - вовзращет 0   
    if (data.empty()) {
        return 0;
    }

    //поиск минимального числа в векторе
    auto minIt = std::min_element(data.begin(), data.end());

    //поиск максимального числа в векторе
    auto maxIt = std::max_element(data.begin(), data.end());

    //возвращает разницу
    return *maxIt - *minIt;
}