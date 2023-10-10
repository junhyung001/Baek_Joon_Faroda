#include<stdio.h>
#include<iostream>

int main(){
    int rpt, loop_rpt, cnt;
    int score[1000];
    double avg;

    scanf("%d", &rpt);

    for(int i=0; i<rpt; i++){
        scanf(" %d", &loop_rpt);
        avg = 0.0;
        
        for(int j=0; j<loop_rpt; j++){
            scanf(" %d", &score[j]);
            avg += score[j];
        }
        
        avg = avg/loop_rpt;
        cnt = 0;

        for(int j=0; j<loop_rpt;j++){
            if(score[j] >avg)
                ++cnt;
        }

        printf("%.3f%\n", 100.0*cnt/loop_rpt);
    }
}