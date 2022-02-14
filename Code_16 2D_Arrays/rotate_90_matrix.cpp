#include<iostream>
using namespace std;

void PrintMatrix(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << ends;
        }
        cout << endl;
    }
}

// INPLACE SORTING FOR THE MATRIX IN 90DEG
void RotateMatrix_90(int arr[3][3]){
    for (int row = 0; row < 3 / 2; row++) {
        for (int col = row; col < 3 - row - 1; col++) {
 
            // Swap elements of each cycle in clockwise direction
            int temp = arr[row][col];
            arr[row][col] = arr[3 - 1 - col][row];
            arr[3 - 1 - col][row] = arr[3 - 1 - row][3 - 1 - col];
            arr[3 - 1 - row][3 - 1 - col] = arr[col][3 - 1 - row];
            arr[col][3 - 1 - row] = temp;
        }
    }

    PrintMatrix(arr);
}

// ROTATE 90 DEG WITHOUT INPLACE the matrix 
void rotate90Clockwise_NOT_IN_PLACE(int arr[3][3])
{
    int row=0,newarr[3][3];
    // printing the matrix on the basis of observations made on indices.
    for (int j = 0; j < 3; j++)
    {
        int col = 0;        
        for (int i = 3 - 1; i >= 0; i--){
            newarr[row][col] = arr[i][j];
            col++; 
        }
        row++;
    }

    PrintMatrix(newarr);
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rotate90Clockwise_NOT_IN_PLACE(arr);
    // RotateMatrix_90(arr);

    return 0;
}