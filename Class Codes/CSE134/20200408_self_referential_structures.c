#include <stdio.h>
#include <malloc.h>

struct node
{
    int val;
    struct node *next;
}*start;

void insert(int val)
{
    struct node *cur = (struct node*) malloc(sizeof(struct node)), *temp;
    cur->val = val;
    cur->next = NULL;
    if(start==NULL)
    {
        start = cur;
        return;
    }
    temp = start;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = cur;
}

void insertAtPos(int val, int pos);

void print()
{
    struct node *temp;
    if(start==NULL)
    {
        puts("List Empty!");
        return;
    }
    temp = start;
    printf("List: ");
    do
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    while(temp!=NULL);
    puts("");
}

int main()
{
    start=NULL;
    int n, i, x;

    scanf("%d", &n);
    print();
    for (i=0; i<n; i++)
    {
        scanf("%d", &x);
        insert(x);
        print();
    }

    return 0;
}
