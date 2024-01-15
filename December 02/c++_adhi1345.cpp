#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> generateProductFrequency(const std::vector<int>& productIDs) {
    std::unordered_map<int, int> frequencyMap;

    // Count the frequency of each product
    for (int productID : productIDs) {
        frequencyMap[productID]++;
    }

    // Create the output array
    std::vector<int> productFrequency;
    for (const auto& pair : frequencyMap) {
        productFrequency.push_back(pair.second);
    }

    return productFrequency;
}

int main() {
    // Example 1
    std::vector<int> input1 = {2, 2, 3, 4, 5, 6, 2, 4, 6, 7};
    std::vector<int> output1 = generateProductFrequency(input1);

    std::cout << "Output 1:" << std::endl;
    for (int i : output1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Example 2
    std::vector<int> input2 = {25, 28, 33, 27, 28, 25, 25, 31};
    std::vector<int> output2 = generateProductFrequency(input2);

    std::cout << "Output 2:" << std::endl;
    for (int i : output2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
