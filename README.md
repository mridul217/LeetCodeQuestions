# LeetCode Practice Repository

Welcome to my LeetCode Practice Repository! 🚀

## About

This repository is a collection of my daily LeetCode problem solutions, aiming to enhance my problem-solving skills and deepen my understanding of algorithms and data structures.

## Why This Repository?

### 📈 **Continuous Learning**
- **Daily Practice:** Solving at least one problem daily.
- **Wide Range of Topics:** Covering Arrays, Strings, Linked Lists, Trees, Graphs, Dynamic Programming, and more.

### 🛠 **Code Quality**
- **Clean and Readable:** Focus on readability and maintainability.
- **Comments and Explanations:** Detailed explanations with each solution.

### 🚀 **Interview Preparation**
- **Real-world Problems:** Tackling questions relevant to technical interviews.
- **Optimization:** Emphasis on efficient algorithms.

## Repository Contains Problems On The Following Topics: 

- **Arrays**
- **Strings**
- **Linked Lists**
- **Stacks and Queues**
- **Trees**
- **Graphs**
- **Dynamic Programming**
- **Backtracking**
- **Sorting and Searching**

Each category contains subfolders for individual problems.

## Sample Solution

```cpp
// Problem: Two Sum
// Difficulty: Easy
// Link: https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};

<!---LeetCode Topics Start-->
# LeetCode Topics
## Two Pointers
|  |
| ------- |
| [1894-merge-strings-alternately](https://github.com/mridul217/LeetCodeQuestions/tree/master/1894-merge-strings-alternately) |
## String
|  |
| ------- |
| [1894-merge-strings-alternately](https://github.com/mridul217/LeetCodeQuestions/tree/master/1894-merge-strings-alternately) |
<!---LeetCode Topics End-->