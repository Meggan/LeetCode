class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        //declarations
        std::vector<std::string> alphabet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        std::vector<std::string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        std::map<std::string,std::string> map;
        std::map<std::string, std::string>::iterator it;
        std::string parsedChar = "";
        std::string morseCode = "";
        std::set<std::string> transform;
        
        //map vectors for value lookup
        for (size_t i =0; i<morse.size(); ++i){
            map[alphabet[i]] = morse[i];
        }

        //for all words, itterate through each letter and transform to morseCode string
        for (size_t i=0; i<words.size(); i++){
            std::cout<< "Word: " << words[i] << std::endl;
            morseCode = "";
            for (char c : words[i]){
                parsedChar = c;
                it = map.find(parsedChar);
                morseCode += map.find(parsedChar)->second;   
            }
            transform.insert(morseCode);
            std::cout<< "Transformed: " <<morseCode << std::endl << 
            "Unique Transformations: "<< transform.size() <<std::endl;
        }        
        return transform.size();
    }
};