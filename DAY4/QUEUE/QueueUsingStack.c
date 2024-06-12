typedef struct {

    int top_index;
    int items[1000];
} MyStack;


bool myStackEmpty(MyStack* obj);
MyStack* myStackCreate() {

    MyStack* rstack = (MyStack*)malloc(sizeof(MyStack));
    rstack->top_index = -1;
    return rstack;
}

void myStackPush(MyStack* obj, int x) {

    obj->top_index++;
    obj->items[obj->top_index] = x;
}

int myStackPop(MyStack* obj) {

    if(myStackEmpty(obj)){
        return -1;
    }
    int peek = obj->items[obj->top_index];
    obj->top_index--;
    return peek;
}

int myStackTop(MyStack* obj) {

int myStackPeek(MyStack* obj) {
    if(myStackEmpty(obj)){
        return -1;
    }
    int peek = obj->items[obj->top_index];
    return peek;
}

bool myStackEmpty(MyStack* obj) {

    return obj->top_index == -1;
}

void myStackFree(MyStack* obj) {

    free(obj);
    obj = NULL;
}

typedef struct {
 int myQueuePop(MyQueue* obj) {
    if(myStackEmpty(obj->rstack2)){
        while(!myStackEmpty(obj->rstack1)){
            myStackPush(obj->rstack2,
                muStackPop(obj->rstack1));
                myStackPop(obj->rstack1));
        }
    }
   int myQueuePeek(MyQueue* obj) {
    if(myStackEmpty(obj->rstack2)){
        while(!myStackEmpty(obj->rstack1)){
            myStackPush(obj->rstack2,
                muStackPop(obj->rstack1));
                myStackPop(obj->rstack1));
        }
    }
 void myQueueFree(MyQueue* obj) {
    obj = NULL;
}