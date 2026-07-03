#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// brut force approch for containing most water in container.
int MostWater(vector<int>& nums) {
    int size = nums.size();
    int MW = 0;
    for(int i = 0; i < size ; i++) {
        for(int j = i + 1; j < size ; j++) {
            int h = min(nums[i], nums[j]);
            int w = j - i;
            int area = h * w;

            MW = max(MW, area);

        }
    }
    return MW;
}

// two pointer approch
int MostWater2(vector<int>& nums) {
    int rl = nums.size() - 1;
    int ll = 0;
    int mw = 0;
    while(rl > ll ) {
        int h = min(nums[rl], nums[ll]);
        mw = max(mw, (h * (rl - ll)));
        // if(nums[rl] <= nums[ll]) rl--;
        // else ll++;
        // ternary oprrator
        nums[rl] < nums[ll]? rl-- : ll++;
    }
    return mw;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int Most_water = MostWater(height);
    cout<<"Maximum Water the Container can contain = "<<Most_water<<endl;
    cout<<"Maximum Water2 the Container can contain = "<<MostWater2(height)<<endl;

    return 0;
}