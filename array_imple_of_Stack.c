#include <stdio.h>
#include<stdlib.h>
#define SIZE s
 int top=-1;
 void push(int a[],int item,int top)
 {
    top=top+1;
    a[top]=item;
 }
 int top(int a[])
 {
    int item,top;
    top=top-1;
    return item;
 }
 void display(int a[])
 {
    int i;
    if(top==-1)
            printf("the stack is full");
    else
     printf("the stack elements are \n ");
     for(i=top;i>=0;i--)
     printf("%d\n",a[i]);
 }
 int main()
 {
     int s[100],choice,item;
     while(1)
     {
        printf("enter the choice \n");
        printf("1 PUSH \n 2 POP \n 3 DISPLAY \n 4 TEST \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : if(top==SIZE-1)
                    {
                         printf("the stack is full \n");
                         break;
                    }
                    else
                    {
                        printf(" enter the elements to be pushed \n");
                        scanf("%d",&item);
                        push(s,item);
                    }
                    break;
            case 2: if (top==-1)
                    {
                         printf("the stack is empty \n");
                         break;
                    }
                    item=pop(s);
                    printf("popped element is %d \n",item);
                    break;
            case 3: display(s);
                    break;
            case 4: exit(0);
        }
     }
 }