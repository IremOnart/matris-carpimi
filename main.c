#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int dizi2[3][3]={{2,2,2},{1,1,1},{3,3,3}};

    int toplam=0;
    int carpim[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           toplam  += (dizi1[i][j]*dizi2[j][i]);
        }
        for(int j=0;j<3;j++){
           carpim[i][j] = toplam;
        }
       toplam = 0;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",carpim[i][j]);
        }
        printf("\n");
    }
    return 0;
}
