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
    
    printf("input the second: ");
    scanf("%i", &time);
    
    printf("the time for %i is %i : %i : %i", time, time/3600, (time%3600)/60, time%60);
    
    return 0;
}
