
typedef struct Nodo* Apuntador_Nodito;

typedef struct {
    int info;
    Nodo* sig;
}Nodo;

typedef struct {
    Nodo * ApL;          // Apuntador_Nodito ApL;0
    Nodo * ApN;          // Apuntador_Nodito Apn;
}ENCAB;

Nodo * CrearNodo (int Elem){        //   Apuntador_Nodito CrearNodo (int Elem)
    Nodo* P;                         // Apuntador_Nodito P;
    p = Nodo* malloc(sizeof(Nodo);     // new (P);
    p->info= Elem;
    p->sig=NULL;
    return p;
}

Nodo * CrearLista(int n){
    Nodo* p,l;
   //ENCAB * Cabeza;
    p= CrearNodo(1);
    int cont=2;
    //l=p;
    while (cont<=n){
        l=CrearNodo(cont);
        l->sig=p;
        p=l;
        cont++;
    }
    return l;
}

ENCAB * CrearEncabezado(Nodo * lista) {
   ENCAB * Cabeza;
   Cabeza= (ENCAB*)malloc(sizeof (ENCAB));
   Cabeza->ApL= lista;
   Cabeza->ApN= NULL;
   return Cabeza;
}


void ListaImpar (ENCAB * e){
   int par;
   e->ApN = e->ApL;
   while (e->ApN->sig!=NULL){

   par= e->ApN->info;
   e->ApN->info= par+1;
   e->ApN= e->ApN->sig;
      }
}








