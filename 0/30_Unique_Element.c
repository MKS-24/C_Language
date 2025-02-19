#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int arr[7] = {1, 3, 6, 1, 1, 2, 3};
    
    for (int i = 0; i < 7; i++) {
        bool flag = false;
        
        for (int j = 0; j < 7; j++) {
            if (i != j && arr[i] == arr[j]) {
                flag = true;
                break; // Once a match is found, no need to check further
            }
        }

        if (flag==false) {
            printf("%d is a unique element\n", arr[i]);
        }
    }

    return 0;
}
