#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string cutstring(string text, string strInit, string strEnd);

string cutstring(string text, string strInit, string strEnd)
{
  string result;
  int iInit = text.find( strInit );
  int iEnd = text.find( strEnd );
  result = text.substr( iInit + strInit.length(), iEnd - strEnd.length() );

  return result; 	
}

int main()
{
    string line = "ini oi oi oi end";
    string result = cutstring(line, "ini", "end" );
    cout << result <<endl;
    return 0;
}
