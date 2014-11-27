#ifndef TABLA_H
#define TABLA_H

#include "robot.hpp"

class tablero{
    private:
      cuadrado_t **tabla_;
      robot_t *automata;
      int n_filas;
      int n_columnas;
      int fin_x;
      int fin_y;
   public:
      tablero(int,int);
      ~tablero();
      bool introducir_automata(int,int);
      bool introducir_arboles(int,int);
      bool introducir_empresa(int,int);
      void rellenar_paso_natural();
      void marcar_recorridoAutomata();
      void mostrar_tablero();
     
} ;






#endif // TABLA_H