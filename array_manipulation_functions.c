void f( int a[] ) 
{ 
    printf("%d\n", a[3]); 
    a[3] = a[3] + 900; 
} 

int main (void) 
{ 
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    (void) f( a ); 
    (void) f( a );

    printf("%d\n", a[3]);

    return 0; 
} 