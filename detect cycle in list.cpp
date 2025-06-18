class Solution{
    public:
    bool hasCycle(ListNode*head){
        ListNode*slow=head;
    ListNode*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
    }
}
// find exact node of cycle (find cycle)
class Solution{
    public:
    ListNode*detectCycle(ListNode*head){
        ListNode*slow=head;
    ListNode*fast=head;
    bool isCycle=false;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            isCycle= true;
            break;
        }
    }if(!isCycle){
        return NULL;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    }
};
//delete cycle
class Solution{
    public:
    ListNode*detectCycle(ListNode*head){
        ListNode*slow=head;
    ListNode*fast=head;
    bool isCycle=false;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            isCycle= true;
            break;
        }
    }if(!isCycle){
        return NULL;
    }
    slow=head;
    ListNode*prev=NULL;
    while(slow!=fast){
        slow=slow->next;
        prev=fast;
        fast=fast->next;
    }
    prev->next=NULL;//remove cycle
    return slow;
    }
};

