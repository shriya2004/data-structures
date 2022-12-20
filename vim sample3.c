#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
        int data;
        struct Node *next;
}Node;
Node *head =NULL;
Node *temp =NULL;
Node *getNode();
void display();
void delete_beg();
void delete_end();
void delete_at_k();
void length();
void main()
{
        int ch;
        int pos;
        while(1)
        {
                printf("\n1.delete at beginning\n2.delete at end");
                printf("\n3.delete at position\n4.display\n5.length");
                printf("\n6.exit");
                printf("enter an option\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:printf("delete at beginning:\n");
                               delete_beg();
                               break;
                        case 2:printf("delete at end\n");
                               delete_end();
                               break;
                        case 3:printf("delete at certain pos\n");
                               printf("Enter the position to insert\n");
                       delete_at_k();
                               break;
                        case 4:if(head==NULL)
                               {
                                   printf("the list is empty\n");
                               }
                               else
                                 {
                                    printf("given list is\n");
                                    display();
                                 }
                               break;
                         case 5:if(head==NULL)
                                {
                                  printf("the list is empty\n");
                                }
                                else
                                {
                                  length();
                                }
                         case 6:exit(0);
                 }

        }
}
Node *getNode()
{
  Node *new=(Node*)malloc(sizeof(Node));
  printf("enter data\n");
  scanf("%d",&new->data);
  new->next=NULL;
  return new;
}
void delete_beg()
 
   {
        Node *temp1=head;
        if(head==NULL);
        {
                printf("list is empty\n");
        }
        else if(head->next==NULL)
        {
                printf("data deletion : %d",head->data);
                head=NULL;
                temp=NULL;
                free(temp1);
        }
        else
        {
                head=head->next;
                free(temp1);
        }
}
void delete_end()
{
        Node *temp1=head;
        if(head==NULL)
        {
                printf("list is empty\n");
        }
        else if(head->next==NULL)
        {
                printf("\n data deleted:%d",head->data);
                head=NULL;
                temp=NULL;
                free(temp1);
        }
        else
        {
                Node *t;
                   while(temp1->next!=temp)
                {
                temp1=temp1->next;
                t=temp1->next;
                }
                temp1->next=NULL;
                temp=temp1;
                free(t);
        }
}
void delete_at_k()
{
        int i, k,n;
        Node *curr=head;
        Node *temp1;
        n=length();
        printf("enter the position to be deleted\n");
        scanf("%d",&k);
        if(k==1)
        {
        delete_beg();
        }
        else if(k==n)
        {
        delete_end();
        }
        else if(1<k&&k<<n)
        {
         for(i=1;i<=k-2;i++)
         {
         curr=curr->next;
         temp=curr->next;
         curr->next=curr->next->next;
         }
         free(temp);
        }
         else
        {
          printf("invalid position\n");
        }
}
void display()
{
        Node *current=head;
        while(current!=NULL)
        {
                printf("%d",current->data);
                current=current->next;
        }
}
void length()
{
  int count=1;
  temp=head;
  while(temp->next!=NULL)
  {
          count++;
          temp=temp->next;
  }
  printf("length of node is %d\n",count);
}


