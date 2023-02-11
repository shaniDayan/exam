#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*פוינטרים 
נשים לב כי & הוא הכתובת של המשתנה בזיכרון 
ו * זה המצביע לאותו משתנה 
אסור לערבב טיפוסי מצביעים 
במצביע זה אומר שהוא עדין לא מצביע על שום דבר  NULL אם נציב 
*/
int main(){
    int x = 5, y = 7;
    swap(&x, &y);
}

void swap (int *px, int * py){
    int temp = *px;
    *px = *py;
    *py = temp;
}