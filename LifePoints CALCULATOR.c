#include <stdio.h>



int main(){

int LP1,LP2;
int LPO;
int T1,T2;
int dec;
int sce;
int dan;
printf("\033[41m\n\t\t---------------------\n");
printf("\t\tCALCOLATORE LIFEPOINT");
printf("\n\t\t---------------------\n");
printf("\e[1;33m\n\nDa quanti LIFEPOINT vuoi partire?:\n\n");
scanf("%d",&LPO);
LP1=LPO;
LP2=LPO;
while(LP1>0 && LP2>0){
printf("\nGIOCATORE 1= %d   ---   GIOCATORE 2= %d\n",LP1,LP2);
printf("\n\nInserire attack 1:\n\n");
scanf("%d",&T1);
printf("\n\nInserire attack (o DEF) 2:\n\n");
scanf("%d",&T2);
printf("\nA QUALE GIOCATORE SI VOGLIONO SOTTRARRE O AGGIUNGERE LIFEPOINT (1/2) ?:\n");
scanf("%d",&sce);
printf("\nSOTTRARRE O AGGIUNGERE LIFEPOINT (1/2)?:\n");
scanf("%d",&dec);
if(sce==2 && dec==1){
dan=T1-T2;
LP2=LP2-dan;

}
else if(sce==2 && dec==2){
dan=T1-T2;
LP2=LP2+dan;

}
else if(sce==1 && dec==1){
dan=T1-T2;
LP1=LP1-dan;

}
else if(sce==1 && dec==2){
dan=T1-T2;
LP1=LP1+dan;
}
else{
printf("\nERRORE\n");



}

}
if(LP1==0){
printf("\nGiocatore 2 VINCE\n");
}
else{
printf("\nGiocatore 1 VINCE\n");
}

printf("\n\t\t\t\t\tPOWERED BY NICOLO' TECCHIOLI\n");
}






