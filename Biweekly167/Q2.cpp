#include<iostream>
#include<vector>
using namespace std;

int longestSubarray(vector<int>& nums) {
  int maxL = 2;
  int starterPoint = 0;
  for(int i = 0; i < nums.size() - 2; i++) {
    if(nums[i] + nums[i+1] == nums[i+2]) {
        int l = i - starterPoint + 3;
        if(l > maxL) maxL = l;
    }
    else {
      starterPoint = i+1;
    }
  }

  return maxL;
}

int main() {
  int arr[] = {1,1,2,3,6,9,15,24, 38};
  vector<int> a(arr, arr + 9);
  cout << longestSubarray(a) << endl;

  return 0;
}
