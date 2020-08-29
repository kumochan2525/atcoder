#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int n,nums[100];

int binary_search(int x){
    int s = 0, e = n-1;
    while(s != e){
        if()
    }
    return false;
    if(n <=1) return n;
    return fact(n-1) + fact(n-2);
}
void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums, nums+n);
    int result = fact(10);
    cout << endl << result;
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
