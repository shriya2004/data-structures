Node *temp = NULL;
Node *getNode();

void display();
void insert_Beg();
void insert_End();
void insert_At_k();
void count();
void main()
{
        int ch;
        while(1)
         {
                 printf("\n1.insert at Beg\n2.insert at End\n3.insert at pos\n4.Display");
                 printf("\n5.Find Length\n6.Exit");
                 printf("\n Enter your option ");
                 scanf("%d",&ch);
                 switch(ch)

                    {
                            case 1: printf("inserting at the beginning\n");
                                    insert_Beg();
                                    break;
                            case 2: printf("inserting at the end\n");
                                    insert_End();
                                    break;
                            case 3: printf("inserting at the position k\n");
                                    insert_At_k();
                                    break;
                            case 4 :if(head==NULL){
                                          printf("\n the list is empty");
                                    }
                                    else
                                    {
                                            printf("the list is\n");
                                            display();
                                    }
                                    break;
                            case 5 :printf("finding the length\n");
                                    break;
                            case 6 :exit(0);
                     }
            }
}

                  


Node *getNode()
{
        Node *new = (Node*)malloc(sizeof(Node));
        printf("\n Enter new data ");
        scanf("%d",&new->data);
        new->next=NULL;
        return new;

}

void insert_Beg()
{

          Node *new = getNode();
          if(head==NULL)
          temp=new;
          new->next=head;
          head=new;
}
void insert_End()
{
        Node *new=getNode();
        if(head==NULL)
        {
                head=temp=new;
        }
        else
        {
                temp->next=new;
                temp=new;
        }
}
voivoid display()
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
  
