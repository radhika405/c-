#include <iostream>
#include <vector>
#include <string>
using namespace std;

int registerAccountNumbers(int size, vector<int> accountNumbers, int branchCode) {
    // Check for invalid array size
    if (size < 0) {
        cout << "Invalid array size" << endl;
        return -1;
    }

    // Check for negative branch code
    if (branchCode < 0) {
        cout << "Invalid branch code" << endl;
        return -1;
    }

    int count = 0;
    string branchCodeStr = to_string(branchCode);

    for (int i = 0; i < size; ++i) {
        // Check for negative account numbers
        if (accountNumbers[i] < 0) {
            cout << "Invalid account Number" << endl;
            return -1;
        }

        // Convert account number to string
        string accountNumberStr = to_string(accountNumbers[i]);
        string accountBranchCode = accountNumberStr.substr(0, branchCodeStr.length());

        // Compare branch codes
        if (accountBranchCode == branchCodeStr) {
            ++count;
        }
    }

    return count > 0 ? count : 6;
}

int main() {
    int size;
    cin >> size;

    vector<int> accountNumbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> accountNumbers[i];
    }

    int branchCode;
    cin >> branchCode;

    int result = registerAccountNumbers(size, accountNumbers, branchCode);
    if (result != -1) {
        cout << result << endl;
    }

    return 0;
}
