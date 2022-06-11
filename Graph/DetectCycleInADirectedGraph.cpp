/*

https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

You are given a directed graph having ‘N’ nodes.
A matrix ‘EDGES’ of size M x 2 is given which
represents the ‘M’ edges such that there
 is an edge directed from node EDGES[i][0] to node EDGES[i][1].
Find whether the graph contains a cycle or not,
 return true if a cycle is present in the given directed graph else return false.
*/

#include <bits/stdc++.h>

using namespace std;

bool checkCycle(int node, unordered_map<int, bool> &visited,
				unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj)
{
	visited[node] = true;
	dfsVisited[node] = true;

	for (auto neighbour : adj[node])
	{
		if (!visited[neighbour])
		{
			bool cycleDetected = checkCycle(neighbour, visited, dfsVisited, adj);

			if (cycleDetected)
				return true;
		}
		else if (dfsVisited[neighbour])
		{
			return true;
		}
	}

	dfsVisited[node] = false;
	return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
	unordered_map<int, list<int>> adj;

	for (int i = 0; i < edges.size(); i++)
	{
		int u = edges[i].first;
		int v = edges[i].second;
		adj[u].push_back(v);
	}

	unordered_map<int, bool> visited;
	unordered_map<int, bool> dfsvisited;

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			bool cycleFound = checkCycle(i, visited, dfsvisited, adj);
			if (cycleFound)
				return true;
		}
	}

	return false;
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<pair<int, int>> edges(m);

		for (int i = 0; i < m; i++)
		{

			int x, y;
			cin >> x >> y;
			edges.push_back({x, y});
		}

		bool ans = detectCycleInDirectedGraph(n, edges);

		cout << ans << "\n";
	}
}