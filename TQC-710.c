#include <stdio.h>
int in(int arr[], int n) {
    for (int i=0; i<4; i++) {
        if (arr[i] == n) {
            return 1;
        }
    } return 0;
}

int main() {
    int arr[10];
    int queue[4]={0,0,0,0}, count=0;
    for (int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<10; i++) {
        if (!in(queue, arr[i])) {
            queue[count%4] = arr[i];
            count++;
        }
        for (int j=0; j<4; j++) {
            printf("%d ", queue[j]);
        } printf("\n");
    }
}

