#include<stdio.h>
int main(){
    int tm[5][5] = {
        {11, 12, 13, 14, 15}, 
        {21, 22, 23, 24, 25}, 
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45}, 
        {51, 52, 53, 54, 55}
    }; 
    int i = 0, tr[3] = {0,1,3};
    int tc[3] = {2,2,1};
    int row , clm, size = 100;
    printf("Enter Current Row (5):");
    scanf("%d", &row);
    printf("Enter Current Column (5):");
    scanf("%d", &clm);
    if ( row >= 4 || clm >= 4)
    {
        printf("Invalid Input");
        return 1;
    }
    
    for (i = 0; i < size; i++)
    {   
        if (  row == tr[i] &&  clm == tc[i])
        {
            printf(" Treasure Found at (%d,%d) %d", row , clm, tm[row][clm]);
            return 0;      

        }
        else if ( row != tc[i])
        {
            
            printf("(The first three clues are 13, 20, 21)\n");
            printf("Enter Current Row (5):");
            scanf("%d", &row);
            printf("Enter Current Column (5):");
            scanf("%d", &clm);
            if (  row == tr[i] &&  clm == tc[i])
            {
            printf(" Treasure Found at (%d,%d) %d", row , clm, tm[row][clm]);
            return 0;       
            }
        }
        
    }
    return 0;
}