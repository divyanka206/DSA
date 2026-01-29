// Find the product of two matrices using pointers.

#include <stdio.h>

int main(){
    int m, n;
    printf("enter the dimensions of matrix:");
    scanf("%d %d", &m, &n);

    int p, q;
    printf("enter the dimensions of matrix:");
    scanf("%d %d", &p, &q);

    int a1[m][n];
    printf("enter the elements of matrix 1:");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a1[i][j]);   // a1[i][j] = *(*(a1+i)+j)
        }
    }

    int a2[p][q];
    printf("enter the elements of matrix 2:");
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &a2[i][j]);    // a2[i][j] = *(*(a2+i)+j)
        }
    }

    int a3[m][q];

    if(n != p){
        printf("Multiplication not possible");
        return 0;
    }else{
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                a3[i][j] = 0;
                for(int k = 0; k < n; k++){
                    a3[i][j] += a1[i][k] * a2[k][j];  //*(*(a3+i)+j)= *(*(a1+i)+k) * *(*(a2+k)+j)
                }
            }
        }
    }

    printf("Product Matrix:");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            printf("%d ", a3[i][j]);  // *(*(a3+i)+j)
        }
    }

    printf("\n");

    return 0;
}
