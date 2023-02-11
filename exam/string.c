#include <string.h>
// פונקציות של מחרוזות כנראה במבחן נצטרך לבנות לבד 
int main(){
   char s[] =  "hello";
   char d[] = "world";
    strlen(s);// return length 
    strcpy(d,s); // copy from s to d
    srtcat(d,s); // add s to the end of d
    strcmp(s, d);// return 0 if they are equal, +number if s1 > s2. -number if s1 < s2

}