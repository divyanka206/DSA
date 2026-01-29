// Find the sum of rows and columns of matrix of given order (row x column).

#include <stdio.h>

int main(){
    int arr[2][2];

    printf("enter elements of matrix:");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", & arr[i][j]);
        }
    }

    // sum of rows:
    for(int i = 0; i < 2; i++){
        int sum_row = 0;
        for(int j = 0; j < 2; j++){
            sum_row += arr[i][j];
        }
        printf("Sum of rows: %d\n", sum_row);

    }

    //sum of column:
    for(int j = 0; j < 2; j++){
        int sum_col = 0;
        for(int i = 0; i < 2; i++){
            sum_col += arr[i][j];
        }
        printf("Sum of column: %d\n", sum_col);
    }


    return 0;
}
