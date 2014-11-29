#ifndef IO_H
#define IO_H

#include <QtCore>

class IO
{
public:
    IO();

    void saveUser( QString, QString );

    bool checkUser( QString, QString );
private:
    QString userFile;
};

#endif // IO_H
