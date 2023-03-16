#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void reverse();
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

int main(){
    int choice;

    while(1){
        printf("follow this guide lines,\n");
        printf("1 -> create linked list,\n");
        printf("2 -> display linked list,\n");
        printf("3 -> reverse linked list,\n");
        printf("4 -> insert at begging linked list,\n");
        printf("5 -> insert at end linked list,\n");
        printf("6 -> insert at position linked list,\n");
        printf("7 -> delete at beggining linked list,\n");
        printf("8 -> delete at end linked list,\n");
        printf("9 -> delete at posiition linked list,\n");
        printf("10 -> Exit,\n");
        printf("----------------------------\n");

        printf("what is your choice ???");
        scanf("%d", &choice);
        switch(choice){
            case 1:create();
                break;
            case 2:display();
                break;
            case 3:reverse();
                break;
            case 4:insert_beg();
                break;
            case 5:insert_end();
                break;
            case 6:insert_pos();
                break;
            case 7:delete_beg();
                break;
            case 8:delete_end();
                break;
            case 9:delete_pos();
                break;
            case 10:exit(0);
                break;
            default:printf("invalid choice\n");
                break;
        }
    }

    return 0;
}

void create(){
    struct node *newnode ,*temp;
    int n;

    printf("enter no.of nodes: ");
    scanf("%d", &n);

    do{
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("input value of node: ");
        scanf("%d", &newnode -> data);

        newnode -> next = NULL;

        if(head == NULL){
            head = temp = tail =  newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
            tail = newnode;
        }
        n--;

    }while(n > 0);

}

void display(){
    struct node *temp;

    if(head == NULL){
        printf("empty linked list\n");
    }
    else{
        temp = head;
        while(temp != NULL){
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
    }
    printf("\n");

}

void reverse(){
    struct node *temp ,*prev ,*next;

    temp = next = head;
    prev = NULL;

    if(head == NULL){
        printf("empty linked list\n");
    }
    else if(head -> next == NULL){
        printf("only one node availabel.\n");
    }
    else{
        while(temp != NULL){
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
    }

}

void insert_beg(){
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("input your insert value: ");
    scanf("%d", &newnode -> data);

    newnode -> next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        newnode -> next = head;
        head = newnode;
    }

}

void insert_end(){
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("input your new value of new node: ");
    scanf("%d", &newnode -> data);

    newnode -> next = NULL;

    if((head == NULL) && (tail == NULL)){
        head = tail = newnode;
    }
    else{
        tail -> next = newnode;
        tail = newnode;
    }

}

void delete_beg(){
    struct node *temp;

    if((head == NULL) && (tail == NULL)){
        printf("empty linked list\n");
    }
    else if((head -> next == NULL) && (tail -> next == NULL)){
        temp = head;
        head = tail = NULL;
        free(temp);
    }
    else{
        temp = head;
        head = temp -> next;
        free(temp);
    }
}

void delete_end(){
    struct node *temp;

    if((head == NULL) && (tail == NULL)){
        printf("empty linked list\n");
    }
    else if((head -> next == NULL) && (tail -> next == NULL)){
        temp = head;
        head = tail = NULL;
        free(temp);
    }
    else{
        temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        tail = temp;
        temp = temp -> next;
        free(temp);
        tail -> next = NULL;

    }

}

void insert_pos(){
    struct node *newnode ,*temp ,*forward;
    int pos,choice,count;

    if((head == NULL) && (tail == NULL)){
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("input your new value: ");
        scanf("%d", &newnode -> data);

        newnode -> next = NULL;

        head = tail = newnode;
    }
    else if((head -> next ==  NULL) && (tail -> next == NULL)){
        printf("1 -> insert at begging\n");
        printf("2 -> insert at end\n");
        printf("--------------------------\n");
        printf("what is your choice ???");
        scanf("%d", &choice);

        switch(choice){
            case 1:insert_beg();
                break;
            case 2:insert_end();
                break;
            default:printf("invalid position\n");
                break;
        }
    }
    else{
        printf("1 -> insert at begging\n");
        printf("2 -> insert at end\n");
        printf("3 -> insert at another position\n");
        printf("--------------------------\n");
        printf("what is your choice ???");
        scanf("%d", &choice);

        switch(choice){
            case 1:insert_beg();
                break;
            case 2:insert_end();
                break;
            case 3:
                printf("what is your position ???");
                scanf("%d", &pos);

                temp = head;
                while(temp != NULL){
                    temp = temp -> next;
                    count++;
                }

                if((pos > 1) && (pos < count)){
                    newnode = (struct node *)malloc(sizeof(struct node));

                    printf("input your new value: ");
                    scanf("%d", &newnode -> data);

                    newnode -> next = NULL;

                    temp = forward = head;

                    while(1){
                        pos--;
                        forward = temp -> next;
                        if(pos == 1){
                            temp -> next = newnode;
                            newnode -> next = forward;
                            break;
                        }

                    }
                }
                else{
                    printf("invalid position");
                };
                break;

            default:printf("invalid choice\n");
                break;
        }

    }

}

void delete_pos(){
    struct node *temp ,*forward ,*prev;
    int pos,choice,count;

    if((head == NULL) && (tail == NULL)){
        printf("empty");
    }
    if((head -> next == NULL) && (tail -> next == NULL)){
        delete_beg();
    }
    else{
        printf("1 -> delete at begging\n");
        printf("2 -> delete at end\n");
        printf("3 -> delete at another position\n");
        printf("--------------------------\n");
        printf("what is your choice ???");
        scanf("%d", &choice);

        switch(choice){
            case 1:delete_beg();
                break;
            case 2:delete_end();
                break;
            case 3:
                printf("what is the position: ");
                scanf("%d", &pos);

                temp = head;
                while(temp != NULL){
                    temp = temp -> next;
                    count++;
                }
                 if((pos > 1) && (pos < count)){
                     temp = head;
                     forward = temp -> next;
                     prev = NULL;

                     while(1){
                         pos--;
                         forward = forward -> next;
                         prev = temp;
                         temp = temp -> next;
                         if(pos == 1){
                             prev -> next = forward;
                             temp -> next = NULL;
                             free(temp);
                             break;
                         }
                     }

                 }
                 else{
                     printf("invalid position");
                 };

                break;
            default:printf("invalid position");
                break;
        }

    }

}