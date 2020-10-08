#include <stdio.h>
#include <pthread.h>
void* print(){
    int i =0;
    while (i<5){
        printf("%d\n",i);
        i++;
    }

    return NULL;
}

int main(){

    pthread_t thr;
    pthread_create(&thr, 0,&print,0);
    pthread_join(thr,NULL);
    return 0;

}