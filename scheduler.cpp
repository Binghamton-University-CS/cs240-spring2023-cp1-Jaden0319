#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<sstream>
#include<istream>
#include <iostream>
#include <iterator>

using namespace std;

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


int main() {
 
  string rawUserInput;

  showPrompt();
  
  while(getline(cin, rawUserInput)) {

    stringstream ss(rawUserInput);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> commands(begin, end); 

    if(commands.size() == 0) {
      continue;
    }
    
    if(commands[0].compare("build") == 0 && commands.size() == 5)  {
      cout << commands[0] << " course " << commands[1] << " " <<  commands[2] << " " << commands[3] << " " << commands[4] << endl;
    }
    else if(commands[0].compare("cancel") == 0 && commands.size() == 2) {
      cout << commands[0] << " course " << commands[1] << endl;
    }
    else if(commands[0].compare("enroll") == 0 && commands.size() == 5) {

      cout << commands[0] << " student " << commands[1] << " (" << commands[2] << ") " << commands[3] << " " << commands[4] << endl; 
    }
    else if(commands[0].compare("add") == 0 && commands.size() == 3) {
      cout << commands[0] << " student " << commands[1] << " into " << "course " << commands[2] << endl;
    }
    else if(commands[0].compare("drop") == 0 && commands.size() == 3) {
      cout << "remove student " << commands[1] << " from course " << commands[2] << endl;
    }
    else if(commands[0].compare("roster") == 0 && commands.size() == 2) {
      cout << commands[0] << " of course " << commands[1] << endl;
    }
    else if(commands[0].compare("schedule") == 0 && commands.size() == 2) {
      cout << commands[0] << " of student " << commands[1] << endl;
    }
    else if(commands[0].compare("quit") == 0 && commands.size() == 1) {
      break;
    }
    else {
      cout << "Command not recognized, please try again." << endl;
    }
  
    showPrompt();
  }
  
  return 0;
}





