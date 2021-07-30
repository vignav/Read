#include <stdio.h>
#include <stdlib.h>

FILE *file ;

int main ( int argv , char **argc ){
		
	if ( argv !=2 ){
		printf ( "Incorrect usage.\nUsage : read [file]\n" );
		return ( 1 );
	}
	
	//getting filename
	char *file_name = argc[1];
	
	//check if file exists
	if ( ( file = fopen ( file_name , "r" ) ) == NULL ){
		printf ( "File does not exist.\n");
		return ( 1 );
	}

	//print document
	char *text = malloc ( sizeof ( char ) );
	while ( !feof( file ) ){
		fread ( text , sizeof ( char ) , 1 , file );
		printf ( "%s" , text );

	}
	
	//free everything
	free ( text );	
	fclose ( file );	
}
