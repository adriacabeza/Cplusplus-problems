
/*Les seq��ncies d��cid nucle�c s�n cadenes compostes amb les bases adenina (A), tiamina (T), citosina (C) i guanina (G). La base complement�ria de l�adenina �s la tiamina, la de la citosina �s la guanina, i viceversa en ambd�s casos.

Feu un programa que donada una seq��ncia d��cid nucle�c, n�escrigui la seq��ncia complement�ria a partir de la primera aparici� del patr� TAG.

Per exemple, donada la seq��ncia GATAGATAGGCCAGCCT, cal escriure TATCCGGTCGGA.

El vostre programa ha de definir i utilitzar la funci�

     char complement(char c);
que, donada una base, retorna la seva base complement�ria.

Entrada: L�entrada �s una cadena de com a m�nim 3 car�cters A, C, T, o G.

Sortida: La sortida �s una l�nia amb la seq��ncia complement�ria de la seq��ncia d�entrada a partir de la primera aparici� del patr� TAG. Si TAG no apareix a l�entrada, nom�s cal escriure una l�nia buida.
*/

#include <iostream>
using namespace std;

char complement(char c){
 if(c =='C') return 'G';
 if(c =='G') return 'C';
 if(c =='A') return 'T';
 if(c =='T') return 'A';
}

int main() {
        char c;
        int es = 0;
        bool seq = false;
                while (not seq && cin >> c) {
                        if (es == 0) {
                                if (c == 'T') ++es;
                        }
                        else if (es == 1) {
                                if (c == 'A') ++es;
                                else if (c != 'A' or c != 'T') --es;
                        }
                        else if (es == 2) {
                                if (c == 'G') ++es;
                                else if (c == 'T') --es;
                                else es = 0;
                        }
                        if (es == 3) seq = true;
                }
                if (seq) {
                        while (cin >> c) cout << complement(c);
                }
        cout << endl;
}
         