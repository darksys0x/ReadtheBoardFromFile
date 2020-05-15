#include<iostream>
#include<fstream>
#include<string>
#include <vector>
// using namespace std;
using std::cout;
using std::ifstream;
using std::string;
using std::vector;


void readFromFile (string path){

    //create object from fstream method 
    ifstream myfile(path);

    //declare varibale from string to used for getline 
    string line;
    if(myfile){
        cout<<"your file has created"<<"\n";

        while (getline(myfile , line))
        {
            cout<<line;
        }

        
    }
    





}
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}


int main(){

 string path = " /Users/hamadalshehri/code/wdi/c++/ReadtheBoardFromFile/1.board";

  readFromFile(path);
//PrintBoard(board);

  

    return 0 ;
}