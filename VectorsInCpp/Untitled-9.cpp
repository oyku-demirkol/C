#include <iostream>
#include <vector>

using namespace std;
//defining the row and col
#define row_count 3
#define col_count 3

int main()
{
    //Initializing the vector of vectors
    vector<vector<int>> matrix;
    
    //Elements to insert in column
    int num = 10;
    
    //Inserting elements into vector
   for(int i=0; i<row_count;i++){
       vector<int> row;
       for(int j=0; j<col_count;j++){
           row.push_back(num);
           num += 5;
       }
       matrix.push_back(row);
   }
   
    //Displaying in 2D vector matrix
    cout << "2D matrix contains:"<<"\n";
    for(const auto& row : matrix){
        for(const int& value : row){
            cout << value << " ";
        }
        cout << endl;
    }
    matrix[2].pop_back();
    matrix[1].pop_back();
    matrix[0].pop_back();
    
    //Displaying in 2D vector traversal matrix
    cout<<"2D vector traversal after deletion:"<<"\n";
    for(const auto& row : matrix){
        for(const int& value : row){
            cout << value << " ";
        }
        cout << endl;
    }
    

    return 0;
}
