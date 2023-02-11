#include <stdio.h>

/*אלגוריתם אוקלידס
GCD חישוב  
מוצא את המחלק המשותף הגדול ביותר
הוא השלם הגדול ביותר שמחלק את שניהם GCD בהינתן שני שלמים חיובים ה
*/
int gcd(int m, int n);

int main(){
    int m, n;
    scanf ("enter m - %d\n", &m);
    scanf ("enter n - %d\n", &n);
}

int gcd(int m, int n){
    while (n != 0){
        int temp = n;
        n = m%n;
        m = temp;
    }
    if (m!=0) return m;
    return 0;
}

// ברקורסיה
int gcd_re(int m, int n){
    if(n==0) return m;
    return gcd_re(m,n);
}
int gcd_weapper(int m, int n){
    if(m<0) m = -m;
    if (n<0) n = -n;
    return gcd_re(m,n);
}
