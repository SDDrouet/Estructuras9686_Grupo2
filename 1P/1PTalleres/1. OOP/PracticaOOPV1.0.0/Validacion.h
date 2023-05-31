#ifndef VALIDACION_H
#define VALIDACION_H
#include <iostream>
#include <conio.h>
#include <cctype>
#include <string>

using namespace std;
class Validacion{
	public:
		static string validarAlfabeticamente(string texto) {
	        string entrada;
	        char c;
	
	            cout << texto;
	            while ((c = getch()) != '\r') {
	                if (c == 8 && !entrada.empty()) { 
	                    entrada.pop_back(); 
	                    cout << "\b \b"; 
	                } else if (isalpha(c)) { 
	                    entrada += c; 
	                    cout << c; 
	                }
	            }
	            cout << endl;
	    		return entrada;
			}
				
		static int validarNumericamente(string texto) {
	        string entrada;
	        char c;
	
	            cout << texto;
	            while ((c = getch()) != '\r') {
	                if (c == 8 && !entrada.empty()) { 
	                    entrada.pop_back(); 
	                    cout << "\b \b"; 
	                } else if (isdigit(c)) { 
	                    entrada += c; 
	                    cout << c; 
	                }
	            }
	            cout << endl;
	    		return stoi(entrada);
			}
};
#endif   