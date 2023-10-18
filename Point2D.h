#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>

//El tipo de datos Point2D, que representa un punto bidimensional en el espacio cartesiano, estará definido por una clase concreta de igual nombre.


class Point2D{

        public:

        // Atributos

                double x; // coordenada X
                double y; // coordenada Y

        // Métodos
        
                //Método constructor. Por defecto, los ejes tomarán el valor 0.

                Point2D(double, double);

                //Calcula la distancia euclidiana entre dos puntos a y b.

                static double distance(const Point2D &a, const Point2D &b);

              //Sobrecarga global del operador ==. Comprueba si dos puntos son iguales.

               friend bool operator==(const Point2D &a, const Point2D &b);

                //Sobrecarga global del operador !=. Comprueba si dos puntos son diferentes.

               friend bool operator!=(const Point2D &a, const Point2D &b);

                //Sobrecarga global del operador <<. Recuerda incluir la cabecera <ostream> en el .h.
               
               friend std::ostream& operator<<(std::ostream &out, const Point2D &p);


};
            

#endif
