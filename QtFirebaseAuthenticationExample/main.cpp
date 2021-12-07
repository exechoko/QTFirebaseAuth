#include <QCoreApplication>
#include "authhandler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AuthHandler authHandler;

    //Set your API Key here
    //crear app web en firebase
    authHandler.setAPIKey("YOUR API KEY");

    //This is the call to sign a user up using Email/Password
    //CREAR USUARIO CON EMAIL Y CONTRASEÑA
    //authHandler.signUserUp("exe@gmail.com", "123456");

    //This is the call to sign an existing user in
    //INICIAR SESION CON EMAIL Y CONTRASEÑA
    authHandler.signUserIn("exe@gmail.com", "123456");

    return a.exec();
}
