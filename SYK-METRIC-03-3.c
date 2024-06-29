/*
 * SYK-METRIC-3-3.c
 *
 *  Created on: 16-Nov-2016
 *  Author: Sandeep.Thota
 *  METRICS-03-3: Functions shall be limited to 50 statements
 */
void foo(){}
void foo2(){}
int goo1(int i){		//Parasoft Violation IUTC0006-1010 SYK-METRIC-3-3
    struct A
    {
        int a;
    };
    int e;
    foo();                   /* 1 */
    foo2();                  /* 2 */
    if(i){                   /* 3 */
        i++;                 /* 4 */
        return i;            /* 5 */
    }else{
        i--;                 /* 6 */
        return 0;            /* 7 */
    }
    for(e = 0;  e < 1; e++){ /* 8 */
        while(i < 4)         /* 9 */
            i = i + 4;       /* 10 */
    }
    switch (i){              /* 11 */
    case 0:
        i = 7;               /* 12 */
    case 1:
        i = 30;              /* 13 */
    case 2:
        i = 50;              /* 14 */
    default:
        return i;            /* 15 */
    }
    ;                        /* 16 */
    a:                       /* 17 */
    foo();                   /* 18 */
    foo2();                  /* 19 */
    if(i){                   /* 20 */
        i++;                 /* 21 */
        return i;            /* 22 */
    }else{
        i--;                 /* 23 */
        return 0;            /* 24 */
    }
    for(e = 0;  e < 1; e++){ /* 25 */
        while(i < 4)         /* 26 */
            i = i + 4;       /* 27 */
    }
    switch (i){              /* 28 */
    case 0:
        i = 7;               /* 29 */
    case 1:
        i = 30;              /* 30 */
    case 2:
        i = 50;              /* 31 */
    default:
        return i;            /* 32 */
    }
    ;                        /* 33 */
    foo();                   /* 34 */
    foo2();                  /* 35 */
    for(e = 0;  e < 1; e++)  /* 36 */
        ;                    /* 37 */
    if(i){                   /* 38 */
        i++;                 /* 39 */
        return i;            /* 40 */
    }else{
        i--;                 /* 41 */
        i--;                 /* 42 */
        i--;                 /* 43 */
        return 0;            /* 44 */
    }
    for(e = 0;  e < 1; e++){ /* 45 */
        while(i < 4)         /* 46 */
            i = i + 4;       /* 47 */
    }
    i = i + 5 + 4 * (2 / 3); /* 48 */
    do{                      /* 49 */
        i = (i < 4) ? 2 : 5; /* 50 */
    }while(i < 5);
    goto a;                  /* 51 */
    return 10;               /* 52 */
}

int goo2(int i){	//Parasoft Violation IUTC0006-1011 SYK-METRIC-3-3
    struct A
    {
        int a;
    };
    int e;
    foo();                   /* 1 */
    foo2();                  /* 2 */
    if(i){                   /* 3 */
        i++;                 /* 4 */
        return i;            /* 5 */
    }else{
        i--;                 /* 6 */
        return 0;            /* 7 */
    }
    for(e = 0;  e < 1; e++){ /* 8 */
        while(i < 4)         /* 9 */
            i = i + 4;       /* 10 */
    }
    switch (i){              /* 11 */
    case 0:
        i = 7;               /* 12 */
    case 1:
        i = 30;              /* 13 */
    case 2:
        i = 50;              /* 14 */
    default:
        return i;            /* 15 */
    }
    ;                        /* 16 */
    a:                       /* 17 */
    foo();                   /* 18 */
    foo2();                  /* 19 */
    if(i){                   /* 20 */
        i++;                 /* 21 */
        return i;            /* 22 */
    }else{
        i--;                 /* 23 */
        return 0;            /* 24 */
    }
    for(e = 0;  e < 1; e++){ /* 25 */
        while(i < 4)         /* 26 */
            i = i + 4;       /* 27 */
    }
    switch (i){              /* 28 */
    case 0:
        i = 7;               /* 29 */
    case 1:
        i = 30;              /* 30 */
    case 2:
        i = 50;              /* 31 */
    default:
        return i;            /* 32 */
    }
    ;                        /* 33 */
    foo();                   /* 34 */
    foo2();                  /* 35 */
    for(e = 0;  e < 1; e++)  /* 36 */
        ;                    /* 37 */
    if(i){                   /* 38 */
        i++;                 /* 39 */
        return i;            /* 40 */
    }else{
        i--;                 /* 41 */
        i--;                 /* 42 */
        i--;                 /* 43 */
        return 0;            /* 44 */
    }
    for(e = 0;  e < 1; e++){ /* 45 */
        while(i < 4)         /* 46 */
            i = i + 4;       /* 47 */
    }
    i = i + 5 + 4 * (2 / 3); /* 48 */
    do{                      /* 49 */
        i = (i < 4) ? 2 : 5; /* 50 */
    }while(i < 5);
    return 10;               /* 51 */
}

