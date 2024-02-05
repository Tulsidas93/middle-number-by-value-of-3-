#include<stdio.h>
int main()
{
    int num1,num2,num3;
    
    printf("Enter the Three numbers :\n");                 //print statement
    scanf("%d %d %d",&num1 , &num2 ,&num3);                //read 3 numbers
    
  
    
    
        if (((num1<num2) && (num2<num3) )||((num3<num2) && (num2<num1))) //check for num2
        {
            printf("The middle number is %d",num2);
        }
        else if(((num2<num1)&&(num1<num3))||((num3<num1) && (num1<num2))) //heck for num1
        {
            printf("The middle number is %d ", num1);
        }
    
    else{                                      
       printf("The middle number is %d", num3);        //else print num3
    }
    return 0;
}
