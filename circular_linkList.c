struct node  // successfully Executed
{

    int data;
    struct node *next;
};
typedef struct node s;
s*start,*new1,*t;
void create();
void display();
void insert_specified();
main()
{
    int ch;
    while(1)
    {
        printf("\nInsert:1\nInsert at start:2\nDisplay:3\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert_start();
            break;
        case 3:
             display();
            break;

        }
    }
}
void create()
{
    if(start=='\0')
    {

        start=(s*)malloc(sizeof(s*));
        printf("Enter data");
        scanf("%d",&start->data);
        start->next=start;
        t=start;
    }
    else
    {
        new1=(s*)malloc(sizeof(s*));
        printf("\nEnter data");
        scanf("%d",&new1->data);
        t->next=new1;
        new1->next=start;
        start=new1;
    }
}
void insert_start()
{
    t=(s*)malloc(sizeof(s*));
    printf("\nEnter data");
    scanf("%d",&start->data);
    t->data=start;
    t->next=start;
    start=t;
}

void display()
{
    printf("\ncircular link-list element are");
    for(t=start;t->next!=start;t=t->next)
    printf("%d:%u\t",t->data,t->next);
    printf("%d:%u",t->data,t->next);
}


