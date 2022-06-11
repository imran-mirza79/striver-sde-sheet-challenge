/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};
    
******************************************************************************/
void dfs(graphNode* node, graphNode* copy, vector<graphNode*>& visited){
    for(auto child: node->neighbours){
        if(visited[child->data] == NULL){
            graphNode* nn = new graphNode(child->data);
            visited[child->data]=nn;
            (copy->neighbours).push_back(nn);
            dfs(child, nn, visited);  
        }else{
            (copy->neighbours).push_back(visited[child->data]);
        }
    }   
    
}
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
    if(!node) return node;
    vector<graphNode*>visited(100005, NULL);
    graphNode* clone = new graphNode(node->data);
    visited[node->data]=clone;
    dfs(node, clone, visited);
    return clone;
}
