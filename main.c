#include <stdio.h>
#include <stdlib.h>
float Somme (float T[],int taille);
float Produit (float T[],int taille);
float Moyenne(float S);
void pos_neg(float T[],int taille);
int main()
{
    float T[10],S,P,M;
    printf("veuillez saisir les valeurs : ");

    for(int i=0;i<10;i++){
        printf("T[%d]:",i);
        scanf("%f",&T[i]);
    }
    S=Somme(T,10);
    P=Produit(T,10);
    M=Moyenne(S);
    pos_neg(T,10);

    return 0;
}
float Somme (float T[],int taille){
    float S=0 ;
    for(int i=0;i<taille;i++){
        S=S+T[i];
    }
    return S;
}
float Produit (float T[],int taille){
    float P=1;

    for(int i=0;i<taille;i++){
        P=P*T[i];
    }
    return P;
}
float Moyenne(float S){
    float M=0;
    M=S/2;
    return  M;
}
void pos_neg(float T[],int taille){
    float neg=0,pos=0;
    float nega[10]={0},posi[10]={-1};
    for(int i=0;i<taille;i++){
        if(T[i]<0){
            neg++;
            nega[i]=T[i];
        }else {
            pos++;
            posi[i]=T[i];
        }
    }

    printf("les nombres negatif sont :\n");
    for(int i=0;i<10;i++){
        if(nega[i]<0){
            printf("%.2f \n",nega[i]);
        }
    }
    printf("les nombres positif sont :\n");
    for(int i=0;i<10;i++){
        if(nega[i]>-1){
            printf("%.2f \n",posi[i]);
        }
    }

}


