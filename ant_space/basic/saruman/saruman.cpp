#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
using namespace std;

const int max_n = 1000;
const int INF = 100000000;

void solve(){
    int n,r,x[max_n];
    cin >> n;
    cin >> r;
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x, x+n);

    queue<int> que;
    int check;
    for(int i=0;i<n;i++){
        check = -1;
        for(int j=0;j<n;j++){
            if(x[i]-r <= x[j] && x[j]<=x[i]+r && check<x[j]){
                check = x[j];
            }
        }
        if(check != -1){
            que.push(check);
        }
    }

    
    while (que.size()) {
        cout << que.front() << endl;
        que.pop();
    }

}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
