/*  0-1 triangle
   
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include<stdio.h>

int main()
{
    int i,j;
    
    
    for(i=1; i<=5; i++)
    {  
       for(j=i; j>=1; j--)
        {
           printf("%d ",j%2);
           
        }
        printf("\n");
    } 
        
    return 0;
}