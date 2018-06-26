#include <cstring>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        //declaration
        int count=0;
        
        //loop through
        for (char& c : J){
            for (char& ch : S){
                if (c == ch){
                    count++;
                }
            }
        }
            
        return count;
    }
};