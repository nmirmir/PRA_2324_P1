#include <iostream>
#include "Shape.h"

class Circle : public Shape {
            
        private: 

                // Atributos del círculo

                Point2D center;

                double radius;

        public:

                // Método constructor por defecto.
                // Crea un círculo del color que se haya establecido por defecto, centro (0,0) y radio 1.

                Cicle(){

//                        Shape::Shape(); 

                }

                // Método constructor (con parámetros).

                Circle(std::string color, Point2D center, double radius){

                        

                }

                // Método consultor del atributo center.

                Point2D get_center() const{

                        return center;

                }

                // Método modificador del atributo center.

                void set_center(Point2D p){

                        center = p;
                }
                // Método consultor del atributo radius.

                double get_radius() const{

                        return radius;

                }

                // Método modificador del atributo radius.

                void set_radius(double r){

                        radius = r;

                }

                // Sobrecarga global del operador <<. 
                // Recuerda incluir la cabecera <ostream> en el .h, así como declararlo friend en la clase.

               friend std::ostream& operator<<(std::ostream &out, const Circle &c){

                        out << c.center << c.radius << std::endl;

                        return out;

                }


                // MÉTODOS ABSTRACTOS HEREDADOS DE LA CLASE SHAPE
        
                // Método virtual puro. Calcula el área de una figura.

                double area() const override{

                        return 2 * 3.141598 *pow(radius,2);        

                }

                //Método virtual puro. Calcula el perímetro de una figura.
                
                double perimeter() const override{

                        return 2 * 3.141598 * radius;

                }

                // Método virtual puro.
                // Traslada la figura sobre el espacio de representación, aplicando los incrementos de X e Y proporcionados.

                // Para trasladar una figura, tendremos que trasladar sus vértices y moverlos todos a la vez con el incremento.
                void translate(double incX, double incY) override{

                        


                }

                //Método virtual puro. Imprimirá por pantalla información básica sobre la figura. 

                void print(){
                        
                        std::cout << radius << center << std::endl;
                        

                }


};
















