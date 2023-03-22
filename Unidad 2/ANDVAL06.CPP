#include <graphics.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode;
   //cuerpo (16x16)
   int roly[] = {5,0,5,2,2,2,2,3,1,3,1,5,0,5,0,7,1,7,1,8,0,8,0,11,1,11,1,13,2,13,2,14,3,14,3,15,5,15,5,14,6,14,6,13,7,13,7,11
                 ,6,11,6,13,5,13,5,14,3,14,3,13,2,13,2,11,1,11,1,8,2,8,2,7,1,7,1,5,2,5,2,3,5,3,5,2,6,2,6,0
   };
   //cuerpo pt2
   int roly2[] = {5,11,5,12,3,12,3,10,4,10,4,9,8,9,8,10,9,10,9,13,11,13,11,14,9,14,9,15,13,15,13,13,14,13,14,11,15,11,15,10,14,10,14,8,15,8,15,4,14,4,14,3,12,3,12,2,7,2,7,3,6,3,6,2
                  ,7,2,7,1,9,1,9,0,10,0,10,1,11,1,11,0,12,0,12,2,14,2,14,3,15,3,15,4,16,4,16,8,15,8,15,10,16,10,16,11,15,11,15,13,14,13,14,15,13,15,13,16,8,16,8,14,9,14,9,13,
                  8,13,8,10,4,10,4,11
   };
   //ojo
   int ojo[] ={11,12,12,12,12,9,11,9};

   //pico
   int pico[] ={13,11,15,11,15,10,13,10};
   //ala 
   int ala[] ={6,7,4,7,4,5,5,5,5,4,9,4,9,5,5,5,5,6,6,6};
   //pata
   int pata[] ={6,2,7,2,7,0,6,0};
   int pata2[]={7,1,12,1,12,0,7,0};
   
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   
   //vectores escalado
   int rolyEsc[sizeof(roly)];
   int rolyEsc2[sizeof(roly2)];
   int ojoEsc[8] ;
   int picoEsc[8];
   int alaEsc[20];
   int pataEsc[8];
   int pata2Esc[8];
   int tamBloque=26;

    //voltear la figura 
    for ( int i = 0; i < 88; i++) {
        if ((i+1) % 2 == 0) {
            roly[i] = 16 - roly[i];
        } 
    }
    for ( i = 0; i < 132; i++) {
        if ((i+1) % 2 == 0) {
            roly2[i] = 16 - roly2[i];
        } 
    }
     for (  i = 0; i < 8; i++) {
        if ((i+1) % 2 == 0 ){
            ojo[i] = 16 - ojo[i];
            pico[i] = 16 - pico[i];
            pata[i] = 16 - pata[i];
            pata2[i] = 16 - pata2[i];
        } 
    }     
    for (  i = 0; i < 20; i++) {
        if ((i+1) % 2 == 0) {
            ala[i] = 16 - ala[i];
        } 
    }
    
   
   //escala las cordenadas al tamaño del bloque
   for ( i = 0; i < sizeof(roly); i++) {
        rolyEsc[i] = roly[i] * tamBloque;
    }
    for (i = 0; i < sizeof(roly2); i++) {
        rolyEsc2[i] = roly2[i] * tamBloque;
    }
    for (i = 0; i < sizeof(roly2); i++) {
        rolyEsc2[i] = roly2[i] * tamBloque;
    }
    for (i = 0; i < 8; i++) {
        ojoEsc[i] = ojo[i] * tamBloque;
        picoEsc[i] = pico[i] * tamBloque;
        pataEsc[i] = pata[i] * tamBloque;
        pata2Esc[i] = pata2[i] * tamBloque;

    }  
    for (i = 0; i < 20; i++) {
        alaEsc[i] = ala[i] * tamBloque;
    }
   
    //dibuja figura

        setfillstyle(SOLID_FILL,14);
        fillpoly(4,pata2Esc);
        setfillstyle(SOLID_FILL,LIGHTRED);
        fillpoly(4,pataEsc);
        setfillstyle(SOLID_FILL,BLUE);
        fillpoly(44,rolyEsc);
        setfillstyle(SOLID_FILL,BLUE);
        fillpoly(66,rolyEsc2);
        setfillstyle(SOLID_FILL,BLUE);
        fillpoly(4,ojoEsc);
         setfillstyle(SOLID_FILL,14);
        fillpoly(4,picoEsc);
        setfillstyle(SOLID_FILL,BLUE);
        fillpoly(10,alaEsc);
        //linea para cerrar figura
        setcolor(WHITE);
        line(130,130, 156,130 );
        
        //relleno
        setfillstyle(2,CYAN);
        floodfill(208,260,WHITE);
    //setfillstyle(SOLID_FILL,13);
       // fillpoly(70,roly2);

getch();
   
   closegraph();
   return 0;
}