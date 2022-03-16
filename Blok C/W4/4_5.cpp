#include "fstream"
#include "iostream"
#include "string"
using namespace std;

void compress(string src_filename, string dest_filename){
    string zin;
    ifstream myfile(src_filename);
    ofstream myfile2(dest_filename);
    if (myfile.is_open()) {
        while(getline(myfile, zin)) {
            if(zin == ""){
                continue;
            }
            if (zin[0] == ' ') {
                for (unsigned int x = 0; x < zin.length(); x++) {
                    if (zin[x] == ' ') {
                        myfile2 << zin.substr(x, (zin.length() - x)) << '\n';
                        continue;
                    }
                }
            }
            else{
                myfile2 << zin << '\n';
            }
        }
        myfile.close();
        myfile2.close();
    }
    else{
        cout << "no file available";
    }
}


void vier_vijf(){
    compress("C:\\Users\\tomno\\C++\\les-opdrachten\\Blok C\\W4\\random.txt","C:\\Users\\tomno\\C++\\les-opdrachten\\Blok C\\W4\\random2.txt");
}