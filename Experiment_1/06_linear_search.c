// Store ‘n’ numbers (integers or real) in an array.  Conduct a linear search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>

int main() {
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array:");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("enter element to find:");
    scanf("%d", &key);

    int found = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Element found at %d index:", i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Element %d not found", key);
    }

    printf("\n");

    return 0;
}
