








class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            //your code goes here

            ListNode* temp = head;
            int cnt0=0, cnt1=0,cnt2=0;

            while(temp){
                if(temp->data == 0){
                    cnt0++;
                }if(temp->data == 1){
                    cnt1++;
                }if(temp->data == 2){
                    cnt2++;
                }
                temp = temp->next;
            }
            ListNode* t = head;
            
            while(cnt0--){
                t->data = 0;
                t = t->next;
                
            }
            while(cnt1--){
                t->data = 1;
                t = t->next;
                
            }
            while(cnt2--){
                t->data = 2;
                t = t->next;
                
            }
            return head;

        }
};