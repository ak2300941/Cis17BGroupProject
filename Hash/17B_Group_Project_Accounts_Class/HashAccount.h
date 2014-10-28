/* 
 * File:   HashAccount.h
 * Author: Andrew Kim
 * Created on October 27, 2014, 7:36 PM
 */

#ifndef HASHACCOUNT_H
#define	HASHACCOUNT_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include "sha1.h"
using namespace std;

class HashAccounts {
public:
    HashAccounts();
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

#endif	/* HASHACCOUNT_H */

