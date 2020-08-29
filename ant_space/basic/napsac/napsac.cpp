#include <iostream>
#include <fstream>
using namespace std;

int n,w[1000],v[1000],r;
int dp[1000][1000];

// i: pick after i, j:max weigh
int rec(int i, int j){
    int res = 0;
    if(dp[i][j]!=-1){
        cout << i << "/" << j << "/" << dp[i][j]<< endl;
        return dp[i][j];
    }
    cout << i << "/" << j << endl;
    if(i == n)res = 0;
    else if(j < w[i])res = rec(i+1,j);
    else {
        res = max(rec(i+1,j), rec(i+1,j-w[i])+v[i]);
    }
    return dp[i][j]=res;
}

void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> r;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         dp[i][j] = -1;
    //     }   
    // }
    memset(dp,-1,sizeof(dp));

    cout << rec(0,r) << endl;


}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
