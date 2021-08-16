// #include<list>
// #include<queue>
// #include<unordered_map>
// #include<utility>
// using namespace std;


// int min_dice_throws(int n,vector<pair<int,int> > snakes, vector<pair<int,int> > ladders){
//     unordered_map<int,int> s;
//     unordered_map<int,int> l;
//     for(auto i: snakes){
//         s[i.first] = (i.second);
//     }
//     for(auto i: ladders){
//         l[i.first] = (i.second);
//     }
//     bool *visited = new bool[n]{0};
//     queue<pair<int,int>> q;
//     q.push({1,0});
//     visited[1] = 1;
//     pair<int,int> qe;
//     int first, dist;
//     while(!q.empty()){
//         qe = q.front();
//         int v = qe.first;
//         int d = qe.second;
//         if(v==n)
//             break;
//         q.pop();
//         for(int j = v+1;j<=(v+6) && j<=n;j++){
//             if(!visited[j]){
//                 dist = d+1;
//                 visited[j] = 1;
//             }
//             if(l.find(j) != l.end())
//                 first = l[j];
//             else if(s.find(j) != s.end())
//                 first = s[j];
//             else
//                 first = j;
//             q.push({first,dist});
//         }
//     }
//     return qe.second;
    
    
// }
