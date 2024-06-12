#include<stdio.h>

typedef struct node_t{
    float data;
    struct _node_t* next; 
} node_t;

node_t createNode(float item){
    node_t* rE = (node_t*)malloc(sizeof(node_t));
    rE->data = item;
    rE->next = NULL;
    return rE;
}
void doTraversal(node_t* rE){
    if(rE == NULL){
        return
    }
   printf("%.2f")
    
}




int main (){
    node_t* head = createNode(20.0f);
    head->next = createNode(15.0f);
    head->next->next = createNode(30.0f);
    head->next->next->next = createNode(40.0f);
    head->next->next->next->next = createNode(25.0f);
    doTraversal(head);
}





'''

void doTraversal(node_t* head){
    for (node_t* rE = head; rE != NULL; rE->next){
    while(rE != head){
        printf("%.2f",rE->data);
        rE = rE->next;
        }
    }
}

'''