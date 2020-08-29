for(int i=0;i<n;i++){
    cin >> x[i];
}

sort(x, x+n);

[Queue]
#include <queue>
queue<int> que;
while (que.size()) {
    cout << que.front() << endl;
    que.pop();
}