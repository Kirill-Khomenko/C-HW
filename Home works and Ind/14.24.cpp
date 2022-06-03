#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    /* file_input.txt :
        IN UNDERTAKING to describe the recent and strange incidents in our town,
        till lately wrapped in uneventful obscurity,
        I find myself forced in absence of literary skill to begin my story rather far back,
        that is to say, with certain biographical details
        concerning that talented and highly-esteemed gentleman, Stepan Trofimovitch Verhovensky.
        I trust that these details may at least serve as an introduction, while my projected story itself will come later.
    */

    string infilename = "file_input.txt";
    string outfilename = "file_output.txt";

    ifstream fin(infilename);
    if (!fin.good()) exit(1);
    string line;
    vector<string> vec;
    while (getline(fin, line)){
        vec.push_back(line);
    }
    fin.close();

    ofstream fout1(outfilename);
    if (!fout1.good()) exit(1);
    else{
        for(auto i: vec){
            fout1 << i << endl;
        }
    }
    fout1.close();

    // append lines to file_output with more than 60 characters
    ofstream fout2(outfilename,  std::ios::app);
    if (!fout2.good()) exit(1);
    else{
        fout2 << endl;
        fout2 << "Lines with more than 60 characters: " << endl;
        for(auto i: vec){
            if (i.size() > 60)
                fout2 << i << endl;
        }
    }
    fout2.close();
    return 0;
}
