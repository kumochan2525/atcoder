#include <iostream>
#include <fstream>
using namespace std;


int MAX_N = 100;
int heap[100], sz = 0;

void push(int x) {
    int i = sz++;

    while(i>0){
        int p = (i-1)/2;
        if(heap[p] <= x) break;
        heap[i] = heap[p];
        i = p;
    }

    heap[i] = x;
}
void solve(){
    int random_arr[] = {1,10,4,7,2,4,2,1,5};
    for(int i=0;i<9;i++){
        push(random_arr[i]);
    }
    // push(5);
    // push(4);
    // push(1);
    // push(4);
    // push(9);
    // push(1);
    // push(12);
    // push(2);
    // push(6);
    for(int i=0;i<sz;i++){
        cout << heap[i] << endl;
    }
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
