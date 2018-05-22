#include <iostream>
#include <cstdlib>

int main(){
    //Prepare some random data for sorting...
    int data[10];
    printf("Original Data: ");
    for(int i=0; i<(sizeof(data)/sizeof(data[0]));i++){
        data[i] = rand() %100;
        printf("%d  ", data[i]);
    }
    std::cout<<"\n";

    for(int i=0; i<10; i++){
        std::cout<<"Sorting Round "<<i<<" Data: ";
        for(int j=i; j<10; j++){
            if(data[i]>data[j]) {
                int tem = data[i];
                data[i] = data[j];
                data[j] = tem;
            }
        }
        for(int k = 0; k<10; k++){
            std::cout<<data[k]<<"  ";
        }
        std::cout<<"\n";
    }

    return 0;
}