//
//  main.c
//  Chapter2Exercie4Q.1
//
//  Created by Nathaniel Stone on 2/15/16.
//  Copyright © 2016 Nathaniel Stone. All rights reserved.
//

#include <stdio.h>
#define MAX  5

int main()
{
    int arr[5][5];
    int i,j,k = 0, p = 0;
    int row = 5;
    int col = 5;
    
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = k;
            k++;
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = p;
            p++;
            
            printf(" %d ", arr[j][i]);
            
        }
        printf("\n");
    }
    
    return 0;
}
