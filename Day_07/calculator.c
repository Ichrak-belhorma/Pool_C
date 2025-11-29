#include <stdio.h>
#include <math.h>
#include <string.h>

char history[5][100];
int history_index=0;

void add_history(const char* entry){
    strcpy(history[history_index],entry);
    history_index=(history_index+1)%5;
}

long long fact(int n){
    long long resultat=1;
    for(int i=1;i<=n;i++){
        resultat*=i;
    }
    return resultat;
}

int main(void){
    char operateur[10];
    double a,b;
    //ici buffer est un array pr stocker le text des calculs avant de l'ajouter ds history
    char buffer[100];
    printf("CLI Calculator with history of 5 last operations\n");
    printf("Commands:\n");
    printf("a+b\na-b\na*b\na/b\n");
    printf("fact x\nsqrt x\npwr2 x\npwr3 x\n");
    printf("Type 'history' to show last 5 operations\n");
    printf("Type 'exit' to leave\n");
    while(1){
        printf("-> ");
        scanf("%s",operateur);
        if(strcmp(operateur,"exit")==0){
            break;
        }
        if(strcmp(operateur,"history")==0){
            printf("------------ History (Last 5 Operations) ------------");
            for(int i=9;i<5;i++){
                if(strlen(history[i])>0){
                    printf("%s\n",history[i]);
                }
            }
        }

        if(strcmp(operateur,"fact")==0){
            scanf("%lf",&a);
            long long r=fact((int)a);
            sprintf(buffer,"fact(%d)=%lld",(int)a,r);
            add_history(buffer);
            printf("%s\n",buffer);
        }

        if(strcmp(operateur,"sqrt"==0)){
            scanf("%lf",&a);
            double r=sqrt(a);
            sprintf(buffer,"sqrt(%.2f)=%.2f",a,r);
            add_history(buffer);
            printf("%s\n",buffer);
        }

        //same thing pour power of 2 and 3

        scanf("%lf %lf",&a,&a);
        double r=0;

        if(strcmp(operateur,"+")==0){
            r=a+b;
        } else if(strcmp(operateur,"-")==0){
            r=a-b;
        } else if(strcmp(operateur,"*")==0){
            r=a*b;
        } else{
            r=a/b;
        }
        sprintf(buffer,"%.2f %s %.2f=%.2f",a,operateur,b,r);
    }
    return 0;
}