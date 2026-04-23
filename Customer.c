#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
typedef struct customer {
    int acc_no;
    char name[50];
    char type[10]; 
    float amount;
} customer;

typedef struct queue {
    customer data[MAX];
    int front, rear;
} queue;

void init(queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isempty(queue *q) {
    if (q->front == -1 || q->front > q->rear)
        return 1;
    else
        return 0;
}

void enqueue(queue *q) {
    customer c;

    if (q->rear == MAX - 1) {
        printf("Queue Full\n");
        return;
    }

    printf("Enter Account No: ");
    scanf("%d", &c.acc_no);

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Transaction Type (deposit/withdraw): ");
    scanf("%s", c.type);

    printf("Enter Amount: ");
    scanf("%f", &c.amount);

    if (q->front == -1)
        q->front = 0;

    q->rear++;
    q->data[q->rear] = c;

    printf("Transaction Added\n");
}

void dequeue(queue *q) {
    if (isempty(q)) {
        printf("No Transactions\n");
        return;
    }

    customer c = q->data[q->front];

    printf("\nProcessing Transaction:\n");
    printf("Acc No: %d\n", c.acc_no);
    printf("Name: %s\n", c.name);

    if (strcmp(c.type, "deposit") == 0) {
        printf("Deposit of %.2f successful\n", c.amount);
    }
    else if (strcmp(c.type, "withdraw") == 0) {
        printf("Withdrawal of %.2f successful\n", c.amount);
    }
    else {
        printf("Invalid Transaction Type\n");
    }

    q->front++;
}

void display(queue *q) {
    int i;

    if (isempty(q)) {
        printf("Queue Empty\n");
        return;
    }

    printf("\nPending Transactions:\n");
    for (i = q->front; i <= q->rear; i++) {
        printf("%d %s %s %.2f\n",
               q->data[i].acc_no,
               q->data[i].name,
               q->data[i].type,
               q->data[i].amount);
    }
}

int main() {
    queue q;
    int ch;

    init(&q);

    while (1) {
        printf("\nMenu\n1-Enqueue Transaction\n2-Dequeue (Process)\n3-Display\n4-Exit\nEnter choice: ");
        scanf("%d", &ch);

        if (ch == 4)
            break;

        switch (ch) {
            case 1:
                enqueue(&q);
                break;

            case 2:
                dequeue(&q);
                break;

            case 3:
                display(&q);
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
