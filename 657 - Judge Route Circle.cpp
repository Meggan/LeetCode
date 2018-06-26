class Solution {
public:
    bool judgeCircle(string moves) {
    int x=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U'||moves[i]=='R'){
                x+=1;
            }
            else {
                x-=1;
            }
        }
        return x == 0 ;
    }
};