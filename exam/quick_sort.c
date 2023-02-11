#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
/*complexity
time complexity avg is nlog2n
the worst case n^2
place complexity avg logn
the worst case n*/
}
void swap (int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
// https://opendsa-server.cs.vt.edu/embed/quicksortAV
void quick_sort (int a[], int n){
    int p, right=1, left=n-1;
    if(n<2) return;
    swap(&a[0], &a[n/2]); // כדי שזה יהיה אקראי נחליף בין האיבר הראשון לאמצעי
    p = a[0];
    while (right<= left){
        while (left>=right&& a[left]>=p){
            left--;
            // אנחנו עוברים על המערך כל עוד שמאל גדול שווה לימין וגם הערך במקום שמאל גדול שווה לפויט שלנו ואז נוריד את צעד שמאל באחד
            // כלומר מצד שמאל יש את כל מי שגדול מהפויט שלנו אז אנחנו מחפשים מתי זה קורה
        }
        while (right<=left &&a[right] < p){
            right--;
            // צד ימין זה איברים שקטנים מהפיוט שלנו
        }
        if(right < left){
            swap(&a[right++], &a[left--]);
        }
        swap(&a[0], &a[left]); // מחליפים בין האיבר הראשון לאיבר במקום טי שבו הפיווט שייך
        quick_sort(a,left); 
        quick_sort(a+left+1, n-left-1);  // לשאול
   }
}