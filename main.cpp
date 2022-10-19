#include <iostream>
#define MAX 24
using namespace std;

char message[MAX]={'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char translate[MAX]={};
int top = -1;
char isi;
void process();
void push();

void process (){
    for(int i=0; i<MAX; i++){
        if(message[i] == '*'){

        }else{
            isi = message[i];
            push();
        }
    }
}
void push(){
    top++;
    translate[top]=isi;
}

int main()
{
    cout << "message = ";
    for(int i=0; i<MAX; i++){
        cout << message[i];
    }
    cout << endl;
    cout << "result = " ;

    process ();
    for(int i=0; i<MAX; i++){
        cout << translate[i];
    }
    return 0;
}
