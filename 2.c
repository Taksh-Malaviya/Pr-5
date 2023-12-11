/*Q.2 Write a Program to find the largest element from a given 2D array.

Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the array :1
Enter the elements of the array :2
Enter the elements of the array :3
Enter the elements of the array :8
large elements is = 8
*/	
#include <stdio.h>

int main() {

    int r,c,largest;
    int i,j;
    int a[100][100];
   
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
        printf("Enter the elements of the array :");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (a[i][j]>largest) {
                largest = a[i][j];
            }
        }
    }
    printf("large elements is = %d\n", largest);
}

			
	
