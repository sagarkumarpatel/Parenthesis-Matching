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
int main(){


    return 0;
}