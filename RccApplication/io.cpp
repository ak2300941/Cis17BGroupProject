#include "io.h"

#include <QtCore>

#include "settings.h"

IO::IO() {
    userFile = "users.ini";
}

/**
 * Saves a user to the local files
 * @brief IO::saveUser
 * @param email
 * @param pass
 * @author Michael
 */
void IO::saveUser( QString email, QString pass ){
    Settings settings( userFile );
    settings.loadSettings();
    if( settings.getSetting( email ) == "" ){
        settings.saveSetting( email, pass );
    }
}

/**
 *
 * @brief IO::checkUser
 * @param email
 * @param pass
 * @author Michael
 * @return
 */
bool IO::checkUser( QString email, QString pass ){
    Settings settings( userFile );
    settings.loadSettings();
    if( settings.getSetting( email ) == email ) return true;

    return false;

}
