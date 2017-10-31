#include <bits/stdc++.h>

using namespace std;

vector <long long int> entrada, soma;

void monta_soma(int inicio, int fim){
  long long int sum = 0;

  for(int i = inicio; i <= fim; i++){
    sum += entrada[i];
    soma.push_back(sum);
  }

}

int main(){
  int n, inicio, fim;
  long long int num;

  printf("Insira numero de entradas | inisio da soma | fim da soma\n");
  scanf("%d %d %d", &n, &inicio, &fim);

  printf("Insira o vetor.\n");
  for(int i = 0; i < n -1; i++){
    scanf("%lld", &num);
    entrada.push_back(num);
  }

  monta_soma(0, n);
  num = soma[inicio -1] + soma[fim];

  for(int i = 0; i)

  printf("Soma: %lld", num);
}
