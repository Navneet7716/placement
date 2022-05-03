import networkx as nx

g = nx.Graph()

g.add_edge('a', 'b', weight = 1)

g.add_edge('b', 'c', weight = 2)

g.add_edge('c', 'd', weight = 3)

g.add_edge('b', 'd', weight = 3)

print(nx.shortest_path(g, 'c', 'a'))

print(list(nx.dfs_edges(g, 'a')))

