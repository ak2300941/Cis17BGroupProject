/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on October 26, 2014, 2:44 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Accounts.h"
#include "HashAccount.h"
#include "sha1.h"
using namespace std;

//Function Prototypes
//Create Account Function
void createAcc();
void searchAcc();
////////////////
void Menu();
int getN();
void def(int);
////////////////

int main(int argc, char** argv) {
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    createAcc();break;
        case 2:    searchAcc();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=2);
    return 0;
}


void createAcc(){
    //Creating Account Class
    HashAccounts test;
    int checki=1,checkp=1;
    do{
        //Input ID and Password
        test.getInfo();
        //Do the Hash
        test.doHash();
        //Check if Account or Password is already made
        string line;
        //Turn Hash from char array to string
        string id=string(test.getHashID());
        string pass=string(test.getHashP());
        fstream dataid;
        dataid.open("hashid.txt");
        while(dataid.is_open()){
            getline(dataid,line);
            if(line==id){
                cout<<"ID is already being used"<<endl;
                dataid.close();
                checki=0;
                break;
            }
            if(dataid.eof()){
                checki=1;
                break;
            }
        }
        fstream datapass;
        datapass.open("hashp.txt");
        while(datapass.is_open()){
            getline(datapass,line);
            if(line==pass){
                cout<<"Password is already being used"<<endl;
                datapass.close();
                checkp=0;
                break;
            }
            if(datapass.eof()){
                checkp=1;
                break;
            }
        }
        cout<<endl;
    }while(checki==0&&checkp==0);
    //Push ID Hash to file
    fstream dataid;
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
}

void searchAcc(){
    //Creating Account Class
    HashAccounts test;
    int checki=1,checkp=1;
    //Input ID and Password
    test.getInfo();
    //Do the Hash
    test.doHash();
    //Check if Account or Password is already made
    string line;
    //Turn Hash from char array to string
    string id=string(test.getHashID());
    string pass=string(test.getHashP());
    fstream dataid;
    dataid.open("hashid.txt");
    while(dataid.is_open()){
        getline(dataid,line);
        if(line==id){
            dataid.close();
            checki=0;
            break;
        }
        if(dataid.eof()){
            checki=1;
            break;
        }
    }
    fstream datapass;
    datapass.open("hashp.txt");
    while(datapass.is_open()){
        getline(datapass,line);
        if(line==pass){
            datapass.close();
            checkp=0;
            break;
        }
        if(datapass.eof()){
            checkp=1;
            break;
        }
    }
    cout<<endl;
    if(checki==0&&checkp==0)cout<<"Account found"<<endl;
    else cout<<"Account not found"<<endl;
    cout<<endl;
    
}

void Menu(){
    cout<<"Menu for Accounts"<<endl;
    cout<<"Type 1 to Create New Account"<<endl;
    cout<<"Type 2 to Search for an Account"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

