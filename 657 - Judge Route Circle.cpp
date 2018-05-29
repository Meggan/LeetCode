class Solution {
public:
    bool judgeCircle(string moves) {
    int x=0;
    int y=0;
    std::string parsedChar ="";
        for ( std::string::iterator it = moves.begin(); it != moves.end(); ++it){
            parsedChar = *it;
            //std::cout << parsedChar <<std::endl;
            if(strcmp(parsedChar.c_str(),"U")==0){
                y+=1;
            }
            else if(strcmp(parsedChar.c_str(),"D")==0){
                y-=1;
            }
            else if(strcmp(parsedChar.c_str(),"L")==0){
                x-=1;
            }
            else if(strcmp(parsedChar.c_str(),"R")==0){
                x+=1;
            }
        }

        return x == 0 && y == 0;
    }
};