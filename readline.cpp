#include <iostream>
#include <fstream>
using namespace std;

void readLine(string fName, string& line);


void readLine(string fName, string& line)
{
    ifstream ofile(fName);
    getline(ofile, line);
    ofile.close();
}

int main()
{
    string line;
    readLine("token.log", line);
    cout << line <<endl;
    return 0;
}