int goo3(int i){
    struct A
    {
        int a;
    };
    int e;
    foo();                   /* 1 */
    foo2();                  /* 2 */
    if(i){                   /* 3 */
        i++;                 /* 4 */
        return i;            /* 5 */
    }else{
        i--;                 /* 6 */
        return 0;            /* 7 */
    }
    for(e = 0;  e < 1; e++){ /* 8 */
        while(i < 4)         /* 9 */
            i = i + 4;       /* 10 */
    }
    switch (i){              /* 11 */
    case 0:
        i = 7;               /* 12 */
    case 1:
        i = 30;              /* 13 */
    case 2:
        i = 50;              /* 14 */
    default:
        return i;            /* 15 */
    }
    ;                        /* 16 */
    a:                       /* 17 */
    foo();                   /* 18 */
    foo2();                  /* 19 */
    if(i){                   /* 20 */
        i++;                 /* 21 */
        return i;            /* 22 */
    }else{
        i--;                 /* 23 */
        return 0;            /* 24 */
    }
    for(e = 0;  e < 1; e++){ /* 25 */
        while(i < 4)         /* 26 */
            i = i + 4;       /* 27 */
    }
    switch (i){              /* 28 */
    case 0:
        i = 7;               /* 29 */
    case 1:
        i = 30;              /* 30 */
    case 2:
        i = 50;              /* 31 */
    default:
        return i;            /* 32 */
    }
    ;                        /* 33 */
    foo();                   /* 34 */
    foo2();                  /* 35 */
    for(e = 0;  e < 1; e++)  /* 36 */
        ;                    /* 37 */
    if(i){                   /* 38 */
        i++;                 /* 39 */
        return i;            /* 40 */
    }else{
        i--;                 /* 41 */
        i--;                 /* 42 */
        i--;                 /* 43 */
        return 0;            /* 44 */
    }
    for(e = 0;  e < 1; e++){ /* 45 */
        while(i < 4)         /* 46 */
            i = i + 4;       /* 47 */
    }
    do{                      /* 48 */
        i = (i < 4) ? 2 : 5; /* 49 */
    }while(i < 5);
    return 10;               /* 50 */
}

int goo4(int i){
    struct A
    {
        int a;
    };
    int e;
    foo();                   /* 1 */
    foo2();                  /* 2 */
    if(i){                   /* 3 */
        i++;                 /* 4 */
        return i;            /* 5 */
    }else{
        i--;                 /* 6 */
        return 0;            /* 7 */
    }
    for(e = 0;  e < 1; e++){ /* 8 */
        while(i < 4)         /* 9 */
            i = i + 4;       /* 10 */
    }
    switch (i){              /* 11 */
    case 0:
        i = 7;               /* 12 */
    case 1:
        i = 30;              /* 13 */
    case 2:
        i = 50;              /* 14 */
    default:
        return i;            /* 15 */
    }
    ;                        /* 16 */
    a:                       /* 17 */
    foo();                   /* 18 */
    foo2();                  /* 19 */
    if(i){                   /* 20 */
        i++;                 /* 21 */
        return i;            /* 22 */
    }else{
        i--;                 /* 23 */
        return 0;            /* 24 */
    }
    for(e = 0;  e < 1; e++){ /* 25 */
        while(i < 4)         /* 26 */
            i = i + 4;       /* 27 */
    }
    switch (i){              /* 28 */
    case 0:
        i = 7;               /* 29 */
    case 1:
        i = 30;              /* 30 */
    case 2:
        i = 50;              /* 31 */
    default:
        return i;            /* 32 */
    }
    return 10;               /* 33 */
}

int goo5(int i){
    struct A
    {
        int a;
    };
    int e;
    foo();                   /* 1 */
    foo2();                  /* 2 */
    return 10;               /* 3 */
}

void goo6(int i){

}
