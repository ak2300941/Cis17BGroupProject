/* 
 * File:   Accounts.h
 * Author: Andrew Kim
 * Created on October 26, 2014, 2:45 PM
 */

#ifndef ACCOUNTS_H
#define	ACCOUNTS_H

class Accounts {
public:
    Accounts();
private:
    bool flag;  //True or False
    int type;
    char idhexstring[41],passhexstring[41];
    
};

#endif	/* ACCOUNTS_H */

