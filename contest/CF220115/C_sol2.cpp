#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while (t--){
        int n;//number of nodes in the tree/line graph
        cin>>n;
 
        vector<vector<int>> adj(n + 1);
 
        //adjacency list
        
        map<pair<int,int>,int>pos;
        
        //stores the position of each edge in the input
 
        vector<int> ans(n),deg(n + 1,0);
 
        vector<bool> vis(n + 1,false);
        
        for (int i = 1;i<=n - 1;i++){//ith edge
            int u,v;
            cin>>u>>v;
 
            adj[u].push_back(v);
            adj[v].push_back(u);
 
            deg[u]++;
            deg[v]++;
 
            pos[{u,v}] = i;
            pos[{v,u}] = i;
        }
 
        bool is = true;//check whether deg[i] <= 2 for all i
        int s = -1,e = -1;//start and end represent
        //the beginning and ending of the line/chain
 
        for (int i = 1;i<=n;i++){
            if (deg[i] >= 3){
                is = false;
                break;
            }
            if (deg[i] == 1){//i is EITHER the start or the end
                if (s == -1)
                    s = i;
                else 
                    e = i;
            }
        }
 
        if (!is){
            cout<<-1<<endl;
            continue;
        }
        
        int currentNode = s;
        int weight = 2;//current Edge Weight
        
        while (currentNode != e){
            int nextNode = adj[currentNode][0];
            
            if (vis[nextNode])//=> adj[currentNode][1] 
                nextNode = adj[currentNode][1];
 
            ans[pos[{currentNode,nextNode}]] = weight;
            //stores the weight of the edge number in the input
            //= the current Weight
            
            if (weight == 2)
                weight = 3;
            else
                weight = 2;
            
            vis[currentNode] = 1;
            currentNode = nextNode;
        }
        
        for (int i = 1;i<=n - 1;i++)
            cout<<ans[i]<<" ";
        
        cout<<endl;
    }
    return 0;
}