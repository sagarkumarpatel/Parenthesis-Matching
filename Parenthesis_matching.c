#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;

};
struct stack* createStack(int size){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    if(s==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    s->top=-1;
    s->size=size;
    s->arr=(char*)malloc(size * sizeof(char));
    return s;
}
int isFull(struct stack* s){
    if(s->top==s->size-1){
        printf("Stack Overflow\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack* s){
    if(s->top==-1){
        printf("Stack Underflow!\n");
        return 1;
    }
    else{
        return 0;
    }
}



int main(){


    return 0;
}