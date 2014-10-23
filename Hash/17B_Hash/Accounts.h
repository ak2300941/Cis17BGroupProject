/* 
 * File:   Accounts.h
 * Author: Andrew Kim
 * Created on October 20, 2014, 7:02 PM
 */

#ifndef ACCOUNTS_H
#define	ACCOUNTS_H\

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include "sha1.h"
using namespace std;

class Accounts {
public:
    Accounts();
    void getInfo();
    void doHash();
    string getHashID();
    char *getHashP();
private:
    unsigned char idhash[20],passhash[20];
    char idhexstring[41],passhexstring[41];
    string id;
    string pass;
    int idSIZE,pSIZE;
};

#endif	/* ACCOUNTS_H */

