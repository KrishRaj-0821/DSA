#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int>& nums, int targetSum) {
    vector<int> targetArray;
    int size = nums.size();
    /*
    brut force approch
    time complixcity = O(n2)
    */
/*
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size ; j++) {
            if(nums[i] + nums[j] == targetSum) {
                return {i, j};
            }
        }
    }
*/
    /*
    using two pointer approch
    when sum < target => st++
        sum > target => end--
        sum = target => return array

    */
    int i =0, j= size - 1;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if(sum > targetSum ) j--;
        else if(sum < targetSum ) i++;
        else {
            return {i, j}; 
            break;
        }
        
    }
    

    return {};
}
int main() {
    vector<int> nums = {1,8,9,19,26};
    int target = 28;

    vector<int> targetpair = PairSum(nums, target);
    for (int index : targetpair) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}