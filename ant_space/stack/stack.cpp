#include <iostream>
#include <fstream>
#include <stack>

using namespace std;


void solve(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    printf("%d¥n", s.top());
    printf("%d¥n", s.top());
    s.pop();
    printf("%d¥n", s.top());
    s.pop();
    printf("%d¥n", s.top());
    s.pop();
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
