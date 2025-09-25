//
//  main.c
//  04
//
//  Created by 강채연 on 9/25/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int year;
   
    printf("input year: ");
    scanf("%i", &year);
    
    printf("is the year %i leap year? %i\n", year, (year%4==0 && year%100!=0) || year%400==0);
    
}
