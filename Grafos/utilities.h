
int leerN(int inf, int sup){
    int n;
    cout << "Ingrese un valor " << endl;
    cin >> n;
    if(n < inf || n > sup){
        n = leerN(inf, sup);
    }
    return n;
}

