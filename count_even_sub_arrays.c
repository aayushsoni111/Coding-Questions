#include <stdio.h>

int countEvenSubArrays(int arr[], int size) {
    int result = 0;
    for (int i=0;i<size;i++) {
        int sum = 0;
        for (int j=i;j<size;j++) {
            sum = sum+j;
            if (sum%2 == 0){
                result++;
            }
        }
    }
    return result;
}

int main() {
        int arr[]={3,5,2,46,44,3,5};
        int result = countEvenSubArrays(arr, (int)(sizeof(arr)/sizeof(arr[0])));
        printf("\n Result: %d", result);
    return 0;
}
