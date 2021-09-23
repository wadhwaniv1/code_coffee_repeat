class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	stack<Node*> ms,cs;
    	bool dir=true;
    	vector<int> v;

    	ms.push(root);
    	while(!ms.empty()){
    	    Node* temp = ms.top();
    	    ms.pop();

    	    if(temp){
    	        v.push_back(temp->data);

    	        if(dir){
                    if(temp->left)
                        cs.push(temp->left);
                    if(temp->right)
                        cs.push(temp->right);
                }
                else{
                    if (temp->right)
                        cs.push(temp->right);
                    if (temp->left)
                        cs.push(temp->left);
                }
    	    }
    	    if(ms.empty()){
    	        dir = !dir;
    	        swap(ms,cs);
    	    }
    	}

    	return v;
    }
};
