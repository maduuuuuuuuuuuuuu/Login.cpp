/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int senha;
    string nmuser;
    
    cout << "Digite o nome de usuário: " << endl;
    cin >> nmuser;
    
    cout << "Digite a senha: " << endl;
    cin >> senha;
    
    
    
    if(senha == 123 && nmuser == "admin"){
        cout << "n\ Acesso concebido" << endl;
    }
    
    else{
        cout << "\n Acesso negado" << endl;
    }
   
   return 0;
    
}






