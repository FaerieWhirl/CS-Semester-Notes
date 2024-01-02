#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

    //1. Declare a (3-dimensional) 2 by 3 by 5 array of unsigned integers and initialize all its elements to zero when you declare it. 
    //Iterate through the cells in the array, and set the value of each cell to be the product of its coordinates 
    //(the cell at 0, 0, 0 would have value 0, the cell at 1, 2, 4 would have value 8, etc.) 
    //and print (to cout) the coordinates and value of each cell. Build and run your program 
    //and show its output (with the coordinates and values of the array’s cells) as the answer to this exercise. 
    const int x = 2; //rows
    const int y = 3; //columns
    const int z = 5; //depth
    unsigned int array[x][y][z];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                array[i][j][k] = i*j*k;
                std::cout << "(" << i << ", " << j << ", " << k << "): " << array[i][j][k] << std::endl;
            }
        }
        
    }
    return 0;
}
