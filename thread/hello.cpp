#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *subThread(void *argc){
    for(int i = 0 ; i < 5;i++){
        cout << "sub thread index = " << i << " tid = " << pthread_self() << endl;
    }
    cout << "sub thread end!" << endl;

    return nullptr;
}

int main(){
    cout << "hello main thread" << endl;

    pthread_t tid;
    tid = pthread_create(&tid , nullptr , subThread , nullptr);

    for(int i = 0 ; i < 5;i++){
        cout << "pthread = " << pthread_self() << endl;
    }

    
    // int c;
    // cin >> c;
    // cout << "main thread end!" << endl;
    //sleep(3);
    sleep(3);
    return 0;
}