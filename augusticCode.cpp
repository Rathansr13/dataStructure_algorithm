#include <iostream>
#include <string>
#include <cstdlib>

long long calculateAgusticValues(std::string s, int index, long long currentSum, long long prevSum) {
    if (index == s.length()) {
        return prevSum + currentSum;
    }

    long long res = 0;
    for (int i = index; i < s.length(); ++i) {
        currentSum = currentSum * 10 + (s[i] - '0');
        res += calculateAgusticValues(s, i + 1, 0, prevSum + currentSum);
    }

    return res;
}

long long calculateAgusticSum(std::string s) {
    if (s.empty()) {
        return 0;
    }

    long long result = calculateAgusticValues(s, 0, 0, 0);
    return result;
}

int main() {
    std::string inputString = "432";
    long long result = calculateAgusticSum(inputString);
    std::cout << "Sum of all agustic values for " << inputString << " is: " << result << std::endl;
    return 0;
}
