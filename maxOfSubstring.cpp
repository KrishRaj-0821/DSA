#include<iostream>
#include<climits>
// #include<algorithm>
using namespace std;

int main() {

    int size = 5;
    int arr[5] = {1, -5, - 6, 5, 2};
    
    int maxSubArr = INT_MIN;
    for(int st = 0 ; st < size ; st++) {
        int curSum = 0;
        for (int end = st; end<  size; end++) {
            curSum += arr[end];
            maxSubArr = max(curSum, maxSubArr);
        }
    }
    cout<<"MaxSum of Sub Array: "<< maxSubArr<<endl;

    return 0;
}