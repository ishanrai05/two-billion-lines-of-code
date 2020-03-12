/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
void dfs(UndirectedGraphNode *node, unordered_map<UndirectedGraphNode*,UndirectedGraphNode*>& clone){
    UndirectedGraphNode *duplicate=new UndirectedGraphNode(node->label);
    clone[node]=duplicate;
    for (auto& x:node->neighbors){
        if (clone.find(x)==clone.end()) dfs(x,clone);
        (duplicate->neighbours)).push_back(clone[x]);
    }
}
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    unordered_map<UndirectedGraphNode*,UndirectedGraphNode*> clone;
    dfs(node,clone);
    return clone[node];
}
