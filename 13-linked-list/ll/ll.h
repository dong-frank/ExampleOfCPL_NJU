//
// Created by Frank on 2023/12/29.
//
// header guard
#ifndef CPL_LL_H
#define CPL_LL_H

#include <stdbool.h>
// TODO: adding code here

// (1) define data type: circular singly linked list
typedef struct node {
    int val;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
    Node *tail;
} Linkedlist;


// (2) functions on linked list (declarations)
void Init(Linkedlist *list);

void Free(Linkedlist *list);

void Append(Linkedlist *list, int val);

bool IsEmpty(Linkedlist *list);

void Print(Linkedlist *list);

bool IsSingleton(Linkedlist *list);

void Delete(Linkedlist *list, Node *pre_node);

int GetHeadVal(Linkedlist *list);

#endif //CPL_LL_H
