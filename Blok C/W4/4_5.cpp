#include "fstream"
#include "iostream"
#include "string"
using namespace std;

void compress(string src_filename, string dest_filename){
    string zin;
    ifstream myfile(src_filename);
    ofstream myfile2(dest_filename);
    if (myfile.is_open() ) {
        while(getline(myfile, zin)) {
            for ( char c : zin){
//                if ( c == '\t'){
//                    zin.erase('\t');
//                }
                if (zin.length() == 0){
                    zin.erase();
                }
            }
            cout << zin << endl;
        }
        myfile.close();
    }
    else{
        cout << "no file available";
    }
}


void vier_vijf(){
    compress("C:\\Users\\tomno\\C++\\les-opdrachten\\Blok C\\W4\\random.txt","C:\\Users\\tomno\\C++\\les-opdrachten\\Blok C\\W4\\random2.txt");
}