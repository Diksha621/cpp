#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
	int arr[9] = {10,20,30,20,10,40,30,20,50};
	std::vector<int> vect;
	int length = sizeof(arr)/sizeof(arr[0]);
	std::unordered_map<int,int> um;

	for(int i = 0;i<length;i++){
		if(um.find(arr[i]) == um.end()){
			vect.push_back(arr[i]);
		}
		um[arr[i]]++;
	}

	for(int i = 0;i<vect.size();i++){
		std::cout<<vect[i]<<" ";
	}

	return 0;
}