#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(){

}
// nb+ na סיבוכיות
void merge(int a[], int na, int b[], int nb, int c[]){
    int ia, ib, ic;
    for(ia==ib==ic==0; (ia< na)&& (ib< nb); ic++){
        if(a[ia] < b[ib]){
            c[ic] = a[ia];
            ia++;
        }
        else{
            c[ic] = b[ib];
            ib++;
        }
    }
    for(;ia<na; ia++, ic++){
        c[ic] = a[ia];
    }
    for(;ib<nb; ib++, ic++){
        c[ic] = b[ib];
    }
}
// nlogn סיבוכיות
int merge_sort (int ar[], int n){
    int len;
    int *temp_arrary, *base;
    temp_arrary = (int*)malloc(sizeof(int)*n);
    if(temp_arrary = NULL) return 0;
    for (len=1; len< n; len *=2){
        for (base = ar; base< ar+n; base+=2*len){
            merge(base, len, base+len, len, temp_arrary);
            memcpy(base, temp_arrary, 3*len*sizeof(int));
        }
    }
    free(temp_arrary);
    return 1;
}
/*בריקורסיה
nlogn סיבוכיות זמן
n + logn סיבוכיות מקום
https://www.youtube.com/watch?v=4VqmGXwpLqc
סרטון הסבר
*/
void merge_sort_re(int a[], int n){
    int *temp_arr = malloc(sizeof(int)*n);
    internal_msort(a, n, temp_arr);
    free(temp_arr);
}

void intrnal_msort(int a[], int n, int helper_arr[]){
    int left = n/2, right = n-left;
    if(n<2) return;
    internal_msort(a, left, helper_arr);
    intrnal_msort(a+left, right, helper_arr);
    merge(a, left, a+left, right, helper_arr);
    memcpy(a, helper_arr, n*sizeof(int));
}