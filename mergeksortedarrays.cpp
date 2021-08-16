#include<iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> mergeK(vector<vector<int>> vect){
	vector<int> result;
	priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
	int k = vect.size();
	for(int i = 0;i<k;i++){
		//push value, array_index and element_index in priority queue
		pq.push({vect[i][0], i, 0});
	}

	while(!pq.empty()){
		auto top = pq.top(); pq.pop();
		int element = top[0];
		int array_idx = top[1];
		int element_idx = top[2];

		result.push_back(element);
		if(element_idx+1 < vect[array_idx].size())
			pq.push({vect[array_idx][element_idx+1], array_idx, element_idx+1});
	}
	return result;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<vector<int>> vect = {{10,15,20,30},
								{2,5,8,14,24},
								{0,11,60,90}
							};
	vector<int> result = mergeK(vect);
	for(auto i : result)
		cout<<i<<" ";
	return 0;
}