#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Updated array: ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}