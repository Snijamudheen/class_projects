/*The Lo Shu Magic Square is a grid with 3 rows and 3 columns. The Lo Shu Magic Square has the following properties:
-The grid contains the numbers 1 through 9 exactly.
-The sum of each row, each column, and each diagonal all add up to the same number.
A two-dimensional array is used in this program to simulate a magic square. The program accepts a two-dimensional array as an argument, and determines whether the array is a Lo Shu Magic Square.*/

#include <iostream>
using namespace std;

bool isMagicSquare(int **matrix, int len) {
    int sum = 0;

    for (int i = 0; i < len; i++) { //calculates sum of the rows
            int rowSum = 0;
            for (int j = 0; j < len; j++) {
                rowSum += matrix[i][j];
                }

            if (sum == 0){
                sum = rowSum;
            }else{
                if(rowSum != sum){
                    return false;
                    }
                }
}
    for (int i = 0; i < len; i++) {  //calculates the sum of columns
            int colSum = 0;
            for(int j = 0; j < len; j++){
                        colSum += matrix[j][i];
                }
            if (colSum != sum) {
                        return false;
                }
        }

    int diagonalSum = 0;
    for (int i = 0; i < len; i++) { //calculates the sum of diagonals
            diagonalSum += matrix[i][i];
        }

        if (diagonalSum != sum) {
                return false;
        }

    // calculates the sum of the other diagonal
    int diaGonalSum = 0;
    for (int i = 0; i < len; i++) {
            diaGonalSum += matrix[i][len - 1 - i];
        }
        if (diaGonalSum != sum) {
                return false;
        }
        return true;
}

//prints the matrix
void printMatrix(int **matrix, int len) {
        for (int i = 0; i < len; i++) {
                for (int j = 0; j < len; j++) {
                        cout << matrix[i][j] << " ";
                }
                cout << endl;
        }
}

int main() {
    int size = 3;
    int **matrix = new int*[size];

    for(int i = 0; i < size; i++) {
                matrix[i] = new int[size];
                for(int j = 0; j < size; j++) {
                        cout << "Enter cell value at (" << i << ", " << j << "): ";
                        cin >> matrix[i][j];

                        if(matrix[i][j] < 0) {
                                cout << "Invalid entry.";
                                j--;
                        }
                }
        }
printMatrix(matrix, size);

if(isMagicSquare(matrix, size)){
            cout << "Matrix is a magic square" << endl;
        }else{
            cout << "Matrix is not a magic square" << endl;
        }
}
