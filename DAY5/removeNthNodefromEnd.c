/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getsize(struct ListNode* head){
    int size = 0;
    struct ListNode* rE = head;
    while(rE != NULL){
        size++;
        rE = rE->next;
    }


}
struct ListNode* findNodeAtPos(struct ListNode* head,int pos){
    int size = 0;

    ListNode* rE = head;
    while(rE != NULL){
        size++;
        if(size == pos){
            break;
        }
        rE = rE->next;
    
    }
    return rE;
}
struct ListNode* findNodeAtPos(struct ListNode* head, int N){
    while(rE != NULL){
        
    }
    return rE;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int size = getsize(head);
    int fN = size-n+1;
    if ( fN <= 0 ){
        return head;
    }
    if (fN == 1 ){
        struct ListNode* curr = head;
        head = curr->next;
        curr->next = NULL;
        free(curr);
    }else{
    
    struct ListNode* prev = findNodeAtN( fN - 1 ); 
    struct ListNode* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    free(curr);
    }
return head;
}





