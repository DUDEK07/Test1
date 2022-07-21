#include <iostream>

using namespace std;


int main()

{
    int max = 1, mmax = 1, odin = 1;
    char osn[50], zam[50];
    cout << "Enter your word:";
    gets_s(osn);
    cout << "Original word: " << osn << endl;
    
    for (int x = 0; x < strlen(osn); x++)
    {
        osn[x] = tolower(osn[x]);
    }

    for (int i = 0; i < strlen(osn); i++) 
    {
        for (int j = i; j < strlen(osn); j++) 
        {
            {
                if (osn[i] == osn[j])
                {
                    max++;
                    mmax = max;
                    if (mmax >= 3) {
                        zam[i] = osn[i];
                        for (int g = 0; g < strlen(osn); g++) {
                            if (zam[i] == osn[g]) {
                                osn[g] = ')';
                            }
                            }
                        i++;
                        j--;
                        max = 1;
                    }
                }
                else {
                    odin = 1;
                }
            }
        }
        if (odin == 1 && osn[i] != ')' && osn[i] != '(')
        {
            osn[i] = '(';
            max = 1;
        }
        else max = 1;        
    }
    cout <<"After to conversion: " << osn;
   
   return 0;
}
