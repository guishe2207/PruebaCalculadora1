#include <iostream>
using namespace std;
int main()
{
    int c,a,b,rs,op,r;
    string d;
    cout<<"suma=1 , ";
    cout<<"resta=2 , ";
    cout<<"multiplicacion=3 , ";
    cout<<"division=4 , ";
    cout<<"potenciacion=5"<<endl;
    d = "si";
    while(d=="si"){
        cout<<"ingrese el primer numero: ";
        cin>>a;
        cout<<"ingrese el segundo numero: ";
        cin>>b;
        cout<<"ingrese la operacion: ";
        cin>>op;
        while(op>=6){
            cout<<"ingrese un valor valido para op: ";
            cin>>op;
        }
        if(op==1){
            rs = a+b;
            cout<<rs<<endl;
            }
        else{
            if(op==6){
                rs = a%b;
                cout<<rs<<endl;
            }
            else{
                if(op==2){
                    rs = a-b;
                    cout<<rs<<endl;
            }
                else{
                    if(op==3){
                        rs = a*b;
                        cout<<rs<<endl;
                    }
                    else {
                        if(op==4){
                            rs = a/b;
                            cout<<rs<<endl;
                    }
                        else{
                            if(op==5){
                                c=1;
                                rs=b;
                                while(c<a){
                                    c=c+1;
                                    rs = rs*b;
                                }
                        cout<<rs<<endl;
                            }    
                        }
                    }
                }       
            }
        }  
    
        cout<<"si desea continuar escriba si :";
        cin>>d;
    } 
        cout<<"programa terminado";
}
