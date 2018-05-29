class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        std::map<std::string,std::string> map;
        std::map<std::string, std::string>::iterator it;
        std::string parsedChar = "";
        std::string morseCode = "";
        std::set<std::string> transform;
        map["a"]= ".-"; map["b"]= "-..."; map["c"]= "-.-."; map["d"]= "-.."; map["e"]= ".";
        map["f"]= "..-."; map["g"]= "--."; map["h"]= "...."; map["i"]= ".."; map["j"]= ".---";
        map["k"]= "-.-"; map["l"]= ".-.."; map["m"]= "--"; map["n"]= "-."; map["o"]= "---"; 
        map["p"]= ".--."; map["q"]= "--.-"; map["r"]= ".-."; map["s"]= "..."; map["t"]= "-"; 
        map["u"]= "..-"; map["v"]= "...-"; map["w"]= ".--"; map["x"]= "-..-"; map["y"]= "-.--"; map["z"] = "--..";
        
        //for all words, itterate through each letter and transform to morseCode string
        for (size_t i=0; i<words.size(); i++){
            //std::cout<< "Word: " << words[i] << std::endl;
            morseCode = "";
            for (char c : words[i]){
                parsedChar = c;
                it = map.find(parsedChar);
                morseCode += map.find(parsedChar)->second;   
            }
            transform.insert(morseCode);
            //std::cout<< "Transformed: " <<morseCode << std::endl << 
            //"Unique Transformations: "<< transform.size() <<std::endl;
        }        
        return transform.size();
    }
};