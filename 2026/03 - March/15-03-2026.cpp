/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }   
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        map<int,vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto [node, lvl] = q.front();
            q.pop();
            mp[lvl].push_back(node->data);
            if(node->left){
                q.push({node->left, lvl-1});
            }
            if(node->right){
                q.push({node->right, lvl+1});
            }
        }
        vector<vector<int>> res;
        for(auto &it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
