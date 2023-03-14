#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

int main(){
    struct node *head ,*new_node ,*temp;
    int n;

    head = 0;

    printf("enter no.of items: ");
    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        new_node = (struct node*)malloc(sizeof(struct node));

        printf("enter item: ");
        scanf("%d", &new_node -> data);
        new_node -> next = NULL;

        if(head == 0){
            head = temp = new_node;
        }
        else{
            temp -> next = new_node;
            temp = new_node;
        }
    }
//    printf("head: %d\n", head);
//    printf("temp: %d\n", temp);
//    printf("new node: %d\n", new_node);

    temp = head;

    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }

}
