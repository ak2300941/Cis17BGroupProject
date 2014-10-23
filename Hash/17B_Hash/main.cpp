/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Purpose: Hash
 * Created on October 19, 2014, 10:28 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Accounts.h"
using namespace std;

int main(int argc, char** argv) {
    //Creating Account Class
    Accounts test;
    //Input ID and Password
    test.getInfo();
    //Do the Hash
    test.doHash();
    fstream dataid;
    //Push ID Hash to file
    dataid.open("hashid.txt",fstream::out|fstream::app);
    if(dataid.is_open()){
        dataid<<test.getHashID()<<endl;
        dataid.close();
    }
    //PUSH Password Hash to file
    fstream datapass;
    datapass.open("hashp.txt",fstream::out|fstream::app);
    if(datapass.is_open()){
        datapass<<test.getHashP()<<endl;
        datapass.close();
    }
    return 0;
}

