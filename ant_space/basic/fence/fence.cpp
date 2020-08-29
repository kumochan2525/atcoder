#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


void solve(){
    int n,l[3];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int a = 100;
    int b = 105;
    swap(a,b);
    cout << a << " " << b <<endl;
    sort(l,l+n);
    int counter = 0;
    for(int i=0;i<n-1;i++){
        if(i==0) {
            counter = l[0]+l[1];
            cout << counter << endl;
            continue;
        };
        counter = counter*2 + l[i+1];
        cout << counter << endl;
    }
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
