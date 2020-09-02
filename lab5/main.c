#include <stdio.h>

 // Variant 3


int main() {
    
    int i1, x1 [9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    
    for(i1 = 0; i1 < 9; i1++) {
        printf("m[%d] = %d\n", i1, x1[i1]);
    }
    
    printf("\n\n");
    

    int i, j, k, A[2][2] = {{1, 2},{3, 1}}, B[2][2] = {{1, 1},{0, 2}}, C[2][2] = {};
    
    
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
                printf("[%d]\n", C[i][j]);
                
        }
    
    
    
    return 0;
}

