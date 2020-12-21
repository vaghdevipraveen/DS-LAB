#include <stdio.h>
struct node{
    int data;
    struct node *next;
};
insert_begin(struct node **head,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        new_node->next=*head;
        *head=new_node;
    }
    printf("Insertion successful\n");
}
insert_end(struct node **head,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    struct node *temp=*head;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else{
        while(temp->next!=NULL)
           {
                temp=temp->next;
           }
        temp->next=new_node;
        printf("Insertion successful\n");
    }
}
insert_pos(struct node **head,int new_data,int pos)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    struct node *temp=*head;
    if(pos==1)
    {
        new_node->next=temp;
        *head=new_node;
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    printf("Insertion successful\n");
}
delete_begin(struct node **head)
{
    struct node *temp=*head;
    if(*head==NULL)
        printf("List is empty,deletion is not possible\n");
    else
    {
        *head=temp->next;
        free(temp);
        printf("Deletion successful\n");
    }
}
delete_end(struct node **head)
{
    struct node *temp,*temp1;
    temp=*head;
    if(*head==NULL)
    {
        printf("List is empty,deletion is not possible\n");
    }
    else if(temp->next==NULL)
    {
        *head=NULL;
        free(head);
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
    }
}
delete_pos(struct node **head,int pos)
{
    struct node *temp,*temp1;
    temp=*head;
    if(*head==NULL)
    {
        printf("List is empty, deletion is not possible\n");
        return;
    }
    for(int i=1;i<pos;i++)
    {
        temp1=temp;
        temp=temp->next;
        if(temp==NULL)
        {
            printf("There are less elements than the given position in the list\n");
            exit(0);
        }
    }
    temp1->next=temp->next;
    free(temp);
    printf("Deletion successful\n");
}
display(struct node **head)
{
    struct node *temp=*head;
    if(*head==NULL)
        {
            printf("List is empty\n");
            return;
        }
    else
    {
        printf("The elements in the list are:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
        
}

void sort(struct node **head)
{
    struct node *temp1=*head;
    struct node *temp2=*head;
    if(temp1==NULL)
    {
        printf("List is empty\n");
    }
    else if(temp1->next==NULL)
    {
        printf("Only element in the list %d\n",temp1->data);
    }
    else
    {
        int a;
         for(temp1=*head;temp1!=NULL;temp1=temp1->next)
         {
             for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
             {
             if((temp1->data)>(temp2->data))
                {
                 a=temp1->data;
                 temp1->data=temp2->data;
                 temp2->data=a;
                }
                //temp=temp->next;
             }
         }
         printf("Elements sorted in the list successfully\n");
        //display(head);
    }
}

void reverse(struct node **head)
{
    struct node *prev=NULL;
    struct node *temp=NULL;
    struct node *current=*head;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    *head=prev;
    printf("List elements are reversed successfully\n");
}
void concatenate(struct node **head1,struct node **head2)
{
    if(*head1!=NULL && *head2!=NULL)
    {
        if(*head1==NULL)
        {
            printf("Either of the list is empty, so the concatenated list is:\n");
            display(&head2);
        }
        else if(*head2==NULL)
        {
            printf("Either of the list is empty, so the concatenated list is:\n");
            display(&head1);
        }
        else
        {
            struct node *temp=*head1;
            while(temp->next!=NULL)
               {
                    temp=temp->next;
               }
               temp->next=*head2;
               printf("Two lists are concatenated\n");
               display(head1);
        }
    }
}

int main()
{
    struct node *head=NULL;
    struct node *head1=NULL;
    struct node *head2=NULL;
    int choice,value,pos;
    printf("Enter the choice you want to perform\n1.Insert at beginning\n2.Insert at End\n3.Insert at specified position\n4.Delete at beginning\n5.Delete at end\n6.Delete at specified position\n7.Display\n8.Sorting\n9.Reverse\n10.Concatenation\n11.Stack Implementation\n12.Queue Implementation\n13.Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    insert_begin(&head,value);
                    break;
            case 2:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    insert_end(&head,value);
                    break;
            case 3:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    printf("Enter the position\n");
                    scanf("%d",&pos);
                    insert_pos(&head,value,pos);
                    break;
            case 4:delete_begin(&head);
                   break;
            case 5:delete_end(&head);
                   break;
            case 6:printf("Enter the position\n");
                    scanf("%d",&pos);
                    delete_pos(&head,pos);
                   break;
            case 7:display(&head);
                   break;
            case 8:sort(&head);
                    break;
            case 9:reverse(&head);
                    break;
            case 10: {
                        int data,n1,n2;
                        printf("Enter the number of elements you want to have in list 1:\n");
                        scanf("%d",&n1);
                        for(int i=0;i<n1;i++)
                        {
                            printf("Enter the element %d\n",(i+1));
                            scanf("%d",&data);
                            insert_end(&head1,data);
                        }
                        printf("Enter the number of elements you want to have in list 2:\n");
                        scanf("%d",&n2);
                        for(int i=0;i<n2;i++)
                        {
                            printf("Enter the element %d\n",(i+1));
                            scanf("%d",&data);
                            insert_end(&head2,data);
                        }
                        concatenate(&head1,&head2);
                        exit(0);
            }
            case 11:{
                int choi;
                while(1)
                {          
                printf("Enter your choice\n1.Push\n2.Pop\n3.Display the elements in the stack\n4.Exit\n");
                scanf("%d",&choi);
                 switch(choi)
                 {
                   case 1: printf("Enter the element to be inserted\n");
                           scanf("%d",&value);
                           insert_begin(&head1,value);
                           break;
                    case 2:delete_begin(&head1);
                            break;
                    case 3:display(&head1);
                            break;
                    case 4:exit(0);
                    default:exit(0);
                 }
                    
                }
              //  break;
            }
            case 12:{
                int choi;
                while(1)
                {          
                printf("Enter your choice\n1.Insert\n2.Delete\n3.Display the elements in the Queue\n4.Exit\n");
                scanf("%d",&choi);
                 switch(choi)
                 {
                   case 1: printf("Enter the element to be inserted\n");
                           scanf("%d",&value);
                           insert_end(&head1,value);
                           break;
                    case 2:delete_begin(&head1);
                            break;
                    case 3:display(&head1);
                            break;
                    case 4:exit(0);
                    default:exit(0);
                 }
                    
                }
               // break;
            }
            case 13:exit(0);
            default:printf("Incorrect choice...Enter the correct choice\n");
        }
    }
    return 0;
}
