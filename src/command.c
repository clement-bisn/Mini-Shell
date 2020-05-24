#include "ligne_commande.h"
#include "headers/command.h"
#include <unistd.h>

void executer_ligne_command()
{
    int flag = 0;
    int nb = 0;

    char *** cmd = ligne_commande (&flag, &nb);
    if (flag == 1 && !fork())
        execvp(*cmd[0], *cmd);
    else if (flag == 0)
        execvp(*cmd[0], *cmd);
    libere(cmd);
}
