#include <stdio.h>
#include <stdbool.h>
/*חיפוש בינארי
עובד רק על מערך ממיון 
סיבוכיות 
log n*/
int main(){

}

int binary(int arr[], int n, int x){
    int low = 0, high = n -1;
    while (low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return x;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

//binary search recursia
// log n  סיבוכיות מקום וזמן
int binary_recursia(int a[], int x, int left,int right){
    if(left > right)  return -1;
    int middle = (left + right) / 2;
    if(a[middle] == x) return middle;
    else if(x < a[middle])
        return binary_recursia(a, x, left, middle -1 );
    else
        return binary_recursia(a, x, middle+1, right);    
}