#include <bits\stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int> A , int n);
int CalcularHamming(vector <int> A, vector <int> B);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A= {1,1,0,1,1};
    vector<int> B;

    int Hamming;
    int N;
    cout<<"Ingrese cantidad de elementos del vector"<<endl;
    cin>>N;
   
    B=GenerarVector(B ,N);
    Hamming= CalcularHamming(A,B);
   
    MostrarVector(A);
    cout<<endl;
    MostrarVector(B);
   
    cout<<"La distancia de Hamming es:"<<Hamming<<endl;
    return 0;
}

vector<int>GenerarVector(vector<int> A , int N)
{
    int i;        
    srand (time (NULL));
    int e;
    for(i=0; i<N; i++)
    {
        e=rand()%2;
        A.push_back (e);
    }
    return A;
}

int CalcularHamming(vector <int> A, vector <int> B)
{
    int i;
    int Contador=0;
    for(i=0; i<A.size(); i++)
    {
        if(A[i]!= B[i])
        {
           
            Contador++;
        }
       
    }
    return Contador;
}

void MostrarVector(vector <int> A)
{
    int i;
   
    for( i=0; i<A.size(); i++ )
    {
   
    cout<<A[i]<<"/";
    }
        cout<<endl;
}
