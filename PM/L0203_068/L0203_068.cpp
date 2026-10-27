//Толстобров Дмитрий ПМ-2
//алгоритм поиска строки в тексте

#include "L0203_068.hpp" 
#include <cstring>      //для strlen()

int findmatch(char *p, char *t){ 
    int plen=strlen(p);
    int tlen=strlen(t);
    for(int i=0; i<=(tlen-plen); i++){
        int j=0;
        while((j<plen)&&(t[i+j]==p[j])){j++;}
		if(j==plen){return(i);}
    }
    return(-1);
}