#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*מאלוק
לא לשכוח לבדוק אם ההקצאה הצליחה
לשחרר בסוף את הזיכרון
*/
int main(){
   // for arr
   int num = 100;
   int *arr =  malloc(num*sizeof(int));
   if (arr = NULL) return 1;
   free(arr);
}