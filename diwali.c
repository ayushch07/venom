#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d;
    
printf("Please enter the date\n");
    scanf("%d", &d);
    if(30<d||d==0)
    {
        printf("Invalid date\n");
    }
    else if (d==2)
    {  printf("Happy Dhanteras\n");
        /* code */
    }
    else if (d==4)
    {printf("Happy Diwali\n");
        /* code */
    }
    else if (d==1||d==3||5<=d||d<=30)
    {printf("Have a good day :)\n");
        /* code */
    }
    
    
    
    return 0;

}