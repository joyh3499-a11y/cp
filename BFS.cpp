#include <bits/stdc++.h>
using namespace std;

void bfs(int st, vector<int> adj[], int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[st] = true;
    q.push(st);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n = 7;
    vector<int> adj[n];

    adj[0] = {1, 2, 3};
    adj[1] = {0,4};
    adj[2] = {0,5};
    adj[3] = {0,6};
    adj[4] = {1,5};
    adj[5] = {2,4};
    adj[6] = {3};



    bfs(0, adj, n);
}
