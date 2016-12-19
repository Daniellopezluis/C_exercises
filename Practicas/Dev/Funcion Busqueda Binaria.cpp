//Funcion del ejercicio 7 de la practica

int busquedaBinaria (float l[], int n, float b) {
    int inf = o;
    int sup = n;
    int med;
    int result = -1;
   
    do {
        med = (sup - inf)/2;
        if(l[med] == b) {
            result = med;
        } else if(l[med] > b) {
            sup = med;
        } else {
            inf = med + 1;
        }
    } while (inf <= sup && l[med] != b);
   
    return result;
}
