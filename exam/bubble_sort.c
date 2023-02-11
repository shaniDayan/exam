#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// n^2 סיבוכיות
int main(){
   int arr[5] = {7, 9, 2, 5, 3};
   bubble_sort(arr, 5); 
}

void swap (int* pa, int* pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

bool bubble (int arr[], int n){
    bool sorted = true;
    for (int i=0; i<n;i++){
        if(arr[i - 1]> arr[i]){
            sorted = false;
            swap (arr+i-1, arr +i);
        }
    }
}
void bubble_sort(int arr[], int n){
    for(int len =n; len > 1; len--){
        if (bubble(arr, len)){
            break;
        }
    }
}

// מיון באבל בעזרת סיבוכיות
/*נשים לב
אנחנו לא מגיעים להחלפה של האיברים עד שיש לנו רק 2 איברים להחליף ביניהם
אנחנו קוראים לפונקציה של הריקורסיה עד שאנחנו מגיעים לאיבר אחד ואז חוזרים למקום בו קראנו 
לפונקציה שוב פעם ומגיעים לפור
*/
void bubble_re(int a[], int n){
    if (n<=1) return;
    bubble_re(a+1, n-1);
    for (int i=0; (i< n-1)&& a[i]> a[i+1]; i++){
        swap(a+i, a+i+1);
    }
}