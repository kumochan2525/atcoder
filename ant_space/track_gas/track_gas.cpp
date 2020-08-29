#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

const int N_MAX = 10000;

int n,l,p;
int a[N_MAX];
int b[N_MAX];
priority_queue<int> pque;

void solve(){
    cin >> n >> l >> p;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        cin >> b[i];
    }
    int now = 0;
    int next = 0;
    int gas_last = p;
    int stand_counter = 0;
    // gas切れを解決できない ... break
    // 現在地が距離lを超えた ... end
    while(now < l){
        // run out of gas : next
        next = now + gas_last;
        for(int i=0;i<n;i++){
            if(now<a[i] && a[i]<=next){
                pque.push(b[i]);
            }
        }
        cout << gas_last << "_" << now << "..." << next << endl;
        if(next>=l){
            cout << "you reached!! " << stand_counter;
            return;
        }
        // no gasoline stands
        if(pque.empty()){
            cout << "you cant reach...";
            return;
        }
        // cant reach
        gas_last = pque.top();
        pque.pop();
        // if(gas_last<0){
        //     cout << "you cant reach...";
        //     return;
        // }
        cout << gas_last << "_" << now << "..." << next << endl;
        stand_counter ++;

        now = next;
    }
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
