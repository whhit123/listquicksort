struct Node   
{  
    int key;  
    Node* next;  
    Node(int nKey, Node* pNext)  
        : key(nKey)  
        , next(pNext)  
    {}  
};  
  
  
Node* GetPartion(Node* pBegin, Node* pEnd)  
{  
    int key = pBegin->key;  
    Node* p = pBegin;  
    Node* q = p->next;  
  
    while(q != pEnd)  
    {  
        if(q->key < key)  
        {  
            p = p->next;  
            swap(p->key,q->key);  
        }  
  
        q = q->next;  
    }  
    swap(p->key,pBegin->key);  
    return p;  
}  
  
void QuickSort(Node* pBeign, Node* pEnd)  
{  
    if(pBeign != pEnd)  
    {  
        Node* partion = GetPartion(pBeign,pEnd);  
        QuickSort(pBeign,partion);  
        QuickSort(partion->next,pEnd);  
    }  
}  

