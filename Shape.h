#ifndef SHAPE_H
#define SHAPE_H

#include <exception>
#include <string>
#include "Point2D.h"

class Shape{

        // Atributos

        protected:
                // Color de la figura. Solo podrá ser uno de estos tres valores: "red", "green", "blue".

                std::string color;
       // Métodos

                //Constructor por defecto, crea una figura de color rojo.

                Shape();

                //Crea una figura del color especificado. Lanzará la excepción std::invalid_argument si el color proporcionado no es válido.
                
                Shape(std::string color);

                //Devuelve el color de relleno de la figura.

                std::string get_color() const;

                //Modifica el color de relleno de la figura. Solo podrá ser uno de estos tres valores: "red", "green", "blue". 
                //Lanzará la excepción std::invalid_argument en caso de incumplir esta condición.

                void set_color(std::string c);

                // Método virtual puro. Calcula el área de una figura.

                virtual double area() const = 0;

                //Método virtual puro. Calcula el perímetro de una figura.
                
                virtual double perimeter() const = 0;

                // Método virtual puro. Traslada la figura sobre el espacio de representación, aplicando los incrementos de X e Y proporcionados.

                virtual void translate(double incX, double incY) = 0;

                //Método virtual puro. Imprimirá por pantalla información básica sobre la figura. 

                virtual void print() = 0;


};

        
#endif
