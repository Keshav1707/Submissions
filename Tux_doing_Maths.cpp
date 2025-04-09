#include <iostream>
#include <vector>
#include <unordered_map>

// Function to compute Fibonacci numbers up to the maximum index in the sequence
std::vector<long long> computeFibonacci(int maxIndex) {
    std::vector<long long> fibonacci(maxIndex + 1, 0);
    if (maxIndex >= 1) fibonacci[1] = 1;
    if (maxIndex >= 2) fibonacci[2] = 1;
    for (int i = 3; i <= maxIndex; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    return fibonacci;
}

// Function to count the number of sacred quadruples
long long countSacredQuadruples(const std::vector<int>& sequence) {
    int n = sequence.size();
    if (n < 4) return 0;

    // Compute Fibonacci numbers up to the maximum index in the sequence
    int maxIndex = *max_element(sequence.begin(), sequence.end());
    std::vector<long long> fibonacci = computeFibonacci(maxIndex);

    // Map to count frequencies of each sum
    std::unordered_map<long long, int> sumFrequency;

    // Calculate pair sums and their frequencies
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long sum = fibonacci[sequence[i]] + fibonacci[sequence[j]];
            sumFrequency[sum]++;
        }
    }

    // Calculate the number of sacred quadruples
    long long quadrupleCount = 0;
    for (const auto& entry : sumFrequency) {
        int freq = entry.second;
        if (freq > 1) {
            quadrupleCount += static_cast<long long>(freq) * (freq - 1) / 2;
        }
    }

    return quadrupleCount;
}

int main() {
    std::vector<int> sequence = {1, 2, 3, 4, 5, 6}; // Example sequence
    long long result = countSacredQuadruples(sequence);
    std::cout << "Number of sacred quadruples: " << result << std::endl;
    return 0;
}
