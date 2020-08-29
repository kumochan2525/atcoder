#include <iostream>
#include <fstream>
using namespace std;

int n,a[100],k;

bool dfs(int i, int sum){
    // cout << i << " " << sum << endl;
    if(i == n-1){
        cout << sum << endl;
        return sum == k;
    } 
    if(dfs(i+1, sum)) return true;
    if(dfs(i+1, sum+a[i+1])) return true;
    return false;
}


void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i]; 
    }
    cin >> k;

    if(dfs(-1,0)) cout << "congrat!!!" << endl;
    else  cout << "sad!!!" << endl;
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
