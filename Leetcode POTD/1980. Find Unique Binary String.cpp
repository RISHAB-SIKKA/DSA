// // // APROACH-1
// // // Time Complexity	O(2ⁿ) (exponential)
// // // Space Complexity	O(n) (linear)
// // class Solution {
// // public:
// //     string findDifferentBinaryString(vector<string>& nums) {
// //         int n = nums.size();
// //         unordered_set<int> st;

// //         // Convert binary strings to decimal and store them in a set
// //         for (int i = 0; i < n; i++) {
// //             int temp = stoi(nums[i], nullptr, 2);
// //             st.insert(temp);
// //         }

// //         // int maxVal = pow(2,n) - 1; // Corrected exponentiation
// //         string result = "";

// //         // Find the smallest missing binary number
// //         for (int i = 0; i <= n; i++) {
// //             if (st.find(i) == st.end()) { // Check if number is not in set
// //                 result = bitset<16>(i).to_string(); // Convert to binary
// //                 return result.substr(16 - n, n); // Extract n bits
// //             }
// //         }

// //         return result;
// //     }
// // };


// // APROACH-1
// // Time Complexity	O(N) (exponential)
// // // Space Complexity	O(1) (linear)
// // class Solution {
// // public:
// //     string findDifferentBinaryString(vector<string>& nums) {
// //         int n = nums.size();

// //         string result = "";

// //         for (int i = 0; i < n; i++) {
            
// //             char ch = nums[i][i];
// //             result += (ch=='0') ? '1' : '0';
// //         }
// //         return result;
// //     }
// // };


// class Solution {
//     public:
//         string generateBinaryString(int n, unordered_set<string>& set, string& curr) {
//             if (curr.size() == n) {
//                 return set.count(curr) ? "" : curr;
//             }
//             curr.push_back('0');
//             string res = generateBinaryString(n, set, curr);\
//             if (!res.empty()) return res;
//             curr.back() = '1';
//             res = generateBinaryString(n, set, curr);
//             if (!res.empty()) return res;
//             curr.pop_back();
//             return "";
//             }
//         string findDifferentBinaryString(vector<string>& nums) {
//             unordered_set<string> s(nums.begin(), nums.end());
//             string curr;
//             return generateBinaryString(nums.size(), s, curr);
//     }
//     };
    
    