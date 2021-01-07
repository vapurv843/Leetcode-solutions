int height(Node *root)
   {
       if(root==NULL) return 0;
       int l = height(root->left);
       int r = height(root->right);
       return max(l,r)+1;
   }
   void makearr(Node *root,vector<int> &v)
   {
       if(root==NULL) return ;
       makearr(root->left,v);
       v.push_back(root->data);
       makearr(root->right,v);
   }
bool isIdentical(Node *r1, Node *r2)
{
    if(height(r1)!=height(r2)) return false;
    vector<int> vr1;
    vector<int> vr2;
    makearr(r1,vr1);
    makearr(r2,vr2);
    //sort(vr1.begin(),vr1.end());
    //sort(vr2.begin(),vr2.end());
    for(int i = 0;i<vr1.size();i++)
    {
        if(vr1[i]!=vr2[i]) return false;
    }
    return true;
    
}