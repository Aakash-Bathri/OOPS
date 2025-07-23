#include<bits/stdc++.h>
#include<fstream>
using namespace std;


// this logger class only one responsiblity = log into a file
// if you want to delete a line in a log file = new class 
// this is the concept of single resposibility principle
class Logger{
private:
    string path;
public:
    Logger(string path){
        ifstream infile(path);
        if(infile.good()){
            cout << "The file already exists: " << path << endl;
        }else{
            ofstream outfile(path);
            if(outfile){
                cout << "File created" << endl;
            }else{
                cerr << "failed to create the file" << endl;
            }
        }
    }

    void log(string message){
        ofstream outfile(path, ios::app);
        if(outfile){
            outfile << message << endl;
        }else{
            cerr << "failed to append the message" << endl;
        }
    }
};