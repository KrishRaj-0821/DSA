#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
The majority element is the element that appears more than ⌊n / 2⌋ times.
*/

int majorityEle(vector<int>& num) {
    int size = num.size();
    
    // brute force approch
    // Time complexxity = O(n2)
    for(int i  = 0; i < size; i++) {
        int count = 0;
        for(int j = i; j <size; j++) {
            if(num[i] == num[j]) {
                count++;
            }
        }
        if(count > (size / 2)) {
            return num[i];
            break;
        }
    }
    
    return -1;
}

// optimum approch => first sort then search for majority element.
int MEbyOptimum(vector<int>& num) {
    int size = num.size();
    sort(num.begin(), num.end());
    int count = 1;
    for(int i = 1; i < size; i++) {
        if(num[i] == num[i-1]) {
            count++;
        } else {
            if(count > (size / 2)) {
                return num[i-1];
            }
            count = 1;
        }
    }
    // Check the last group
    if(count > (size / 2)) {
        return num[size-1];
    }
    return -1;
}

// moore's voting algo. =>if arr[n] == arr[n-1] => count++ else count-- => at last jiska count max = majority ele.
int MEbyMoore(vector<int> & num) {
    int size = num.size();
    int ans = 0, freq = 0;
    for(int i = 0; i < size; i++) {
        if(freq == 0) {
            ans = num[i];
        } 
        if (ans == num[i]) freq++;
        else freq--;
    }
    return ans;
}


int main() {
    vector<int> nums = {3,2,3};
    int majornum = majorityEle(nums);
    cout<<"Majority Element: "<< majornum <<endl;

    int majornum2 = MEbyOptimum(nums);
    cout<<"Majority Element by optimum method: "<< majornum2 <<endl;

    int majornum3 = MEbyMoore(nums);
    cout<<"Majority Element by moore's votting algorithm: "<< majornum3 <<endl;
    return 0;
}
