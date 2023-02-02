#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<sstream>
using namespace std;


int main() {
  
  return 0;
}


void showPrompt() {

            cout << "Enter [\"build <crn> <department> <number> <name>\"" << std::endl <<
                  "       \"cancel <crn>\"" << std::endl <<
                  "       \"enroll <bnumber> <userid> <first> <last>\"" << std::endl <<
                  "       \"add <bnumber> <crn>\"" << std::endl <<
                  "       \"drop <bnumber> <crn>\"" << std::endl <<
                  "       \"roster <crn>\"" << std::endl <<
                  "       \"schedule <bnumber>\"" << std::endl <<
                  "       \"quit\"]" << endl <<
                  ": ";
}
