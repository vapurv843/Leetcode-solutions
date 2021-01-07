bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL and r2==NULL) return true;
    if(r1==NULL and r2!=NULL) return false;
    if(r1!=NULL and r2==NULL) return false;
    if(r1->data !=r2->data) return false;
    bool a = isIdentical(r1->right,r2->right);
    bool b = isIdentical(r2->left,r1->left);
    return a&b;
}