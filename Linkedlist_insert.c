#include<stdio.h>
#include<stdlib.h>
void Insert(int x);
void Print();
struct Node{
    int data;
    struct Node *next;
};
struct Node *fronthead;
int main()
{
 fronthead=NULL;
 int i,n,x;
 printf("Enter how many numbers you want:-");
 scanf("%d",&n);
 printf("Enter the elements:-");
 for(i=0;i<n;i++)
 {
   scanf("%d",&x);
 
 Insert(x);
 Print();
 }
 return 0;
}
void Insert(int x)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  
    (*temp).data=x;
    temp->next=NULL;
    if(fronthead!=NULL)
    temp->next=fronthead;
    fronthead=temp;
    
    
     
}
void Print()
{
  struct Node *temp1=fronthead;
  printf("List is:");
  while(temp1!=NULL)
  {
    printf("%d",temp1->data);
    temp1=temp1->next;
  }
  printf("\n");
}
