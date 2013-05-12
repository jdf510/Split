#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    vector<string> training;
    vector<string> test;
    vector<string> test2;

ifstream fin("testgames.txt");
    if(fin.fail())
        {
            cerr << "Error reading training1" << endl;
        }
    else
        {
            string temp;
            while(fin >> temp)
                {
                    training.push_back(temp);
                }
        }
fin.close();

ofstream fout("test1.txt");
    if(fout.fail())
        {
            cerr << "Error writing G" << endl;
        }
    else
        {
        for(int i=0; i < training.size(); i += 8)
            {
                fout << training[i] << endl;
                fout << training[i+1] << endl;
                fout << training[i+2] << endl;
                fout << training[i+3] << endl;
                cout << "test1 " << i << "/" << training.size() << endl;
            }
        }
fout.close();

ofstream fout2("test2.txt");
    if(fout2.fail())
        {
            cerr << "Error writing G" << endl;
        }
    else
        {
        for(int i=4; i < training.size(); i += 8)
            {
                fout2 << training[i] << endl;
                fout2 << training[i+1] << endl;
                fout2 << training[i+2] << endl;
                fout2 << training[i+3] << endl;
                cout << "test2 " << i << "/" << training.size() << endl;
            }
        }
fout2.close();

   return 0;
}
