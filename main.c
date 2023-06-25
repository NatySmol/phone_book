//
//  main.c
//  telefonni_seznam
//
//Napište program implementující "telefonní seznam". Místo údajů o jednotlivých lidech v něm budeme evidovat pouze čísla (kladná celá). Program se bude ovládat ze standardního vstupu.
/*
Na vstupní řádce vždycky bude kód operace a případně číslo, které bude parametrem operace. Operace budou tyto:

1 - vlož číslo do seznamu
2 - smaž číslo ze seznamu
4 - setřiď seznam (sestupně)
5 - vypiš
6 - konec
Za operacemi 1 a 2 bude nasledovat mezerou oddělené číslo, které se má vložit resp. vymazat.

Tedy například řádek "1 5" bude znamenat "přidej do seznamu číslo 5". Řádek "2 4" znamená "smaž ze seznamu číslo 4".

Při výpisu uvádějte každé číslo na zvláštní řádek. Pokud chceme mazat ze seznamu číslo, které v něm není, operaci ignorujte. (Ne aby program spadl!)

*/
//  Created by Natálie Smolíková on 11.11.2021.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct spojovy_seznam{
    int hod;
    struct spojovy_seznam *next;
} spojak;

spojak* init()
{return NULL;}

spojak* one_insert(int co, spojak* hlava) {
    spojak *pom, *hlava2 = hlava;
    if (hlava == NULL)
{
    hlava = malloc(sizeof(spojak));
    hlava -> hod = co;
    hlava -> next = NULL;
    return hlava;
}
    if ((hlava ->hod ) <=co)
    {
        pom = malloc(sizeof(spojak));
        pom -> hod = co;
        pom -> next = hlava;
            return pom;
    }
    while ((hlava ->next !=NULL) &&((hlava ->next -> hod) > co))
    {
        hlava = hlava -> next;
    }
    
        
    pom = malloc(sizeof(spojak));
    pom -> hod = co;
    pom ->next = hlava -> next;
    hlava -> next = pom;
    return hlava2;
}

spojak *two_delete(int co, spojak* hlava)
{
    spojak *pom, *hlava2 = hlava;
    if (hlava == NULL) return NULL;
    if (hlava != NULL && ((hlava -> hod) ==co))
    {   pom = hlava;
        hlava = hlava ->next;
        free(pom);
        return hlava;
    }
    while ((hlava ->next !=NULL) && (hlava -> next ->hod) != co)
        
        hlava = hlava -> next;
    
   if ((hlava -> next) != NULL)
   {
        pom = malloc(sizeof(spojak));
        pom = hlava -> next;
        hlava ->next = hlava ->next ->next;
        free(pom);
       return hlava2;}
   else{
       return hlava2;
   }
    
   
    
    
}

int main() {
    int operace, hodnota;
    spojak *seznam = init(), *seznam2 = init();
    
    while(scanf("%d", &operace) !=6)
    {
        if(operace == 1) {
            scanf("%d", &hodnota);
        seznam = one_insert(hodnota,seznam);
        }
        if (operace == 2) {
            scanf("%d", &hodnota);
            seznam =two_delete(hodnota, seznam);
        }
        if(operace == 5) {
            seznam2 = seznam;
            while(seznam !=NULL)
            { printf("%d\n", seznam -> hod);
                seznam = seznam -> next;
            }
            seznam = seznam2;
        }
        if (operace == 6) return 0;
            
        
    }
    
    return 0;
}
