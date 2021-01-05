void deleteNode(Node *node)
{
   if(node->next !=NULL)
   {
       node->data = node->next->data;
       node->next = node->next->next;
   }
   node=NULL;
}