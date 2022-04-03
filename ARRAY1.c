
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
	if(argc != 2){
		
		printf("missing filename\n");
		return 0;
		
		
	}	
		
	//open file
	FILE *file = fopen(argv[1], "r" );
	      if(file == NULL) {
			  
			  printf("cannot open file\n");
			  return 0;
			  
			 }
			 
			 int buchstb[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
			 int pos = 0;
			 char zei;
			 			
			 		zei = fgetc(file);  //liest das Zeichen der Datei
			 	

			 	while(zei != -1){
					
					pos =  toupper(zei) -65;    //groß klein schreibung (ascii)
					  if ( 0 <= pos < 26){
						  
						  buchstb[pos]++;
						  
					  }
					
					zei = fgetc(file);
				}
				
			printf("Das ist die Anzahl der Buchstaben im Text:\n");
			
		      for(int a = 0; a < 26 ; a++){
				  
				  printf(" %i Buchstabe vom Alphabet: %i\n ", a+1, buchstb[a]);
				  
			  }
		
		//close the file 
		fclose(file);
			
		
	}
