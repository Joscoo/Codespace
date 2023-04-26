//Definir un TDA Vector
//Jose Bonilla - 7246
typedef int tipo;
#define MAX 100
class Vector{
private:
    tipo a[MAX];
    int n;
public:

    Vector() {
        n = 0;
    }
    int getN() {
        return n;
    }
    void setN(int n) {
        n = n;
    }
    tipo getA(int i) {
        return a[i];
    }
    void setA(tipo value, int i) {
        a[i] = value;
    }
    ~Vector(){}
};
