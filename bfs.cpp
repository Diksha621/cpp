#include<iostream>
#include<list>
#include<queue>
using namespace std;


class Graph{
	int V;
	list<int> *l;
public:
	Graph(int v){
		V=v;
		l = new list<int>[V];
	}
	void addEdge(int i, int j, bool undir=true){
		l[i].push_back(j);
		if(undir){
			l[j].push_back(i);
		}
	}
	void printGraph(){
		for(int i = 0;i<V;i++){
			cout<<i<<"--->";
			for(auto nbr: l[i]){
				cout<<nbr<<" ";
			}
			cout<<endl;
		}
	}
	void bfs(int source){
		queue<int> q;
		bool *visited = new bool[V]{0};
		q.push(source);
		visited[source] = 1;
		while(!q.empty()){
			int f = q.front();
			cout<<f<<endl;
			q.pop();
			for(auto nbr: l[f]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
	}


};
int main(){
	Graph g(6);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);
	// g.printGraph();
	g.bfs(1);
	g.printGraph();

	return 0;
}