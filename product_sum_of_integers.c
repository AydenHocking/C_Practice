#include <stdio.h> 

int g(int, int); 

int sum;


int main(void) 
{ 
    int product = g(3, 4); 
    printf("Sum=%d\n", sum); 
    printf("Product=%d\n", product); 
} 

int g(int x, int y) 
{ 
    sum = x + y;
    return x * y;
}
