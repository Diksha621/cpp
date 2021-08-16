// #include<iostream>
// #include<set>
// #include<list>
// #include<vector>
// #include<utility>

// using namespace std;

// class Graph{
// 	int V;
// 	list<pair<int,int>> *l;
// public:
// 	Graph(int v){
// 		V=v;
// 		l = new list<pair<int, int>> [V];
// 	}
// 	void addEdge(int u, int v, int wt, bool undir = true){
// 		l[u].push_back({wt,v});
// 		if(undir)
// 			l[v].push_back({wt,u});
// 	}
// 	int dijkstra(int src, int dest){
		
// 		vector<int> dist(V,INT_MAX);
// 		set<pair<int,int>> s;
// 		dist[src] = 0;
// 		s.insert({0,src});

// 		while(!s.empty()){
// 			auto it = s.begin();
// 			int node = it->second;
// 			int distance = it->first;
// 			s.erase(it);	
// 			for(auto nbr : l[node]){

// 				if(nbr.first+distance < dist[nbr.second]){
// 					auto f = s.find({dist[nbr.second],nbr.second});
// 					if(f != s.end())
// 						s.erase(f);
// 					dist[nbr.second] = nbr.first+distance;
// 					s.insert({dist[nbr.second],nbr.second});
// 				}
// 			}
// 		}
// 		return dist[dest];
// 		// return 1;
// 	}
// };
// int main(){
// 	Graph g(5);
	
// 	g.addEdge(0,1,1);
// 	g.addEdge(1,2,2);
// 	g.addEdge(0,2,4);
// 	g.addEdge(0,3,7);
// 	g.addEdge(3,2,2);
// 	g.addEdge(3,4,3);
// 	// g.dijkstra(0,4);
// 	cout<<g.dijkstra(0,4)<<" ";
// }