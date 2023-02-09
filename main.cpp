#include <iostream>

using namespace std;

int main() {
  
  cout<<"-----------𝘽𝙞𝙚𝙣𝙫𝙚𝙣𝙞𝙙𝙤𝙨 𝙖𝙡 𝙨𝙞𝙨𝙩𝙚𝙢𝙖 𝙖𝙘𝙖𝙙𝙚́𝙢𝙞𝙘𝙤-----------\n\n";
  here:
  int cestudiante=0;
  cout<<"ingrese la cantidad de alumnos(estan permitidos un maximo de 99 alumnos):";
  cin>>cestudiante;
  if((cestudiante>0)&&(cestudiante<100)){
    //base de datos de los estudiantes
    int codigo=0;
    //solicita datos del estudiante
    for(int i=1;i<=cestudiante;i++){
      cout<<"ingrese el codigo del estudiante "<<i;
      cin>>codigo;
    
    }
  }else{
    goto here;
  }
  
}