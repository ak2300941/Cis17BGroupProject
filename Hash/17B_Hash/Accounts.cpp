/* 
 * File:   Accounts.cpp
 * Author: Andrew Kim
 * Created on October 20, 2014, 7:02 PM
 */

#include "Accounts.h"

Accounts::Accounts() {
    idSIZE=5;
    pSIZE=5;
}

//Store information
void Accounts::getInfo(){
    //Get ID & Password
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
}

//Start Hash
void Accounts::doHash(){
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
string Accounts::getHashID(){
    return idhexstring;
}

//Get Hash String for Password
char *Accounts::getHashP(){
    return passhexstring;
}



