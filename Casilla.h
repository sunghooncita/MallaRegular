
#ifndef STL_CASILLA_H
#define STL_CASILLA_H
#include <list>

template <typename T>
class MallaRegular;

template<typename T>
class Casilla{
    std::list<T> puntos;
public:
    friend class MallaRegular<T>;
    Casilla(): puntos() {}
    void insertar(const T &dato) { puntos.push_back(dato); }
    T *buscar(const T &dato);
    bool borrar(const T &dato);
};


template<typename T>
T *Casilla<T>::buscar(const T& dato){
    typename std::list<T>::iterator it;
    it = puntos.begin();
    for (;it != puntos.end(); ++it){
        if (*it == dato)
            return &(*it);
    }
    return 0;
}

template<typename T>
bool Casilla<T>::borrar(const T& dato){
    typename std::list<T>::iterator it;
    it = puntos.begin();
    for (;it != puntos.end(); ++it){
        if (*it == dato) {
            puntos.erase(it);
            return true;
        }
    }
    return false;
}
#endif //STL_CASILLA_H
