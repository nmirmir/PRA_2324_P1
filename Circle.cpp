#include <iostream>
#include "Circle.h"


      
                // Método constructor por defecto.
                // Crea un círculo del color que se haya establecido por defecto, centro (0,0) y radio 1.

                Circle::Circle(){

                        color = "red";
                        radius = 1.0;
                        center = Point2D(0,0);

                }

                // Método constructor (con parámetros).

                Circle::Circle(std::string color, Point2D center, double radius){

                        

                }

                // Método consultor del atributo center.

                Point2D Circle::get_center() const{

                        return center;

                }

                // Método modificador del atributo center.

                void Circle::set_center(Point2D p){

                        
                        center = p;
                }
                // Método consultor del atributo radius.

                double Circle::get_radius() const{

                        return radius;

                }

                // Método modificador del atributo radius.

                void Circle::set_radius(double r){

                        radius = r;

                }

                // Sobrecarga global del operador <<. 
                // Recuerda incluir la cabecera <ostream> en el .h, así como declararlo friend en la clase.

               std::ostream& operator<<(std::ostream &out, const Circle &c){

                        out << c.center << c.radius << std::endl;

                        return out;

                }


                // MÉTODOS ABSTRACTOS HEREDADOS DE LA CLASE SHAPE
        
                // Método virtual puro. Calcula el área de una figura.

                double Circle::area() const {

                        return 2 * 3.141598 *pow(radius,2);        

                }

                //Método virtual puro. Calcula el perímetro de una figura.
                
                double Circle::perimeter() const {

                        return 2 * 3.141598 * radius;

                }

                // Método virtual puro.
                // Traslada la figura sobre el espacio de representación, aplicando los incrementos de X e Y proporcionados.

                // Para trasladar una figura, tendremos que trasladar sus vértices y moverlos todos a la vez con el incremento.
                void Circle:: translate(double incX, double incY) {

                        


                }

                //Método virtual puro. Imprimirá por pantalla información básica sobre la figura. 

                void Circle::print(){
                        
                        std::ostream& operator<<(std::ostream &out,const Circle &c);
                        

                }


















