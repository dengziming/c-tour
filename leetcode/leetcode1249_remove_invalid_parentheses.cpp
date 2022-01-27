//
// Created by 邓子明 on 1/27/22.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int left = 0;
        int right = count(begin(s), end(s), ')');
        string ans;
        for (auto& c : s) {
            if (c == '(') {
                if (right > 0) {
                    ans += c;
                    left++;
                    right--;
                }
            } else if (c == ')') {
                if (left > 0) {
                    ans += c;
                    left--;
                } else {
                    right--;
                }
            } else {
                ans += c;
            }
        }
        return ans;
    }

    void print(string a){
        cout << a << endl;
    }
};

int main() {
    Solution solution;
    if (solution.minRemoveToMakeValid("aa()aa)(b") != "aa()aab")
        solution.print("Error");
    else
        solution.print("Success");
}
