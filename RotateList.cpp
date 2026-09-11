class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* curr=head,* tail=NULL;
        while(curr!=NULL){
            n++;
            
            if(curr->next==NULL){
                tail=curr;
            }
            curr=curr->next;
        }
        
        if(n<=1) return head;
        k=k%n;
        if(k==0) return head;

        ListNode* nhead=NULL,*ntail=NULL;
        int x=n-k;
        curr=head;
        for(int ctr=1;ctr<=x;ctr++){
            if(ctr==x){
                ntail=curr;
            }
            curr=curr->next;
        }
        nhead=curr;
        tail->next=head;
        ntail->next=NULL;
        return nhead;
        }

};
