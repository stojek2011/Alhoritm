/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    int n,n1,n2,n3;
    ListNode* l3= new ListNode();
    ListNode* l5=l3;  
    n1 = 0;
       
	while((l1!=nullptr)||(l2!=nullptr))
	{   
		if(l1==nullptr)
           n2=0;
        else
            n2=l1->val;
        if(l2==nullptr)
           n3=0;
        else
            n3=l2->val;
        n=n2+n3+n1;
		n1 = 0;
		if(n>9)
		{
			n = n - 10;
			n1 = 1;
		}
        l3->val=n;
        
        if(l1!=nullptr)
        l1=l1->next;
        if(l2!=nullptr)
        l2=l2->next;
	    if((l1!=nullptr)||(l2!=nullptr))
        {
            
            l3->next=new ListNode(n1);
            l3=l3->next;
        }
       
	}
       if(n1==1)
       {  
          l3->next = new ListNode(n1);
           
       }
        return(l5);
    }
}; 