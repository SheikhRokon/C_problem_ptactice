#include <stdio.h>

int sum =0;

int main() {
    for ( int i = 7; i <= 600; i++)
    {
        if ((i%7 == 0 || i%9 == 0) & !(i % 63  == 0))
        {
            sum += i;
        }
        
    }
    printf("%d", sum);
    
    return 0;
}
