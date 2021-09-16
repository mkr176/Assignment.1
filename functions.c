#include <stdio.h>  // For å bruke printf & scanf
#include <string.h> 

// Oppgave 1.

void compare_values (int x, int y) {
    if (x > y) {                                // Sammenligner heltall(int)
        printf ("%d er større en %d \n", x, y); 
    }   
    else if (y > x) {
        printf ("%d er større en %d \n", y, x); 
    }
    if (x == y) {
        printf ("%d og %d er like stort\n", x, y);

    }
    
}

// Oppgave 2.

void myTriangles(int numlines) {
    for(int linje = 1; linje <= numlines; linje++) { // Kommer ny linje, for hver rad
        for(int rad = 1; rad <= linje; rad++) { // Kommer ny stjerne, avhengig av linje
            printf("*");
        }
        printf("\n");
    }
}


// Oppgave 3.

int myPrimeFactor (int number, int primeFactor) {
    
    int svar;

    printf("Skriv et Tall, deretter primFaktor:");
    scanf("%d%d",&number,&primeFactor);
    
    if(number % primeFactor == 0) {
        svar = 1; } // Om det er en primfaktor av tallet, returneres svaret 1
    else {
        svar = 0;
    }
    return svar;
}

// Oppgave 4.

void myNumbers(int startnum, int endnum) {
    for(startnum; startnum <= endnum; startnum++) { 
        if(startnum%2 == 0) {             // Kontrolleres om det er et oddetall eller partall
            printf("%i er et partall",startnum);
        }
        else 
        {
            printf("%i er et oddetall",startnum);
        }    

        if(startnum%5 == 0) {             // Kontrolleres om 5 er en primfaktor av startnum
            printf(" og 5 er en primfaktor \n");
        }
        else 
        { 
            printf(" og 5 er ikke en primfaktor \n");
        }
          
    }          
}

// Oppgave 5.

int myLog2(unsigned int n) {
         
    int j = 0;
        while(n > 1) { 
            n = n >> 1; // Hele verdien flyttes et hakk til høyre
            j++;       
    }
    return j;
}

// Oppgave 6.

void reverseString(char string[]) { // Char inneholder bokstaver, der [] at der er flere i et array
    int i;
    int sLengde = strlen(string); // Gjør at sLengden blir lik størrelsen på strengen som scannes
     
    for(i = sLengde; i >= sLengde/2; i--) {
        
        char stringReverse = string[i];
        string[i]= string[sLengde - i -1]; // Første bokstav settes lik, siste bokstav. 
        string[sLengde - i - 1] = stringReverse;  // -1 for å ikke ha med "\0" 

    }
} 


int main () // Starter Programmet
{
// Oppgave 1.
    
    int x, y; // Deklarere variablene
    
    printf("\ncompare_values(x,y)\n");

    printf("Skriv to tall du vil sammenligne: ");
    scanf("%d%d", &x, &y);
    compare_values(x,y); // Kaller på funksjonen

// Oppgave 2. 
    
    int linje, numlines;

    printf("\nmyTriangles(numlines)\n");

    printf("Skriv antall linjer du vil ha på trekanten: ");
    scanf("%i", &numlines);
    
    myTriangles(numlines);


// Oppgave 3.
    
    int number, primeFactor;
    printf("\nmyPrimeFactor(number, primeFactor)\n");
    printf("%d",myPrimeFactor(number, primeFactor));

// Oppgave 4.
   
    int startnum, endnum;

    printf("\nmyNumbers(startnum, endnum)\n");
    printf("Skriv et startnummer og sluttnummer du vil telle ifra:");
    
    scanf("%d%d", &startnum, &endnum);
    myNumbers(startnum, endnum);
    
// Oppgave 5. 
    
    int n;
    
    printf("\nmyLog2(unsigned int n)\n");
    
    printf("Log2 til tallet:\n");
    scanf("%d", &n);
    printf("\nViktigste bit(venstre) av %d = %d\n",n, myLog2(n));
    

    

// Oppgave 6.

    char string[100];

    
    printf("\nreverseString(char string[])\n");

    printf("Skriv ordet du vil reversere:\n"); 
    getchar();
    fgets(string, sizeof string, stdin);
    
    reverseString(string);
    printf(string); 
    

    return 0;
    
}


    


