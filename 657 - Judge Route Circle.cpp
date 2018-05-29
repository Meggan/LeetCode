class Solution {
public:
    bool judgeCircle(string moves) {
    int x=0;
    int y=0;
    std::string parsedChar ="";
        for ( std::string::iterator it = moves.begin(); it != moves.end(); ++it){
            parsedChar = *it;
            
            //std::cout << parsedChar <<std::endl;
            if(parsedChar == "U"){
                y+=1;
            }
            else if(parsedChar == "D"){
                y-=1;
            }
            else if(parsedChar == "L"){
                x+=1;
            }
            else if(parsedChar == "R"){
                x-=1;
            }
        }

        return x == 0 && y == 0;
    }
};