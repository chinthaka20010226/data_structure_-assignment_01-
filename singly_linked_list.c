#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void deleteAtAfter(struct Node **head_ref){
    struct Node *prev ,*now ,*next;
    int pos,len = 0;

    prev = NULL;
    now = *head_ref;
    next = now -> next;

    while(now != NULL){
        now = now -> next;
        len++;
    }

    now = *head_ref;

    printf("enter the position which after delete: ");
    scanf("%d", &pos);

    if((pos > 0) && (pos < len)){
        while(pos > 0){
            prev = now;
            now = next;
            next = next -> next;
            pos--;
        }
        prev -> next = next;
        now -> next = NULL;
        free(now);
    }
    else{
        printf("invalid position\n");
    }


}

void deleteAtFornt(struct Node **head_ref){
    struct Node *temp ,*next;

    temp = next = *head_ref;

    if(*head_ref == NULL){
        printf("empty\n");
        return;
    }
    if(temp -> next == NULL){
        free(temp);
        return;
    }

    next = next -> next;
    temp -> next = NULL;
    *head_ref = next;
    free(temp);

}

void deleteAtEnd(struct Node **head_ref){
    struct Node *last ,*temp;

    last = *head_ref;
    temp = NULL;

    if(*head_ref == NULL){
        printf("empty\n");
        return;
    }

    while(last -> next != NULL){
        temp = last;
        last = last -> next;
    }
    temp -> next = NULL;
    free(last);

}

void insertAtAfter(struct Node **head_ref,int new_value){
    struct Node *newnode ,*temp ,*next;
    int len = 0,pos;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode -> data = new_value;
    newnode -> next = NULL;

    temp = *head_ref;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }

    if(*head_ref == NULL){
        *head_ref = newnode;
        return;
    }

    printf("enter the position which after the insert: ");
    scanf("%d", &pos);

    next = *head_ref;
    temp = NULL;
    if((pos > 0) && (pos < len)){
        while(pos > 0){
            temp = next;
            next = next -> next;
            pos--;
        }
        temp -> next = newnode;
        newnode -> next = next;
    }
    else{
        printf("invalid position");
    }



}

void insertAtFornt(struct Node **head_ref,int new_value){
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode -> data = new_value;
    newnode -> next = NULL;

    if(*head_ref == NULL){
        *head_ref = newnode;
        return;
    }
    newnode -> next = *head_ref;
    *head_ref = newnode;


}

void insertAtEnd(struct Node **head_ref,int new_value){
    struct Node *newnode ,*tail;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode -> data = new_value;
    newnode -> next = NULL;

    if(*head_ref == NULL){
        *head_ref = newnode;
        return;
    }
    tail = *head_ref;
    while(tail -> next != NULL){
        tail = tail -> next;
    }

    tail -> next = newnode;
    
    
}

void printLinkedList(struct Node *temp){
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(){
    struct Node *head = NULL;
    int n,value;

    printf("enter no.of nodes: ");
    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        printf("input value of node: ");
        scanf("%d", &value);

        insertAtEnd(&head,value);

    }
    printLinkedList(head);

    printf("enter value of at front: ");
    scanf("%d", &value);

    insertAtFornt(&head,value);

    printLinkedList(head);

    printf("enter value of at end: ");
    scanf("%d", &value);

    insertAtEnd(&head,value);

    printLinkedList(head);

    printf("enter value of at after position: ");
    scanf("%d", &value);

    insertAtAfter(&head,value);

    printLinkedList(head);

    deleteAtEnd(&head);

    printLinkedList(head);

    deleteAtFornt(&head);

    printLinkedList(head);

    deleteAtAfter(&head);

    printLinkedList(head);

    return 0;

}