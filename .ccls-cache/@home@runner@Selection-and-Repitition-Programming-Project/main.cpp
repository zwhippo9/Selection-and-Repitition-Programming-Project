#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//merge two files based 
void mergeFiles(const string &file1Path, const string &file2Path, const string &outputFile) {
  ifstream file1(file1Path);
  ifstream file2(file2Path);
  ofstream output(outputFile);
  
  string line1, line2;

//read first line of both files
  getline (file1, line1);
  getline (file2, line2);

//merging the files
  while(!file1.eof() && !file2.eof()) {
      if (line1 < line2) {
        output << line1 << endl;
        getline(file1, line1);
      } else {
        output << line2<< endl;
        getline(file2, line2);
      }
  }
//for remaining items in file
    while (!file1.eof()) {
        output << line1 << endl;
        getline(file1, line1);
    }
    while (!file2.eof()) {
        output << line2 << endl;
        getline(file2, line2);
    }
//close files
  file1.close();
  file2.close();
  output.close();
}
int main() {
  
string file1;
string file2;
string output;
//request file from user
    cout << "Enter the name of the first input file: ";
    cin >> file1;
    cout << "Enter the name of the second input file: ";
    cin >> file2;
    cout << "Enter the name of the output file: ";
    cin >> output;
//call mergeFiles function
    mergeFiles(file1, file2, output);
//output
    cout  << "Completed " << output << endl;
    return 0;
  }