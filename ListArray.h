#include <ostream>
#include<iostream>
#include<exception>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    private:

//Puntero al inicio del array que almacenará los elementos de la lista de forma contigua. Estos elementos son de tipo T genérico.

        T* arr;

//Tamaño actual del array. Podrá alterarse durante la vida de la lista, en caso necesario (ver método resize(int)).

	int max;

//Número de elementos que contiene la lista.

	int n;

//Tamaño mínimo del array. Deberá inicializarse a 2. 

	static const int MINSIZE = 2;		

//Método privado que se encargará de redimensionar el array al tamaño especificado, con el objetivo de incrementar su capacidad (si está lleno), o bien para reducirla (si está "demasiado vacío"). Ver nota más abajo para más detalles.

	void resize(int new_size){
	
		T* arr_new = new T[new_size];			
		

		for(int pos = 0; pos < new_size; pos++){
			
			arr_new[pos] = arr[pos];                        

		}

                delete[] arr;

                arr = arr_new;

                max = new_size;	
	}
  

    public:
//Método constructor sin argumentos. Se encargará de reservar memoria dinámica para crear un array de MINSIZE elementos de tipo T, además de inicializar el resto de atributos de instancia. 

        ListArray(){

                T* arr = new T[MINSIZE];

                n = 0;

                max = MINSIZE;


	}

//Método destructor. Se encargará de liberar la memoria dinámica reservada.

	~ListArray(){

                delete[] arr;

        }

//Sobrecarga del operador []. Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

	T operator[](int pos){

                if(pos > max-1 && pos < 0){

                        return arr[pos];

                }else{

                     throw std::out_of_range ("la posición no es válida");

                }

	}

//Sobrecarga global del operador << para imprimir una instancia de ListArray<T> por pantalla. Recuerda incluir la cabecera <ostream> en el .h.

	friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){

		out << list << std::endl;
                
                return out;

	}

       // inserta el elemento e en la posición pos. Lanza una excepción std::out_of_range si la posición pos no es válida (fuera del intervalo [0, size()]).
                
	void insert(int pos, T e) override {

           int i = max -1;

             for(; i <= pos; i--){

                if(n == max -1){
                     
                     int new_size = max * 2;

                     throw std::out_of_range ("la posición no es válida");

                     resize(new_size);

                }else{


                     arr[i -1] = arr[i];
                     

                }


           }

             arr[pos] = e;
	     
             n++;

	}

        //inserta un elemento al final de la lista, para ello habrá que tener en cuenta que haya  espacio en el la lista

	void append(T e) override {

            if(e > max ){

                int new_size = max * 2;

                throw std::out_of_range("posición no válida");

                resize(new_size);

            }else{

		arr[max] = e;

            }
	}	

	void prepend(T e) override  {

		arr[0] = e;

	}

        //Elimina y devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

	T remove(int pos) override  {

            int i = pos + 1, var_ret_pos = arr[pos];

            for(; i -1 == pos; i++ ){

                if(pos > max -1 && pos < 0){
                        
                        int new_size = max * 2;

		        throw std::out_of_range("posición no válida");
                        
                        resize(new_size);

                }else{

                        arr[i] = arr[i -1];
 
                }
                


            }
	        
                return var_ret_pos;	


		
	}	
//Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).
	
        T get(int pos) const override  {

		if(pos < max-1 && pos >= 0){

			return arr[pos];

		}else{
					
		
		throw std::out_of_range("posición no válida");
                
                }	



	}
//Devuelve la posición en la que se encuentra la primera ocurrencia del elemento e, o -1 si no se encuentra.
	int search(T e) const override  {

		int i = 0;

		for( i ; i <= max-1 ; i++){

			if(arr[i] == e){

				return i;

			}

                }
		
		return -1;

	}

	bool empty() const override   {

		if(arr == nullptr){

                        return true;

                }else{

                        return false;

                }


	}

	int size() const override  {

                return max;
	}

  
};
