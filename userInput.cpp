#include <iostream>
#include "./userInput.hpp"

using namespace std;

namespace input{
    void userInput(){ //grabs input until cin fails, then returns sum
        int size = 1;
        int* numbers = new int[size];
        int entries = 0;


        while(true){
            cout << "number: " << endl;
            cin >> numbers[entries];
            if(cin.fail()){
                entries--;
                break;
            }
            entries++;
            if(entries == size){
                size *= 2;
                int* temporaryArray = new int[size];
                for(int i = 0; i < entries; i++){
                    temporaryArray[i] = numbers[i];
                }
                delete numbers;
                numbers = nullptr;
                numbers = temporaryArray;
                // delete temporaryArray;
                // temporaryArray = nullptr;
            }
        }
        
    }
}