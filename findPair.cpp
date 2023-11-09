#include <iostream>
#include <vector>
#include <string>

bool isFind(std::string s, std::string r) {
    if (r.find(s) != std::string::npos) {
        return true;
    } else {
        return false;
    }
}

int findChem(std::vector<std::string> chemicals) {
    int count = 0;
    for (int i = 0; i < chemicals.size(); i++) {
        for (int j = 0; j < chemicals.size(); j++) {
            if (i != j && isFind(chemicals[i], chemicals[j])) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    std::vector<std::string> chemicals = {"hacker", "int", "iint", "hackerer"};
    int result = findChem(chemicals);
    std::cout << result;
    return 0;
}

