#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        int ones = 0, zeros = 0;
        long long count = 0;   
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') {
                // Count how many ones are after this zero         
                zeros++;
            } else {
                // When encountering '1', we count it to match future '0's
                count += zeros;
                ones++;
            }
        }     
        return count;
    }
};

int main() {
    Solution solution;
    string s;
    
    // Taking input string from user
    cout << "Enter a binary string (consisting of 0's and 1's): ";
    cin >> s;

    // Calculating the minimum steps
    long long result = solution.minimumSteps(s);

    // Output the result
    cout << "Minimum steps to rearrange the string: " << result << endl;

    return 0;
}
