#include <string>
class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        int i=0;
        while(i<n.size()){
             int digit = n[i] - '0';
            if(max<digit) max=digit;
            i++;
        }
        return max;
    }
};