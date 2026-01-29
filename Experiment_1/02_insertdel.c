// Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.

#include <stdio.h>

int main(){
    int n;        //input for size of array
    printf("enter number of elements:");
    scanf("%d", &n);

    int a1[n+1];
    printf("enter elements of array: "); //read elements of array
    for(int i = 0; i < n; i++){
        scanf("%d", &a1[i]);
    }

    int new; //input of new element to insert
    printf("enter a new element: ");
    scanf("%d", &new);

    int pos1;  //input for the position to insert new element
    printf("enter the position for new_element:");
    scanf("%d", &pos1);

    //insertion of element
    for(int i = n-1; i >= pos1; i--){
            a1[i+1] = a1[i];  //shifting elements to right
    }

    a1[pos1] = new; //inserting new element at pos
    n++;

    printf("Array after insertion:"); //printing array after insertion
    for(int i = 0; i < n; i++){
        printf("%d ", a1[i]);
    }

    printf("\n");

    // deletion of element in array
    int pos2;
    printf("enter position to delete:"); //input for position to delete element
    scanf("%d", &pos2);

    if(n == 0){  //array = empty, then deletion not possible
        printf("deletion not possible");
    }else{
        for(int i = pos2; i <= n-2; i++){
            a1[i] = a1[i+1]; //shifting elements to left
        }
        n--;
    }

    printf("Array after deletion:"); //printing array after deletion
    for(int i = 0; i < n; i++){
        printf("%d ", a1[i]);
    }

    printf("\n");

    return 0;
}















