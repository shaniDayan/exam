// עבור מטריצה שהיא לא אפס אחד אלא מסלול של מספרים עולים שיש חשיבות לסדר
int numOfPath(char matrix[M][N], int row, int col, int current, int end){
    if(!isOkToMove(moves, current, matrix[row][col]))return 0;
    if(matrix[row][col]==-1)return 0;
    if(current==end) return 1;

    int step[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,1},{-1,-1},{1,1},{1,-1}};
    int sum=0;
    char whereWeAre = matrix[row][col];
    letter[row][col]=-1;
    for(int dir=0;dir<8;dir++){
        int temp_row=row+step[dir][0];
        int temp_col=col+step[dir][1];
        if(!isSafe(temp_row,temp_col)) continue;
        sum += numOfPath(matrix, temp_row, temp_col ,current+1, end);
    }
    letter[row][col]=whereWeAre;
    return sum; 
}
