#include <ostream>
#include<iostream>
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

	static const int MINSIZE;		

//Método privado que se encargará de redimensionar el array al tamaño especificado, con el objetivo de incrementar su capacidad (si está lleno), o bien para reducirla (si está "demasiado vacío"). Ver nota más abajo para más detalles.

	void resize(int new_size){
	
			
		

		for(int pos; pos < new_size; pos++){
			
			arr[new_size] = arr[new_size];

		}

		delete[] arr;
	
	}
  

    public:
//Método constructor sin argumentos. Se encargará de reservar memoria dinámica para crear un array de MINSIZE elementos de tipo T, además de inicializar el resto de atributos de instancia. 

        ListArray();

//Método destructor. Se encargará de liberar la memoria dinámica reservada.

	~ListArray();

//Sobrecarga del operador []. Devuelve el elemento situado en la posición pos. Lanza una excepción std::out_of_range si la posición no es válida (fuera del intervalo [0, size()-1]).

	T operator[](int pos);

//Sobrecarga global del operador << para imprimir una instancia de ListArray<T> por pantalla. Recuerda incluir la cabecera <ostream> en el .h.

	friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){



	}


	virtual void insert(int pos, T e){

		if(e > 0 && e < size()){

			arr[pos] = e;

		}else{

			std::cout << "out_of_range"<<std::endl;
		
		}
	
	}

	virtual void append(T e){

		arr[max] = e;

	}	

	virtual void prepend(T e){

		arr[0] = e;

	}

	virtual T remove(int pos){

		if(pos < size()-1 && pos >= 0){

			return arr[pos];	
	
			delete[] arr[pos];
		}else{

			std::cout<< "out_of_range"<<std::endl;
		}
	}	

	virtual T get(int pos) const {

		if(pos < size()-1 && pos >= 0){

			return arr[pos];

		}else{
					
			std::cout<< "out_of_range"<<std::endl;

		}	



	}

	virtual int search(T e) const {

		int i = 0;

		for( i ; i < size(); i++){

			if(arr[i] == e){

				return i;

			}


		}
		
		return -1;

	}

	virtual bool empty() const{

		for(int i; i < size(); i++){

			if(arr[i]!= nullptr){

				return true;			

			}

		}

		return false;


	}

	virtual int size() const {

		int tamanyo = 0;		

		for(tamanyo ; tamanyo < tamanyo++ ; tamanyo++){	

			if(arr[tamanyo] == nullptr){

				return tamanyo;
			
			}
			
		}

	}

  
};
