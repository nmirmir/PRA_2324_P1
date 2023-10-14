#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {

            private:
                    //Puntero al primer nodo de la secuencia enlazada que almacena los datos de la lista (de tipo T genérico)

                    Node<T>* first;

                    //Número de elementos que contiene la lista

                    int n;
          

            public:

                    //Método constructor sin argumentos. Inicializará los dos atributos de instancia (first será nullptr).

                    ListLinked();

                    //Método destructor. Se encargará de liberar la memoria dinámica reservada por los nodos Node<T> que componen la secuencia. Ver la nota de abajo para más detalles.

                    ~ListLinked();

                    //Sobrecarga del operador []. Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

                    T operator[](int pos);

                    //Sobrecarga global del operador << para imprimir una instancia de ListLinked<T> por pantalla. Recuerda incluir la cabecera <ostream> en el .h.

                    friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list){

                        out << "lista -->"<< list<< std::endl;

                        return out;

                    }

};
