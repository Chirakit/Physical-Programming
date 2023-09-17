#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void insertNode(struct node **head, int position, int data) {
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->value = data;
    new_node->next = NULL;

    if(position == 0) {
        new_node->next = *head;
        *head = new_node;
    }else {
        struct node *current = *head;
        int count = 0;

        while (current != NULL && count < position - 1) {
            current = current->next;
            count++;
        }
        if(current != NULL) {
            new_node->next = current->next;
            current->next = new_node;
        }else {
            free(new_node);
        }
    }
}

int main() {
    struct node *head = NULL;
    int num_inputs;
    scanf("%d", &num_inputs);
    
    for (int i = 0; i < num_inputs; i++) {
        int data;
        scanf("%d", &data);
        struct node* new_node = (struct node *) malloc(sizeof(struct node));
        new_node->value = data;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
        }else {
            struct node *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new_node;
        }
    }
    struct node *current = head;
    int position, data;
    scanf("%d", &position);
    scanf("%d", &data);
    insertNode(&head, position, data);
    current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    current = head;
    while (current != NULL) {
        struct node* temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}
