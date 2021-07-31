class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> out;
      queue<Node *>q;
      q.push(node);
      while(q.empty()==false)
      {
          Node *n = q.front();
          q.pop();
          out.push_back(n->data);
          if(n->left)
          {
              q.push(n->left);
          }
          if(n->right)
          {
              q.push(n->right);
          }
      }
      return out;
    }
};