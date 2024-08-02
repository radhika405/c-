#include <iostream>
#include <vector>
#include <string>

int registerAccountNumbers(int size, std::vector<int> accountNumbers, int branchCode) {
    if (size < 0) {
        std::cout << "Invalid array size" << std::endl;
        exit(0);
    }

    for (int account : accountNumbers) {
        if (account < 0) {
            std::cout << "Invalid account number" << std::endl;
            exit(0);
        }
    }

    if (branchCode < 0) {
        std::cout << "Invalid branch code" << std::endl;
        exit(0);
    }

    int count = 0;
    for (int account : accountNumbers) {
        int currentBranchCode = account / 100; // Extract the first xxx digits
        if (currentBranchCode == branchCode) {
            count++;
        }
    }

    return count;
}

int main() {
    int size;
    std::cin >> size;

    std::vector<int> accountNumbers(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> accountNumbers[i];
    }

    int branchCode;
    std::cin >> branchCode;

    int result = registerAccountNumbers(size, accountNumbers, branchCode);

    if (result == 0) {
        std::cout << "e" << std::endl;
    } else {
        std::cout << result << std::endl;
    }

    return 0;
}