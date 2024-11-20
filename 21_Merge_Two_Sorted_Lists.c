// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    if (list1 == NULL && list2 == NULL) {
        return list1;
    } else if (list1 == NULL && list2 != NULL) {
        return list2;
    } else if (list1 != NULL && list2 == NULL) {
        return list1;
    }
    
    struct ListNode* header = list1;
    
    while(list2 != NULL){
        struct ListNode* newNode = malloc(sizeof(struct ListNode));
        newNode->val = list2->val;
        newNode->next = NULL;
        
        if(header->val > newNode->val){
            newNode->next = header;
            header = newNode;
        } else {
            struct ListNode* current = header;
            struct ListNode* temp = header;
             
            while(current != NULL && current->val <= newNode->val){
                temp = current;
                current = current->next;
            }
            
            temp->next = newNode;
            newNode->next = current;  
        }
        list2 = list2->next;
    }
    
    return header;
}

int main() {
    printf("Try programiz.pro\n");

    struct ListNode node1, node2, node3;
    node1.val = 1;
    node1.next = &node2;
    
    node2.val = 2;
    node2.next = &node3;
    
    node3.val = 4;
    node3.next = NULL;

    struct ListNode node4, node5, node6;
    node4.val = 1;
    node4.next = &node5;
    
    node5.val = 3;
    node5.next = &node6;
    
    node6.val = 4;
    node6.next = NULL;


    struct ListNode* list = mergeTwoLists(&node1, &node4);

    // Printing list
    struct ListNode* temp = list;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
