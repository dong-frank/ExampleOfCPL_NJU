//
// Created by Frank on 2024/3/10.
//
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;

typedef struct Node{
    DataType data;
    struct Node *next;
}Node;

bool CreateList(DataType *addr , unsigned int n, Node** head){
    Node *node =*head;
    for(int i=0;i<n;i++){
        node->data=addr[i];
        node=node->next;
    }
    return true;
}