#ifndef LISTADOUBLE_H
#define LISTADOUBLE_H
#include <iostream>
using namespace std;
class Nodedoble
{
    public:
        Nodedoble(int v);
        void showdoble(){cout<<valor<<" ";}
        void set_value(int v){this->valor=v;};
        int get_value(){return this->valor;};
        void set_next(Nodedoble*v){this->Next=v;};
        Nodedoble* get_next(){return this->Next;};
        void set_Back(Nodedoble*v){this->Back=v;};
        Nodedoble* get_Back(){return this->Back;};

    private:
    int valor;
    Nodedoble *Next;
    Nodedoble *Back;
};

class listadoble
{
    public:
        listadoble(){this->head=nullptr;};
        void adddoble(int v);
        void add_backdoble(int v);
        void show();
        int tamanio();
        void invertir(listadoble*A);
        void ordenar(listadoble*A);
        void eliminarelemetosrepetitivos();
        void eliminar(int valor);


    Nodedoble* head;
};
void unirlistadouble(listadoble*A,listadoble*B);
#endif // LISTADOUBLE_H
