#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  long long warrior1, warrior2;
  while( scanf( "%lld%lld", &warrior1, &warrior2 ) != EOF ){
    printf( "%lld\n", (warrior1 > warrior2)? warrior1-warrior2 : warrior2-warrior1 ); 
  }
  return 0;
}
