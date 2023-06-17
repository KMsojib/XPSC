//lucky number
#include<bits/stdc++.h>
using namespace std;

bool isLuckyNumber(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> luckyNumbers;
    for (int num = A; num <= B; num++) {
        if (isLuckyNumber(num))
            luckyNumbers.push_back(num);
    }

    if (luckyNumbers.empty()) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < luckyNumbers.size(); i++) {
            cout << luckyNumbers[i];
            if (i != luckyNumbers.size() - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
