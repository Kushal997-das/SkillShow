#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // For the swap function

using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        vector<int> last(10, -1);
        
        // Record the last occurrence of each digit
        for (int i = 0; i < str.length(); i++) {
            last[str[i] - '0'] = i;
        }
        
        // Try to find the first place to swap for maximizing the number
        for (int i = 0; i < str.length(); i++) {
            for (int d = 9; d > str[i] - '0'; d--) {
                if (last[d] > i) {
                    swap(str[i], str[last[d]]);
                    return stoi(str);
                }
            }
        }
        
        return num;
    }
};

int main() {
    Solution solution;
    int num;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Call the function and display the result
    int result = solution.maximumSwap(num);
    cout << "Maximum number after swap: " << result << endl;

    return 0;
}
