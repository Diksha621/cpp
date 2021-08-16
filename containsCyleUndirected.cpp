// #include<iostream>
// #include<list>
// #include<vector>

// using namespace std;
 
// class Graph{
// 	int V;
// 	list<int> *l;
// public:
// 	Graph(int v){
// 		V = v;
// 		l = new list<int> [V];
// 	}
// 	void addEdge(int i, int j){
// 		l[i].push_back(j);
// 		l[j].push_back(i);
// 	}
// 	bool dfs(int source, std::vector<bool> &visited, int parent){
// 		visited[source] = true;
// 		for(auto nbr: l[source]){
// 			if(!visited[nbr]){
// 				bool cylceFound = dfs(nbr, visited, source);
// 				if(cylceFound)
// 					return true;
// 			}else if(nbr != parent){
// 				return true;
// 			}
// 		}
// 		return false;
// 	}
// 	bool containsCycle(){
// 		vector<bool> visited(V,false);
// 		return dfs(0, visited, -1);
// 	}

// };
// // bool contains_cycle(int V,vector<pair<int,int> > edges){
// // 	Graph g(V);
// // 	for(auto value : edges){
// // 		g.addEdge(value.first, value.second);
// // 	}
// // 	return g.containsCycle();
// // }
// int main(){
// 	Graph g2(3);
//     g2.addEdge(0, 1);
//     g2.addEdge(1, 2);
//     cout<<g2.containsCycle();
// 	return 0;
// }