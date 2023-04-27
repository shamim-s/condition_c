#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x >= 20000)
    {
        printf("Gucci Bag");
        if (x > 20000)
        {
            printf("Gucci Belt");
        }
        
    }else if(x >= 5000)
    {
        printf("Levis Bag");
    }else if (x < 5000)
    {
        printf("Something");
    }
    
    
    
}