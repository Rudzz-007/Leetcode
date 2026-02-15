#include <vector>
#include <cmath>
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.length();i++){
            int k=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1')
                k+=abs(i-j);
            }
            ans.push_back(k);
        }
        return ans;
    }
};