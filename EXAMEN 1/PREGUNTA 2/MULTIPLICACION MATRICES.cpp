#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main(int argc, char * argv[]) 
{
 
    long **A//Matriz
	, *x, // vector,
	 *c; 
 
    int n;
 
    
 
 
    
    n=100;
	A = new long *[n];//Fila de la Matrix
	x = new long [n];//Espacio del vector
 
    //Llenar la matriz
    A[0] = new long [n * n];
    for (unsigned int i = 1; i < n; i++) {
	A[i] = A[i - 1] + n;
    }
 
    // Llenar la matriz y el vector con valores aleatorios
    srand(time(0));
    cout << "B= " << endl;
    for (unsigned int i = 0; i < n; i++) {
	for (unsigned int j = 0; j < n; j++) {
	    if (j == 0) cout << "[";
	    A[i][j] = rand() % 10;
	    cout << A[i][j];
	    if (j == n - 1) cout << "]";
	    else cout << "  ";
	}
	
	x[i] = rand() % 10;
	cout << "x=\t  [" << x[i] << "]" << endl;
    }
    cout << "\n";
 
    c = new long [n];
    //Calcular la multiplicacion  
    for (unsigned int i = 0; i < n; i++) {
	c[i] = 0;
	for (unsigned int j = 0; j < n; j++) {
	    c[i] += A[i][j] * x[j];
	}
    }
 
 
    cout << "A=xB=>\n" << endl;
    for (unsigned int i = 0; i < n; i++) {
	cout << c[i] << endl;
    }
 
    delete [] c;
    delete [] A[0];
 
 
    delete [] x;
    delete [] A;
 
 
    return 0;
 
}
