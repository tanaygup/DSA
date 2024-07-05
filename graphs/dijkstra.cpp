#include <bits/stdc++.h> 
#include <unordered_map>
#include <map>
#include <list>
#include <set>
/*
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // adj list
    unordered_map <int, list<pair<int,int>>> adj;

    for(int i=0;i<edges;i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    // initializing every distance to intmax
    vector<int> dist(vertices);
    for (int i = 0; i < vertices;i++){
        dist[i]=INT_MAX;
    }

    // creating set(can use priority queue) to store (dist,top node)

    set <pair<int,int> > st;

// initially 0 is at 0 distance from itself
    dist[source]=0;
    st.insert(make_pair(0,source));

    while(!st.empty()){
        // print top record (automatically the one with min distance)
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

// deleting top record
        st.erase(st.begin());
        // traversing neighbours
        for(auto neighbour: adj[topNode]){
            if(nodeDistance + neighbour.second < dist[neighbour.first]){
            //   finding old record of distance and deleting
               auto record = st.find(make_pair(dist[neighbour.first],neighbour.first));
               if(record!=st.end()){
                  st.erase(record);
                }
                // updating the distance
               dist[neighbour.first]= nodeDistance + neighbour.second;

            //    inserting new record
            st.insert(make_pair(dist[neighbour.first],neighbour.first));

            }
        }
    }
    return dist;
}
*/