#include <iostream>
#include <vector>
#include <string>
int funcion_one(int num) {
    return num *10;


}

std::string funcion_two(std::string entrada) {
    std::vector<char> vowel = {'a','e','i','o','u'};
    for (int i =0;i<entrada.size();i++) {
        for(int y=0;y<vowel.size();y++) {
            if(entrada[i] == vowel[y]){
                entrada.erase(i,1);
            }
        }
    }
    return entrada;


    }



