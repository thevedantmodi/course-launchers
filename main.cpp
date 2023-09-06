#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

const string USAGE = "Usage: course [course-code]\n";

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cerr << USAGE;
        exit(EXIT_FAILURE);
    }
    
    string course = argv[1];
    string command =   "open /Users/vedantmodi/Desktop/course-work/F23/"
                        + course + "/.vscode/" + course + ".code-workspace";

    system(command.c_str());
    return 0;
}
