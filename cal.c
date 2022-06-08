#include <stdio.h>

void subtraction(int x, int y)
{
    printf("Subtraction is %d\n", x-y);
}

void addition(int x, int y)
{
    printf("Addition is %d\n", x+y);
}

void division(int x, int y)
{
    if (x==0)
    {
        printf("Division is zero");
    }
    else if(y==0)
    {
        printf("Division is infinite");
    }
    else
    printf("Division is %d\n", x*y);
}

void multiplication(int x, int y)
{
    printf("Multiplication is %d\n", x*y);
}
  
int main()
{
    
    void (*func[])(int, int) = {subtraction,addition,division,multiplication};
    int a,x,y;
  
    printf("Enter two integers: ");
    scanf("%d%d",&x,&y);  
    printf("Press 0 for subtraction, 1 for addition, 2 for division and 3 for multiplication\n");
    scanf("%d", &a);
  
    if (a > 3) 
    {
        printf("Enter a valid number");    
        return 0;
    }
    else
    {	    
        (*func[a])(x,y);
    }
    return 0;
}
