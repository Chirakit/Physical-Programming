#include <stdio.h>
#define row 3
#define col 3

int main(){
    double arr[row][col];
    double brr[row][col];
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf(" %lf", &arr[i][j]);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf(" %lf", &brr[i][j]);
    printf("A x B\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf", arr[0][0]*brr[0][0]+arr[0][1]*brr[1][0]+arr[0][2]*brr[2][0], arr[0][0]*brr[0][1]+arr[0][1]*brr[1][1]+arr[0][2]*brr[2][1], arr[0][0]*brr[0][2]+arr[0][1]*brr[1][2]+arr[0][2]*brr[2][2], arr[1][0]*brr[0][0]+arr[1][1]*brr[1][0]+arr[1][2]*brr[2][0], arr[1][0]*brr[0][1]+arr[1][1]*brr[1][1]+arr[1][2]*brr[2][1], arr[1][0]*brr[0][2]+arr[1][1]*brr[1][2]+arr[1][2]*brr[2][2], arr[2][0]*brr[0][0]+arr[2][1]*brr[1][0]+arr[2][2]*brr[2][0], arr[2][0]*brr[0][1]+arr[2][1]*brr[1][1]+arr[2][2]*brr[2][1], arr[2][0]*brr[0][2]+arr[2][1]*brr[1][2]+arr[2][2]*brr[2][2]);
    return 0;
}
