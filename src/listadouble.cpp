#include "listadouble.h"
Nodedoble::Nodedoble(int v){
    this->valor=v;
    this->Next=nullptr;
    this->Back=nullptr;
}
void listadoble::adddoble(int v){
    Nodedoble*dato=new Nodedoble(v);

    if(this->head==nullptr){
        this->head=dato;
    }else{
        dato->set_next(this->head);
        head->set_Back(dato);
        this->head=dato;
    }
};
void listadoble::add_backdoble(int v){
    Nodedoble*dato=new Nodedoble(v);
    if(this->head==nullptr){
        this->head=dato;
    }else{
        Nodedoble*dato2=this->head;
        while(dato2->get_next()!=nullptr){
            dato2=dato2->get_next();
        }
        dato2->set_next(dato);
        dato->set_Back(dato2);
    }
};

void listadoble::show(){
    Nodedoble*dato=this->head;
    while(dato!=nullptr){
        dato->showdoble();
        dato=dato->get_next();
    }
}
void listadoble::invertir(listadoble* A) {
    Nodedoble* actual = A->head;
    Nodedoble* temporal = nullptr;

    while(actual!=nullptr){
        temporal=actual->get_Back();
        actual->set_Back(actual->get_next());
        actual->set_next(temporal);
        if (temporal!=nullptr){
            A->head=actual;
        }
        actual=actual->get_Back();
    }
    A->show();
}

void listadoble::ordenar(listadoble* A) {
    int n = A->tamanio();
    int aux;
    for (int i = 0; i < n - 1; i++) {
        Nodedoble* actual = A->head;
        for (int j = 0; j < n - i - 1; j++) {
            if (actual->get_value() > actual->get_next()->get_value()){
                aux=actual->get_value();
                actual->set_value(actual->get_next()->get_value());
                actual->get_next()->set_value(aux);
            }
            actual = actual->get_next();
        }
    }
    A->show();
}
int listadoble::tamanio(){
    Nodedoble*dato=this->head;
    int cont=0;
    while(dato!=nullptr){
        cont++;
        dato=dato->get_next();
    }
    return cont;
}
void unirlistadouble(listadoble* A, listadoble* B) {
    if (A->head==nullptr) {
        A->head=B->head;
    }else if(B->head!=nullptr){
        Nodedoble* ultimoNodoA=A->head;
        while(ultimoNodoA->get_next()!=nullptr) {
            ultimoNodoA=ultimoNodoA->get_next();
        }
        ultimoNodoA->set_next(B->head);
        B->head->set_Back(ultimoNodoA);
    }
    B->head=nullptr;
    A->show();
}
void listadoble::eliminarelemetosrepetitivos() {
    Nodedoble* actual = this->head;
    while (actual != nullptr) {
        Nodedoble* comparador = actual->get_next();
        while (comparador != nullptr) {
            if (actual->get_value()==comparador->get_value()) {
                Nodedoble* siguiente=comparador->get_next();
                if (comparador->get_Back()!= nullptr) {
                    comparador->get_Back()->set_next(siguiente);
                }
                if (siguiente!=nullptr) {
                    siguiente->set_Back(comparador->get_Back());
                }
                delete comparador;
                comparador=siguiente;
            } else {
                comparador=comparador->get_next();
            }
        }
        actual=actual->get_next();
    }
}





