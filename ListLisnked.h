#include <ostream>
#include <exception>
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

                    ListLinked(){

                        first = nullptr;
                        n = 0;


                    }

                    //Método destructor. Se encargará de liberar la memoria dinámica reservada por los nodos Node<T> que componen la secuencia. Ver la nota de abajo para más detalles.

                    ~ListLinked(){

                        Node<T>* aux = first;
                        
                        while(n != 0){

                                aux = first;
                                first = first->next;
                                delete aux;
                                

                        }

                        delete first;

                    }

                    //Sobrecarga del operador []. Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

                    T operator[](int pos){

                        if(pos < 0 || pos > size()-1){

                                throw std::out_of_range("posición no válida");

                        }
                        
                        Node<T>* aux = first;

                        while(aux->next != pos){

                                aux = aux->next;

                        }

                        aux->data = aux[pos];
                        


                    }

                    //Sobrecarga global del operador << para imprimir una instancia de ListLinked<T> por pantalla. Recuerda incluir la cabecera <ostream> en el .h.

                    friend std::ostream& operator<<(std::ostream &out, const ListLinked<T> &list){

                        Node<T>* aux = first;

                        while(aux->next != nullptr){

                                out<<aux->data<<std::endl;
                                aux = aux->next;

                        }


                        return out;

                    }

        //Inserta el elemento e en la posición pos. Lanza una excepción std::out_of_range si la posición pos no es válida (fuera del intervalo [0, size()]).
        
        void insert(int pos, T e){


        }

        //Inserta el elemento e al final de la lista.

        void append(T e){


        }

        //Inserta el elemento e al principio de la lista.

        void prepend(T e){


        }
        
        //Elimina y devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).


        T remove(int pos){


        }

        //Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

        get(int pos){


        }

        //Indica si la lista está vacía.

        bool empty(){


        }

        //Devuelve el número de elementos de la lista.

        int size(){


        }
};
