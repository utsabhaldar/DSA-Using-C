#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
     struct node *next;
     }*p;

void insert_end(int ele);
void insert_beg(int ele);
void delete_end(int ele);
void delete_beg(int ele);
void display();

void main(){
    int val, n ;
    p=NULL;
    for(int i=1;i<2;i++)
    {
        printf("\n 1. Insert at end");
        printf("\n 2. Insert at beg");
        printf("\n 3. delete from beg");
        printf("\n 4. Delete from end");
        printf("\n 5. Display");
        printf("\n 6. Exit");
        printf("\n Enter your choice :");
        scanf(" %d",&n);

        switch(n){
            case 1:
            printf("\n Enter the value ");
            scanf("%d", &val);
            insert_end(val);
            break;

            case 2:
            printf("\b Enter the value ");
            scanf("%d",&val);
            insert_beg;
            break;

            case 3:            
            delete_beg(val);
            break;

            case 4:
            delete_end(val);
            break;

            case 5:
            display();
            break;

            case 6:
            exit(0);
            break;

            default:
            printf("\n This is a wrong choice");
            break;
        }

        }

 
}

    void insert_end(int ele){
        struct node *tmp , *tmp1;
        
        tmp=p;
        tmp1=( struct node*)malloc(sizeof(struct node));
        tmp1->data=ele;
        tmp1->next=p;
        if(p== NULL)
        {
        p=tmp1;
        }
        else
        {
            (tmp->next!=NULL);
            tmp=tmp->next;
            tmp->next=tmp1;

        }
    }

        void insert_beg(int ele){
            struct node *tmp , *tmp1;
            tmp=p;
            tmp1=(struct node*)malloc(sizeof(struct node));
            tmp1->data=ele;
            tmp1->next=p;
            p=tmp1;
        }
        

        void delete_beg(int ele){
            struct node *tmp , *tmp1;
            tmp=p;
            if(p==NULL){
                printf("\n no element to be deleted!!");
            }
            else{
                printf("\n element deleted - %d", p->data);
                p=p->next;
            }
        }

        void delete_end(int ele){
            struct node *tmp , *tmp1;
            tmp=p;
            struct node* pre;
            if(p==NULL){
                printf("no element to be deleted!!");
            }
            else if(p->next==NULL){
                printf("\nelement deleted - %d", p->data);
                p=NULL;
            }
            else{
                while(tmp->next!=NULL){
                    pre=tmp;
                    tmp=tmp->next;
                }
                pre->next=NULL;
                printf("\n element deleted - %d", tmp->data);
            }

        }

        void display(){
            struct node *tmp , *tmp1;
            tmp=p;
            while(tmp!=NULL){
                printf("\n %d", tmp->data);
                tmp=tmp->next;
            }
        };
                                 