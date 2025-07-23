#include<bits/stdc++.h>
#include<fstream>
using namespace std;

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

int main(){
    try{
        // ofstream = fstream file("file name", ios::)
        ofstream file("static.cpp", ios::app);
        ifstream check("static.cpp");

        if(check.peek() == ifstream::traits_type::eof()){
            cout << "File has been created" << endl;
        }else{
            cout << "Already exist" << endl;
        }
        file.close();
        check.close();
    }catch (...){
        cout << "An error occured" << endl;
    }


    Logger logger("/Users/aakashbathri/Desktop/OOPS/abc_filehandling.txt");
    logger.log("Hello this is my first log");
    logger.log("Hello this is my second log");
    logger.log("Hello this is my third log");

    return 0;
}
