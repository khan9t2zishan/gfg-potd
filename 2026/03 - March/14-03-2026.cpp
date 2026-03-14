/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr; 
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        if (!root) return {};
        map<int, Node*> mp;
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            Node* node = it.first;
            int hd = it.second;

            if (!mp.count(hd)) mp[hd] = node;

            if (node->left) q.push({node->left, hd-1});

            if (node->right) q.push({node->right, hd+1});
        }

        vector<int> ans;
        for (auto &it : mp) ans.push_back(it.second->data);
        return ans;
    }
};
