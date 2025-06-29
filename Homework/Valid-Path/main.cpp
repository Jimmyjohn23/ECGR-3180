#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        if(source == destination) return true; 

        for(int i = 0; i < edges.size(); i++){
            if(edges[i][0] == source && edges[i][1] == destination) || (edges[i][1] == source && edges[i][0] == destination){
                return true;
            }
        }
        return false;
    }

};

int main(){
 
    
    return 0;
}
