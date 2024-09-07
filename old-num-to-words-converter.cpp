#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    //////////////////////////////////////////////////
    map<int, string> unitsMap;
    map<int, string> tensMap;
    map<int, string> tens10Map;
    map<int, string> tens10Map2;
    
    unitsMap[0] = "Zero";
    unitsMap[1] = "One";
    unitsMap[2] = "Two";
    unitsMap[3] = "Three";
    unitsMap[4] = "Four";
    unitsMap[5] = "Five";
    unitsMap[6] = "Six";
    unitsMap[7] = "Seven";
    unitsMap[8] = "Eight";
    unitsMap[9] = "Nine";

    // Fill tensMap with values from Tens array
    tensMap[1] = "Ten";
    tensMap[2] = "Twenty";
    tensMap[3] = "Thirty";
    tensMap[4] = "Forty";
    tensMap[5] = "Fifty";
    tensMap[6] = "Sixty";
    tensMap[7] = "Seventy";
    tensMap[8] = "Eighty";
    tensMap[9] = "Ninety";

    // Fill tens10Map with values from Tens_10 array
    tens10Map[10] = "Ten";
    tens10Map[11] = "Eleven";
    tens10Map[12] = "Twelve";
    tens10Map[13] = "Thirteen";
    tens10Map[14] = "Fourteen";
    tens10Map[15] = "Fifteen";
    tens10Map[16] = "Sixteen";
    tens10Map[17] = "Seventeen";
    tens10Map[18] = "Eighteen";
    tens10Map[19] = "Nineteen";
    tens10Map[20] = "Twenty";

    
    tens10Map2[1] = "Eleven";
    tens10Map2[2] = "Twelve";
    tens10Map2[3] = "Thirteen";
    tens10Map2[4] = "Fourteen";
    tens10Map2[5] = "Fifteen";
    tens10Map2[6] = "Sixteen";
    tens10Map2[7] = "Seventeen";
    tens10Map2[8] = "Eighteen";
    tens10Map2[9] = "Nineteen";
    tens10Map2[0] = "Twenty";


        
    ///////////////////////////////////////////////////
    long long number;
    cout << "PLEASE ENTER YOUR NUMBER: ";
    cin >> number;

    if (number >= 0 && number < 10) {
       cout<<unitsMap[number];

    } else if (number >= 10 && number < 100) {
    if (number >= 10 && number < 21){
        cout<<tens10Map[number];
    }else{
        string numberStr = to_string(number);
    vector<int> digits;

    for (char c : numberStr) {
        digits.push_back(c - '0');
    }
    cout<<tensMap[digits[0]]<<" "<<unitsMap[digits[1]];
    }
    } else if (number >= 100 && number < 1000) {
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
    cout<<unitsMap[digits[0]]<<" Hundred and "<<tensMap[digits[1]]<<" "<<unitsMap[digits[2]];
        
    } else if (number >= 1000 && number < 10000) {
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        cout<<unitsMap[digits[0]]<<" Thousand, "<<unitsMap[digits[1]]<<" Hundred and "<<tensMap[digits[2]]<<" "<<unitsMap[digits[3]];
        
    } else if (number >= 10000 && number < 100000) {
        
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        if(digits[0]< 2 ){
        cout<<tens10Map2[digits[1]]<<" Thousand, "<<unitsMap[digits[2]]<<" Hundred and "<<tensMap[digits[3]]<<" "<<unitsMap[digits[4]];
        }else{
        cout<<tensMap[digits[0]] <<" " << unitsMap[digits[1]]<<" Thousand, "<<unitsMap[digits[2]]<<" Hundred and "<<tensMap[digits[3]]<<" "<<unitsMap[digits[4]];

        }
    } else if (number >= 100000 && number < 1000000) {
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        cout<<unitsMap[digits[0]]<<" "<<tensMap[digits[1]] <<" "<<unitsMap[digits[2]]<<" Thousand, "<<unitsMap[digits[3]]<<" Hundred and "<<tensMap[digits[4]]<<" "<<unitsMap[digits[5]];
        
    } else if (number >= 1000000 && number < 10000000) {
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        cout<<unitsMap[digits[0]]<<" Million "<<unitsMap[digits[1]]<<" "<<tensMap[digits[2]] <<" "<<unitsMap[digits[3]]<<" Thousand, "<<unitsMap[digits[4]]<<" Hundred and "<<tensMap[digits[5]]<<" "<<unitsMap[digits[6]];
        
    } else if (number >= 10000000 && number < 100000000) {
        
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        if(digits[0]< 2 ){
        cout<<tens10Map2[digits[1]]<<" Million, "<<unitsMap[digits[2]]<<" "<<tensMap[digits[3]] <<" "<<unitsMap[digits[4]]<<" Thousand, "<<unitsMap[digits[5]]<<" Hundred and "<<tensMap[digits[6]]<<" "<<unitsMap[digits[7]];
        }else{
        cout<<tensMap[digits[0]] <<" " << unitsMap[digits[1]]<<" Milion, "<<unitsMap[digits[2]]<<" "<<tensMap[digits[3]] <<" "<<unitsMap[digits[4]]<<" Thousand, "<<unitsMap[digits[5]]<<" Hundred and "<<tensMap[digits[6]]<<" "<<unitsMap[digits[7]];
        }
    } else if (number >= 100000000 && number < 1000000000) {
        string numberStr = to_string(number);
        vector<int> digits;

        for (char c : numberStr) {
            digits.push_back(c - '0');
        }
        cout<<unitsMap[digits[0]]<<" "<<tensMap[digits[1]] <<" "<<unitsMap[digits[2]]<<" Million, "<<unitsMap[digits[3]]<<" "<<tensMap[digits[4]] <<" "<<unitsMap[digits[5]]<<" Thousand, "<<unitsMap[digits[6]]<<" Hundred and "<<tensMap[digits[7]]<<" "<<unitsMap[digits[8]];
    } else if (number >= 1000000000 && number < 10000000000) {
        cout << "Billions" << endl;
    } else if (number >= 10000000000 && number < 100000000000) {
        cout << "Ten Billions" << endl;
    } else if (number >= 100000000000 && number < 1000000000000) {
        cout << "Hundred Billions" << endl;
    } else {
        cout << "Number out of range" << endl;
    }

    return 0;
}