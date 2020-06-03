#ifndef CASE_H
#define CASE_H

template <typename T>
class Case
{
private:
    T* pion;
public:
    Case(T* p);
    T* getPion() const;
    //pas de setters puisque la case servira de pion sur le plateau, la case ne changera jamais de pion
};

#endif // CASE_H
