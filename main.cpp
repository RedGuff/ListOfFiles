#include <string>
#include <iostream>
#include <filesystem>
#include <vector>
namespace fs = std::filesystem;
using namespace std;

void ListOfFiles(vector<string> &files, string path = "." ) { // "/" for computer with GNU/Linux, "." for local.
    for (const auto & entry : fs::directory_iterator(path)) {
string stingToTest = entry.path();
    if ((stingToTest.substr(stingToTest.length()-4)==".htm") ||(stingToTest.substr(stingToTest.length()-5)==".html")||(stingToTest.substr(stingToTest.length()-4)==".php")){

        files.push_back(entry.path());
    }
    }
}

void displayVectorString1D(vector<string> files) {
    for (int element=0; element<files.size(); ++element) {
        cout << files[element] << endl;
    }
}

int main() {
    vector<string> files;
    ListOfFiles(files, ".");
    displayVectorString1D(files);
}
