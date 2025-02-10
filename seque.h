#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define top 25
#define def1 "#include<stdio.h>" 
#define def2 "#include<stdlib.h>" 
#define def3 "#include<string.h>"

/*int lecture(void);*/
int ecriture (void);



int ecriture (void){
    char NomFichier [top], clone1[top], clone2[top],clone3[top] , NomFichier_c[] =".c", NomFichier_h [] =".h", NomFichier_sh[]=".sh";
    
    
    printf("nom des fichiers à crée :");
    scanf ("%20s", NomFichier);

    strcpy(clone1, NomFichier);
    strcpy(clone2, NomFichier);
    strcpy(clone3, NomFichier);

    strcat(NomFichier, NomFichier_c);
    strcat(clone1,NomFichier_sh);
    strcat(clone2,NomFichier_h);

    printf("%s\n%s\n%s\n", NomFichier , clone1, clone2);

    FILE * fichier_c = fopen( NomFichier, "w");
    if (fichier_c==NULL){
        printf("Ouverture impossible du fichier .c ");
        exit(1);
    }
    fprintf(fichier_c,"%s\n%s\n", def1, def2);
    fclose(fichier_c);

    FILE * fichier_sh = fopen( clone1, "w");
    if (fichier_sh==NULL){
        printf("Ouverture impossible du fichier .sh ");
        exit(1);
    }
    fprintf(fichier_sh,"#!/bin/bash\ngcc %s.c -o %s\n./%s",clone3,clone3,clone3 );
    fclose(fichier_sh);
    FILE * fichier_h = fopen( clone2, "w");
    if (fichier_h==NULL){
        printf("Ouverture impossible du fichier .h");
        exit(1);
    }
    fprintf(fichier_h,"%s\n%s\n", def1, def2);
    fclose(fichier_h);
}