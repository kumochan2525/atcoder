#include <iostream>
#include <fstream>
using namespace std;

int memory[100];

int fib(int x){
    if(x <= 1) return x;
    if(memory[x]) return memory[x];
    return memory[x] = fib(x-1) + fib(x-2);
}

void solve(){
    for(int i=0;i<10;i++){
        cout << fib(i) << " ";
    }
    cout << endl;
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
