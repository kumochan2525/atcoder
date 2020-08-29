#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int MAX_N = 100000;
pair<int, int> itv[MAX_N];
typedef pair<int, int> P;
void solve(){
    int n;
    cin >> n;
    int s[n], t[n];
    for(int j=0;j<n;j++){
        cin >> s[j];
    }
    for(int j=0;j<n;j++){
        cin >> t[j];
    }
    
    for(int j=0;j<n;j++){
        itv[j] = P(t[j],s[j]);
    }

    sort(itv, itv+n);

    for(int i=0;i<n;i++){
        cout << itv[i].first << " " << itv[i].second << endl;
    }
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
