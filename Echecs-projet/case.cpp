#include "case.h"
template<typename T>

Case<T>::Case(T* p){
    pion=p;
}

template<typename T>

T* Case<T>::getPion() const{
    return pion;
};
