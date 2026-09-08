#include <stdio.h>
#include <stdlib.h>
#include "pieza.h"
#include "tablero.h"


int main()
{
    t_pieza pieza;
    t_tablero tablero;
    pieza=crearPieza();
    mostrarpieza(&pieza);
    printf("\n");

    /*

    TEST DE FICHAS RANDOM Y ROTACION


    rotarPieza(&pieza);
    printf("\n");
    mostrarpieza(&pieza);
    rotarPieza(&pieza);
    printf("\n");
    mostrarpieza(&pieza);
    rotarPieza(&pieza);
    printf("\n");
    mostrarpieza(&pieza);*/
    tablero=inicializarTablero();
    colocarPieza(&tablero,&pieza);
    mostrartablero(&tablero);


    return 0;
}
