//
//  Lab VI Part I
//
//  Created by Edgar Esparza on 6/22/15.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream OutFile;
    OutFile.open("number.txt",ios::app);
    OutFile<<" 224 543";
    OutFile.close();
    
    int num, sum = 0, count = 0;
    ifstream inFile("number.txt",ios::in);
    
    if (inFile.fail())
    {
        cout << "The file does not exist." << endl;
        return 0;
    }
   
    while ( inFile >> num )
    {
        count++;
        sum += num;
    }
    
    inFile.close();
    
    
    cout << "The file contained: " << count <<" numbers"<<endl;
    cout << "The sum of the numbers = " << sum << endl;
    
    return 0;
}
