#include <iostream>
#include <fstream>
using namespace std;


void solve(){
    int V[6] = {500,100,50,10,5,1};
    int C[6];
    int price;
    for (int i=0;i<6;i++){
        cin >> C[i];
    }
    cin >> price;
    for (int i=0;i<6;i++){
        int t = min(price/V[i], C[i]);
        price -= V[i] * t;
        cout << V[i] << ":" << t << endl;
    }
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
