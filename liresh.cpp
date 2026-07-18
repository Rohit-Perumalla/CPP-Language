#include <stdio.h>
#define SIZE 5  // Maximum size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if queue is empty
int isEmpty() {
    return (front == -1);
}

// Function to check if queue is full
int isFull() {
    return ((rear + 1) % SIZE == front);
}

// Insert element into the circular queue
void insert() {
    int value;

    if (isFull()) {
        printf("\nQueue Overflow! Cannot insert.\n");
        return;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("Inserted %d successfully.\n", value);
}

// Delete element from the circular queue
void deleteElement() {
    if (isEmpty()) {
        printf("\nQueue Underflow! Nothing to delete.\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear) {
        // Queue becomes empty
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Display all elements of the circular queue
void display() {
    if (isEmpty()) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nQueue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\n===== Circular Queue Menu =====\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Full\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deleteElement();  // changed here
                break;
            case 3:
                display();
                break;
            case 4:
                if (isEmpty())
                    printf("Queue is Empty.\n");
                else
                    printf("Queue is NOT Empty.\n");
                break;
            case 5:
                if (isFull())
                    printf("Queue is Full.\n");
                else
                    printf("Queue is NOT Full.\n");
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
