#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates( vector<int>& nums) {
        int j = 1;//j==
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution k;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int len = k.removeDuplicates(nums);
    for(int i = 0; i < len; i++){
        cout << nums[i] << " ";
    }
 return 0;
}