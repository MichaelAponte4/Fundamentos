#include <iostream>

using namespace std;

int main() {
  //base de datos de los estudiantes
  float data[100][4];
  
  cout<<"-----------𝘽𝙞𝙚𝙣𝙫𝙚𝙣𝙞𝙙𝙤𝙨 𝙖𝙡 𝙨𝙞𝙨𝙩𝙚𝙢𝙖 𝙖𝙘𝙖𝙙𝙚́𝙢𝙞𝙘𝙤-----------\n\n";
  here:
  int cestudiante=0;
  cout<<"ingrese la cantidad de alumnos(estan permitidos un maximo de 99 alumnos):";
  cin>>cestudiante;
  if((cestudiante>0)&&(cestudiante<100)){
    //solicita datos del estudiante
    for(int i=1;i<=cestudiante;i++){
      cod:
      rep:
      cout<<"ingrese el codigo del estudiante "<<i<<" (tres dijitos):  ";
      cin>>data[i][0];
      if(data[i][0]>0 && data[i][0]<1000){
      for(int j=1;j<cestudiante+1;j++){
        if(==data[i][0]){
          cout<<"este estudiante ya existe\ningrese otro codigo\n";
          goto rep;
        }
        }  
        seg:
        cod1:        
        cout<<"ingrese el sexo del estudiante\n 0:femenino \n 1:masculino \n";
        cin>>data[i][1];
       if(data[i][1]==0 || data[i][1]==1){
          cod2:
          cout<<"ingrese su nota de algebra(1 decimal permitido): ";
          cin>>data[i][2];
          if(data[i][2]>=0 && data[i][2]<=5){
            cod3:
            cout<<"ingrese su nota de fundamentos(1 decimal permitido): ";
            cin>>data[i][3];
  
            if(data[i][3]>=0 && data[i][3]<=5){
              cout<<data;
            }else{
              goto cod3;
            }
          }else{
            goto cod2;
          }
        }else{
          goto cod1;
        }
      }else{
        goto cod;
      }
    }
  }else{
    goto here;
  }

}