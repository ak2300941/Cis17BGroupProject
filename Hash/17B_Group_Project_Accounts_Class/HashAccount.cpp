/* 
 * File:   HashAccount.cpp
 * Author: Andrew Kim
 * Created on October 27, 2014, 7:36 PM
 */

#include "HashAccount.h"

HashAccounts::HashAccounts() {
    idSIZE=5;
    pSIZE=5;
}

//Store information
void HashAccounts::getInfo(){
    //Get ID & Password
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    cout<<endl;
}

//Start Hash
void HashAccounts::doHash(){
    //Get the ID and Password SIZE
    idSIZE=id.size();
    pSIZE=pass.size();
    //Hash ID
    sha1::calc(id.c_str(),idSIZE,idhash);
    sha1::toHexString(idhash,idhexstring);
    //Hash Password
    sha1::calc(pass.c_str(),pSIZE,passhash);
    sha1::toHexString(passhash,passhexstring);
}

//Get Hash String for ID
string HashAccounts::getHashID(){
    return idhexstring;
}

//Get Hash String for Password
char *HashAccounts::getHashP(){
    return passhexstring;
}

