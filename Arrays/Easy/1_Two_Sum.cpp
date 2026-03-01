#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap.insert({nums[i],i});
        }
        for(int j=0;j<nums.size();j++){
            if(umap.count(target-nums[j]) && umap[target-nums[j]]!=j){
                return{j,umap.at(target-nums[j])};
            }
        }
        return {-1,-1};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: " << result[0] << " " << result[1] << endl;

    return 0;
}