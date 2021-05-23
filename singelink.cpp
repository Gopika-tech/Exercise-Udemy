#include<iostream>
#include<stdio.h>
#include<stdlib.h>
    struct single
    {
        int data;
        struct single *link;
    };
    struct single* add(struct single* head,int d)
    {
        struct single *ptr; 
        ptr =(struct single *)malloc(sizeof(struct single));

        ptr->data=d;
        ptr->link=NULL;

        ptr->link=head;
        head=ptr;
        return head;

    }
    int main()
    {
       
        struct single *head; 
        head =(struct single *)malloc(sizeof(struct single));
        head->data=45;
        head->link=NULL;

        struct single *ptr;
        ptr =(struct single *)malloc(sizeof(struct single));
        ptr->data=67;
        ptr->link=NULL;

        head->link=ptr;
        int data;
        char c,q;
        do
        {
            printf("hai");
        printf("\nEnter the value to be inserted\n");
        scanf("%d",&data);
        head=add(head,data);
        ptr=head;
        printf("Printing data\n");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->link;
        }
        printf("\nEnter q for quit\n");
        scanf("%c",&c);
        }
        while(c!='q');
        return 0;

    }

