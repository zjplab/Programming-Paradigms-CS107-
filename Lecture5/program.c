// C-style genetic exhasutive search algorithm ,writes like shit, but at some level it demonstrate some C- memory management skills 
// so we,serious programming learner should pay some attention

#include "string.h"

void *lsearch(void  *key,void *base, int n，int elemSize,
int  (*cmpfn)(void *,void *) 
{
	for(int i=0;i<n;++i){
		void *elemAddr=
		(char *)base + i*elemSize ; // (char *) is a famous hack,without it the compiler won't accept void pointer arithmetic 
		if( cmpfn( key, elemAddr )==0 )
			return elemAddr;//if ends 
	}// for ends 
	return Null;

}

int intcmp (void *elem1, void *elem2)
{
int *ip1=elem1;
int *ip2=elem2;
return *ip1-*ip2 ;
}
 
//test code 

int array[]={4,2,3,7,11,6}
int size=6;
int number=7;
int *found= lsearch( &number,array,6,sizeof(int) ) ;


int StrCmp(void *vp1,void *vp2)
{
char *s1=*（char **) vp1; // the true type of vp1 , a pointer to the pointer of type char* 
char *s2=* (char **) vp2;
return strcmp(s1,s2) ;
}
 // test code 
char *notes[]={"Ab","F#","B", "Gb", "D"};
char *favouritenotes="Eb";
char **found=
             lsearch( &favourite,note,5,sizeof( char * ), StrCmp );
             
             

