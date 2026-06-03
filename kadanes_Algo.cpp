#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int CurrSum = 0;
    int MaxSum = INT_MIN;

    // normal for loop
 /* 
    for(int i = 0; i < nums.size() ; i++) {
        CurrSum += nums[i];
        MaxSum = max(CurrSum, MaxSum);
        if(CurrSum < 0) CurrSum = 0;
    }
*/
    // by using for each loop

    for(int val : nums) {
        CurrSum += val;
        MaxSum = max(CurrSum, MaxSum);
        if(CurrSum < 0) CurrSum = 0;
    }
    return MaxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int max = maxSubArray(nums);

    cout<<"Max of SubArray: "<<max<<endl;
    return 0;
}