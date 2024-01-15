#include <iostream>
#include <vector>

int main() {
    int numBatsmen;
    std::cout << "Enter the number of batsmen: ";
    std::cin >> numBatsmen;

    std::vector<int> runs(numBatsmen);

    std::cout << "Enter the runs scored by each batsman: ";
    for (int i = 0; i < numBatsmen; ++i) {
        std::cin >> runs[i];
    }

    int totalRuns = 0;
    int maxRuns = 0;
    int maxRunsBatsman = 0;

    for (int i = 0; i < numBatsmen; ++i) {
        totalRuns += runs[i];
        if (runs[i] > maxRuns) {
            maxRuns = runs[i];
            maxRunsBatsman = i + 1; // Adding 1 to convert index to unique identifier
        }
    }

    std::cout << "Total runs scored by the team: " << totalRuns << std::endl;
    std::cout << "Batsman with the highest runs: Batsman " << maxRunsBatsman -1 << " - " << maxRuns << " runs\n";

    return 0;
}
