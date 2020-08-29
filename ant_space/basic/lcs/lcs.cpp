#include <iostream>
#include <fstream>
using namespace std;


/**
 * literal in target ... return 発見した箇所以降のtarget
 * literal not in target ... ''
 */
string check_literal(string literal, string target){
        for (int i=0 ; i< len(target);i++){
            if(literal == target[0]){
                return target[0:];
            }
            target = target[0:]
        }
        return target;
    }

/**
 * text in target_text ... return true
 * text not in target_text ... return false
 */
bool check_text(string text, string target_text){
    for(int i;i<len(text), i++){
        while(target_text){
            target_text = check_literal(text[i], target_text);
            if(target_text == '' && i != len(text)){
                return false;
            }
        }
    }
    return true;
}


/*
    abcd
    becd

    text = abc
    target_text = becd

    literal = a
    target_text[0] !== literal ... target_text = target_text[0:]
    target_text[0]

    if target_text == '' ... next(for.literal)

    
    

    // 
    // literal not in target ... ''

*/

void solve(){

}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
