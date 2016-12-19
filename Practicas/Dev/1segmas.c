#include <stdio.h>

int main(){
    int hr, min, seg, meridian;

    printf("Inserte la hora en formato hh mm ss am(0)/pm(1):\n");
    scanf("%d %d %d %d", &hr, &min, &seg, &meridian);
   // printf("\n\t %d %d %d %d\n", hr, min, seg, meridian);

    if(seg > 59 || min > 59 || hr > 12 || meridian < 0 || meridian > 1 ){
        printf("Error, hora incorrecta!\n\t****PROGRAMA TERMINADO****");
        return 0;
    }else{
        if(seg == 59){
            seg = 0;
            if(min == 59){
                min = 0;
                if(hr == 12){
                    hr = 1;
                    meridian = !meridian;
                }else{
                    hr++;
                    }
            }else{
                min++;
            }
        }else{
            seg++;
        }
    }
    printf("Un segundo despues la hora sera: %d %d %d %d", hr, min, seg, meridian);
    return 1;



}


