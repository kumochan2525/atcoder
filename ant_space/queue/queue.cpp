#include <iostream>
#include <fstream>
#include <queue>
using namespace std;


void solve(){
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << que.front() << endl;
    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;

}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
