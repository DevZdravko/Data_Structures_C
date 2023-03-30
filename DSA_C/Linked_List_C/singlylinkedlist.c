#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list

struct Node {
    int data;
    struct Node* next;
};


// Initialize an empty linked list

struct Node* head = NULL;

// Function to insert a new node at the beginning of the linked list

void insert(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

// Function to delete a node from the linked list

void delete(int data)
{
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Element not found in linked list\n");
        return;
    }
    if (prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }
    free(temp);
}

// Function to display the linked list

void display()
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function

int main()
{
    // Insert some elements into the linked list
    insert(5);
    insert(7);
    insert(9);
    insert(2);
    insert(1);

    // Display the linked list
    printf("Linked List: ");
    display();

    // Delete an element from the linked list
    delete(2);

    // Display the linked list again
    printf("Linked List after deletion: ");
    display();

    return 0;
}

