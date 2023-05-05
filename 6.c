// задача 6 
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int array[N];
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        
        if (array[i] > 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
