//
// Created by Frank on 2023/12/29.
//
//
// Created by hfwei on 2023/12/20.
//

#include <stdio.h>
#include "ll/ll.h"
#include <assert.h>

#define NUM 12

void SitAroundCircle(Linkedlist *list, int num);

void KillUntilOne(Linkedlist *list);

int GetSurvivor(Linkedlist *list);

int main(void) {
//    printf("I hate the Josephus game!\n");
    Linkedlist list;
    Init(&list); //空的循环链表

    SitAroundCircle(&list, NUM);
    KillUntilOne(&list);
    int survivor = GetSurvivor(&list);
    printf("%d : %d\n", NUM, survivor);
    return 0;
}

void SitAroundCircle(Linkedlist *list, int num) {
    for (int i = 1; i <= num; i++) {
        Append(list, i);// 在尾部追加一个节点
    }
//    Print(list);
}

void KillUntilOne(Linkedlist *list) {
    Node *node = list->head;
    while (!IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}

int GetSurvivor(Linkedlist *list) {
    return GetHeadVal(list);
}
