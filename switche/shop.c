// Program to create a simple calculator
#include <stdio.h>

int main()
 {  
    //START:
    char icecream;
    char a,ch,n,y,ch,y;
    int quantity,size,total;
    printf("----************** WELCOME *****************------\n");
    printf(" 1)Chocolate\n 2)Vanilla \n3)Strawberry \n4)Mint Chocolate Chip\n 5)Butter Pecan \n 6)Chocolate Chip Cookie Dough \n 7)Cookies n Cream \n 8)Rocky Road\nplz Enter ur choice :");
    scanf("%c",&a);

    printf("------------------------------------------------------------\n");
   

    switch(a)
    {
        case '1':
            printf("***********thank you u have selected chocolate flevour ********\n");
            printf("\n 1)small 30rs \n 2)midium 40rs \n 4)large 50rs\nplz select ur choice: \n");
            scanf("%d",&size);
            
            printf("thank u plz enter quantity u want(1.......100)\n");
            scanf("%d",&quantity);
            if(size==1)
            {
            total = 30 * quantity;
            }
            else if (size==2)
            {
            total = 40 * quantity;  
            }
            else if (size==3)
            {
            total = 50 * quantity;  
            }
                               
            printf("------------------------------------------------------------\n");
            printf("\t\t\t here is ur bill \n flavour == chocolate \n size == %d \n totl bill==%d",size,total);
             

            break;

        case '2':
            printf("***********thank you u have selected vanilla flevour***********\n");
             
            printf("plz select ur choice \n 1)small 30rs \n 2)midium 40rs \n 3)large 50rs");
            scanf("%d",&size);
            printf("thank u plz enter quantity u want(1 ,2 , 3, 4, 5 )\n");
            scanf("%d",&quantity);
            if(size==1)
            {
            total = 35 * quantity;
            }
            else if (size==2)
            {
            total = 45 * quantity;  
            }
            else if (size==3)
            {
            total = 55 * quantity;  
            }
                               
            printf("------------------------------------------------------------\n");
            printf("\t\t\t here is ur bill \n flavour == chocolate \n size == %d \n totl bill==%d ",size,total);
            
            printf("do u want to continue \n 1)y \n2)n");
            scanf("%c",&ch); 
            if(ch==y)
            {
              goto START;
              //printf("sorry we are working on it\n");  
            }
            else
            printf("***************thank you visit again**************************\n");
            break;

    
        case '3':
            printf("thank you u have selected strawbeery flevour \n");
             printf("\n 1)small 30rs \n 2)midium 40rs \n 4)large 50rs\nplz select ur choice: \n");
            scanf("%d",&size);
            
            printf("thank u plz enter quantity u want(1.......100\n)");
            scanf("%d",&quantity);
            if(size==1)
            {
            total = 30 * quantity;
            }
            else if (size==2)
            {
            total = 40 * quantity;  
            }
            else if (size==3)
            {
            total = 50 * quantity;  
            }
                               
            printf("------------------------------------------------------------\n");
            printf("\t\t\t here is ur bill \n flavour == chocolate \n size == %d \n totl bill==%d",size,total);
             
            printf("do u want to continue \n 1)y \n2)n");
            scanf("%c",&ch); 
            if(ch==y)
            {
              printf("sorry we are working on it\n");  
            }
            else
            printf("***************thank you visit again**************************\n");
            break;

            break;

        case '4':
            printf("thank you u have selected mint chocolate chip flevour \n");
            break;
        
        case '5':
            printf("thank you u have selected Butter Pecan flevour \n");
            break;

        case '6':
            printf("thank you u have selected Chocolate Chip Cookie Dough flevour \n");
            break;

        case '7':
            printf("thank you u have selected Cookies n' Cream. flevour \n");
            break;   

        case '8':
            printf("thank you u have selected Rocky Road flevour \n");
            break;         
        

            printf("do u want to continue \n 1)y \n2)n");
            scanf("%c",&ch); 
            if(ch==y)
            {
               
            }
            else
            printf("***************thank you visit again**************************\n");
        default:
            printf("Error! your choice is not correct");
    }
       
    return 0;
}
