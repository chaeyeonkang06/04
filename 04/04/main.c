//
//  main.c
//  04
//
//  Created by 강채연 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x, y;
    
    printf("input two integers:");
    scanf("%i %i", &x, &y);
    
    printf("+ result is %i\n", x+y);
    
    printf("- result is %i\n", x-y);
    
    printf("* result is %i\n", x*y);
    
    printf("/ result is %i\n", x/y);
    
    printf("% result is %i\n", x%y);
    
    return 0;
}
