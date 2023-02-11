#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// n^2 סיבוכיות
int main(){
}

int find_index_max(int a[], int n){
    int i, i_max=0;
    for(i=1;i<n; i++){
        if(a[i]>a[i_max]){
            i_max=i;
        }
    }
    return i_max;

}
 void max_sort (int a[], int n){
    int l;
    for (l=n; l>1; --l){
        int i_max = find_index_max(a, l);
        swap(&a[l-1], &a[i_max]);
    }
}
/*max sort with recursive
time complexity n^2
place complexity n*/
void max_sort_recursive(int a[], int n){
    if (n==1) return;
    int i_max = index_of_max(a, n);
    swap(&a[n-1], &a[i_max]);
    max_sort_recursive(a, n-1); // חוזרים על הפעולה עם מערך קטן יותר
