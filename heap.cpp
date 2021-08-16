#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//priority queue

class compare
{
public:
	bool operator()(int a, int b){
		return a>b;
	}
	
};
int main(){
	int arr[] = {10,34,2,78,16,1,9};
	priority_queue<int, vector<int>, compare> pq;

	for(int i: arr)
		pq.push(i);

	while(!pq.empty()){
		cout<<pq.top()<<"\n";
		pq.pop();
	}
	return 0;
}

// pair 

// struct interval {
// 	int start, end;
// };
// bool comparator(interval a, interval b){
// 	return a.start<b.start;
// }
// int main(){
// 	interval arr[] = {{ 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 }};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	sort(arr, arr+n, comparator);

// 	for (int i = 0; i < n; i++)
//         cout << "[" << arr[i].start << "," << arr[i].end
//              << "] ";
// 	return 0;
// }

// array 

// bool comparator(int a, int b){
// 	return a<b;
// }
// int main(){
// 	int arr[] = {3,56,12,78,1};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	sort(arr, arr+n, greater<int>());

// 	for (int i = 0; i < n; i++)
//         cout << arr[i]<<" ";
// 	return 0;
// }