#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[100];
bool visited[100];

void DFS(int node)
{
    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];

        if (!visited[next])
            DFS(next);
    }
}

void BFS(int start)
{
    queue<int> q;
    bool seen[100] = {false};

    q.push(start);
    seen[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < graph[node].size(); i++)
        {
            int next = graph[node][i];

            if (!seen[next])
            {
                q.push(next);
                seen[next] = true;
            }
        }
    }
}

int main()
{
    int n, e, u, v, start;

    cout << "Enter number of buildings and roads: ";
    cin >> n >> e;

    cout << "Enter roads (building1 building2):\n";
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "Enter starting building: ";
    cin >> start;

    cout << "DFS Traversal: ";
    for (int i = 0; i < 100; i++)
        visited[i] = false;

    DFS(start);

    cout << "\nBFS Traversal: ";
    BFS(start);

    return 0;
}
