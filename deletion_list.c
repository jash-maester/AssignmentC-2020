#include<stdio.h>
#include<stdlib.h>
void insertion(int x);
void Print();
void Delete(int y);
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
int main()
{
    int n,x,y,i;
    printf("Enter the numbers in the list;-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertion(x);
    }
    Print();
    printf("Enter the number to be deleted:-");
    scanf("%d",&y);
    Delete(y);
    Print();
    return 0;
}
void insertion(int x)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Delete(int y)
{    struct Node* temp1=head, *prev;
    int i,index=0;
   
    if(temp1->data==y)
    {
        head=temp1->next;
        free(temp1);
        return;
    }
    while(temp1->data!=y)
    {
      prev=temp1;
     temp1=temp1->next;
     }/*this has to be more correct*/ 
    prev->next=temp1->next;
    free(temp1);
    
}
void Print()
{
  struct Node *temp1=head;
  printf("List is:");
  while(temp1!=NULL)
  {
    printf(" %d  ",temp1->data);
    temp1=temp1->next;
  }
  printf("\n");
}