#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string numberToWord(int);

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        cout << numberToWord(num) << '\n';
    }
    return 0;
}

string numberToWord(int n) {
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string parity[] = {"even", "odd"};

    if (0<n &&n < 10) {
        return words[n];
    } else {
        if (n % 2 == 0) return parity[0];
        else return parity[1];
    }
}

// Strim left and right of n
string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

