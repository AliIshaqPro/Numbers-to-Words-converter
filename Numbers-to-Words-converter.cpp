#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<int, string> unitsMap = {
    {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
    {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
};

map<int, string> tensMap = {
    {2, "Twenty"}, {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"},
    {6, "Sixty"}, {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}
};

map<int, string> teensMap = {
    {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, 
    {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, 
    {18, "Eighteen"}, {19, "Nineteen"}
};

string convertToWords(int number) {
    if (number < 10) {
        return unitsMap[number];
    } else if (number < 20) {
        return teensMap[number];
    } else if (number < 100) {
        return tensMap[number / 10] + (number % 10 ? " " + unitsMap[number % 10] : "");
    } else if (number < 1000) {
        return unitsMap[number / 100] + " Hundred" + (number % 100 ? " and " + convertToWords(number % 100) : "");
    } else if (number < 1000000) {
        return convertToWords(number / 1000) + " Thousand" + (number % 1000 ? ", " + convertToWords(number % 1000) : "");
    } else if (number < 1000000000) {
        return convertToWords(number / 1000000) + " Million" + (number % 1000000 ? ", " + convertToWords(number % 1000000) : "");
    } else if (number < 1000000000000) {
        return convertToWords(number / 1000000000) + " Billion" + (number % 1000000000 ? ", " + convertToWords(number % 1000000000) : "");
    } else {
        return "Number out of range";
    }
}

int main() {
    long long number;
    cout << "PLEASE ENTER YOUR NUMBER: ";
    cin >> number;

    if (number < 0 || number >= 1000000000000) {
        cout << "Number out of range" << endl;
    } else {
        cout << convertToWords(number) <<" Rs"<< endl;
    }

    return 0;
}
