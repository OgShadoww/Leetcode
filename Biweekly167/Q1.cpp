class Solution {
public:
  bool scoreBalance(string s) {
  int totalN = 0;
  for(int i = 0; i < s.length(); i++) {
    totalN += s[i] - 'a' + 1;
  }
    if(totalN % 2 != 0) {
      return false;
    }
    else {
      int a = 0;
      int target = totalN / 2;
      for(int i = 0; i < s.length(); i++) {
        a += s[i] - 'a' + 1;
        if(a == target) {
          return true;
        }
    }
  }

    return false;
  }
};
