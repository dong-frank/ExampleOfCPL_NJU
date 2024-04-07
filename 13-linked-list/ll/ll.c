//
// Created by Frank on 2023/12/29.
//
#include "ll.h"
#include <stdlib.h>
#include <stdio.h>
// TODO: functions on linked list (implementation)

void Init(Linkedlist *list) {
    list->head = NULL;
    list->tail = NULL;
}

void Free(Linkedlist *list) {
    while (!IsEmpty(list)) {
        Delete(list, list->head);
    }
}

bool IsEmpty(Linkedlist *list) {
    if (list->head == NULL) {
        return true;
    }
    return false;
}

void Append(Linkedlist *list, int val) {
    Node *new_node = malloc(sizeof *new_node);
    if (new_node == NULL) {//空间没有申请成功
        return;
    }
    new_node->val = val;//值传入新节点
    if (IsEmpty(list)) {
        list->head = new_node;
    } else {
        list->tail->next = new_node; //原来的尾节点的下一条指针，指向new_node
    }
    //调整指针的指向
    list->tail = new_node; //原来的尾指针,指向new_node节点
    list->tail->next = list->head; //new_node的下一条指针,指向头节点
}

void Print(Linkedlist *list) {
    Node *node = list->head;
    if (list->head == NULL) {
        return;
    }
    do {
        printf("%d ", node->val);
        node = node->next;
    } while (node != list->head);
}

bool IsSingleton(Linkedlist *list) {
    if (list->head == list->tail && !IsEmpty(list)) {
        return true;
    } else
        return false;
}

void Delete(Linkedlist *list, Node *pre_node) {
    if (IsSingleton(list)) { //只有一个节点
        Init(list);
        free(list->head);
        return;
    }
    if (IsEmpty(list)) { //空链表
        return;
    }
    Node *cur_node = pre_node->next;
    Node *next_node = cur_node->next;
    pre_node->next = next_node;

    if (cur_node == list->head) { //删去的是头指针的情况
        list->head = next_node;
    }
    if (cur_node == list->tail) { //删去的是尾指针的情况
        list->tail = pre_node;
    }
    free(cur_node); //删去的节点记得free
}

int GetHeadVal(Linkedlist *list) {
    if (IsEmpty(list)) {
        return -1;
    }

    return list->head->val;
}
