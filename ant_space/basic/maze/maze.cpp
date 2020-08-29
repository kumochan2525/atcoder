#include <iostream>
#include <fstream>
using namespace std;

char maze[10][10];

bool can_root(int x, int y){
    int max_x = 10;
    int max_y = 10;
    return 0 <= x && x < max_x && 0 <= y && y < max_y && maze[x][y]!='#';
    // return 0 <= x < max_x && 0 <= y < max_y;
}
int answer = 0;

bool move(int x, int y, int counter, int ox, int oy){
    // if (counter > 100 || )
    if (counter > 100) return false;
    if (maze[x][y] == 'G'){
        answer = counter;
        return true;
    }

    int last_root_counter = 0;
    for(int dx=-1;dx<=1;dx++){
        for(int dy=-1;dy<=1;dy++){
            if(abs(dx-dy)==1 && can_root(x+dx, y+dy) && !(ox==x+dx && oy==y+dy) ){
                move(x+dx, y+dy, counter+1, x, y);
            }
        }
    }
    return false;
}

void solve(){
    int start_x, start_y;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cin >> maze[i][j];
            if(maze[i][j] == 'S'){
                start_x = i;
                start_y = j;
            }
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            // cout << maze[i][j] << "/";
        }
    }
    move(start_x,start_y,0,-1,-1);
    cout << answer << endl;
}



// Don't overwrite ↓　exec command : goc test.cpp
int main(int argc, char* argv[]){
    string file_name = argv[1];
    std::ifstream in(file_name+"_input");
    std::cin.rdbuf(in.rdbuf());
    
    solve();
} 
