#include<stdio.h>

int  main () {
    // Increment Opreator
    // i++ (post increment opreator)
    // ++i (pre increment opreator)

    int i=1;
    printf("%d\n" , i++); // i++ (use the value of i first and then increase)
    printf("%d\n" , i);

    printf("%d\n" , ++i); // ++i (increase the value of i first and then use)
    printf("%d\n" , i);

    return 0;
    
}
