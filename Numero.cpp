#include "Numero.hpp"
#include <string>

using namespace std;

Numero::Numero() {
}

Numero::Numero(string num) {
    numero = num;
}

string Numero :: toString() {
    return numero;
}

bool Numero :: checkOctal(string n) {
    int cont = 0;
    for (int i = 2; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7') {
            cont++;
        }
    }
    if (n[0] == '0' && n[1] == 'c' && cont == n.size() - 2) {
        return true;
    } else {
        return false;
    }
}

bool Numero :: checkHexadecimal(string n) {
    int cont = 0;
    for (int i = 2; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7' || n[i] == '8' ||
            n[i] == '9' || n[i] == 'A' || n[i] == 'B' || n[i] == 'C' || n[i] == 'D' || n[i] == 'E' || n[i] == 'F') {
            cont++;
        }
    }
    if (n[0] == '0' && n[1] == 'x' && cont == n.size() - 2) {
        return true;
    } else {
        return false;
    }
}

bool Numero :: checkDecimal(string n) {
    int cont = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7' || n[i] == '8' ||
            n[i] == '9') {
            cont++;
        }
    }
    if (cont == n.size()) {
        return true;
    } else {
        return false;
    }
}

bool Numero :: checkBinary(string n) {
    int cont = 0;
    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] == '1' || n[i] == '0') {
            cont++;
        }
    }
    if (n[n.size() - 1] == 'b' && cont == n.size() - 1) {
        return true;
    } else {
        return false;
    }
}

int Numero :: operator+(Numero n){
    int temporal;
    if(checkBinary(n.toString())) {
        temporal = stoi(n.toString(), nullptr, 2);
    } else if(checkDecimal(n.toString())) {
        temporal = stoi(n.toString());
    } else if(checkHexadecimal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena,nullptr,8);
    }
    int temporal2;
    if(checkBinary(this -> numero)) {
        temporal2 = stoi(this -> numero, nullptr, 2);
    } else if(checkDecimal(this -> numero)) {
        temporal2 = stoi(this -> numero);
    } else if(checkHexadecimal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena,nullptr,8);
    }
    return temporal2 + temporal;
}

int Numero :: operator-(Numero n){
    int temporal;
    if(checkBinary(n.toString())) {
        temporal = stoi(n.toString(), nullptr, 2);
    } else if(checkDecimal(n.toString())) {
        temporal = stoi(n.toString());
    } else if(checkHexadecimal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena,nullptr,8);
    }
    int temporal2;
    if(checkBinary(this -> numero)) {
        temporal2 = stoi(this -> numero, nullptr, 2);
    } else if(checkDecimal(this -> numero)) {
        temporal2 = stoi(this -> numero);
    } else if(checkHexadecimal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena,nullptr,8);
    }
    return temporal2 - temporal;
}

int Numero :: operator*(Numero n){
    int temporal;
    if(checkBinary(n.toString())) {
        temporal = stoi(n.toString(), nullptr, 2);
    } else if(checkDecimal(n.toString())) {
        temporal = stoi(n.toString());
    } else if(checkHexadecimal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(n.toString())) {
        string minicadena = "";
        for (int i = 2; i < n.toString().size(); i++) {
            minicadena += n.toString()[i];
        }
        temporal = stoi(minicadena,nullptr,8);
    }
    int temporal2;
    if(checkBinary(this -> numero)) {
        temporal2 = stoi(this -> numero, nullptr, 2);
    } else if(checkDecimal(this -> numero)) {
        temporal2 = stoi(this -> numero);
    } else if(checkHexadecimal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena, nullptr, 16);
    } else if(checkOctal(this -> numero)) {
        string minicadena = "";
        for (int i = 2; i < this -> numero.size(); i++) {
            minicadena += this -> numero[i];
        }
        temporal2 = stoi(minicadena,nullptr,8);
    }
    return temporal2 * temporal;
}