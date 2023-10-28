#include <iostream>
#include "listadouble.h"
using namespace std;

int main()
{
    listadoble* A=new listadoble();
    A->adddoble(1);
    A->adddoble(3);
    A->adddoble(2);
    A->adddoble(5);
    A->adddoble(4);
    A->adddoble(7);
    A->adddoble(6);
    A->show();
    cout<<endl;
    A->invertir(A);
    cout<<endl;
    A->ordenar(A);
    cout<<endl;
    listadoble* B=new listadoble();
    B->add_backdoble(8);
    B->add_backdoble(9);
    B->add_backdoble(10);
    B->add_backdoble(11);
    B->add_backdoble(12);
    B->show();
    cout<<endl;
    unirlistadouble(A,B);
    cout<<endl;
    listadoble*C=new listadoble();
    C->add_backdoble(1);
    C->add_backdoble(2);
    C->add_backdoble(1);
    C->add_backdoble(3);
    C->add_backdoble(4);
    C->add_backdoble(5);
    C->add_backdoble(1);
    C->add_backdoble(2);
    C->add_backdoble(3);
    C->add_backdoble(5);
    C->show();
    C->eliminarelemetosrepetitivos();
    cout<<endl;
    C->show();
}
