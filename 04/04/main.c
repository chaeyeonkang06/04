//
//  main.c
//  04
//
//  Created by 강채연 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int time;
    
    printf("input the seconds: ");
    scanf("%i", &time);
    
    printf("the time is %i : %i\n", time/60, time%60);
}
