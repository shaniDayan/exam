
//פונקציה שמוצאת את המסלול הארוך ביותר מנקודה מסוימת
int  FindLongestPath(char matrix[N][M], int row, int col){
    if(matrix[row][col]==CANT_GO){ 
        return 0;
    } 
    /*מערך של הכיוונים
    כל המקומום הראשונים מסמנים את השורה
    וכל המקומות השני מסמנים את העמודה*/
    int step[4][2]={{-1,0}, {1,0},{0,-1},{0,1}};
    // אוסף בשביל האלכסונים ובפור עד 8
    {-1,1},{-1,-1},{1,1},{1,-1}
    int max=0;

    char where_we_are = matrix[row][col];
    matrix[row][col]=CANT_GO;

    for(int direction=0; direction<4;direction++){
        int temp_row=row+step[direction][0]; 
        int temp_col=col+step[direction][1];
        if(!isSafe(temp_row,temp_col)) continue;
        int length = FindLongestPath(matrix,temp_row,temp_col);
        if(length>max){
            max=length;
        }
    }
    matrix[row][col]=where_we_are;//מחזירים למצב הקודם
    return 1+max;
}


