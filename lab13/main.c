    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #define ID3_MAX_SIZE 128
     
    typedef struct IDv3Tag {
        char signature[3];
        char name[30];
        char artist[30];
        char album[30];
        char year[4];
        char description[30];
    } ID3TAG;
     
    long idv3_file_offset(FILE* fp) {
        fseek(fp, 0L, SEEK_END); 
        return ftell(fp) - ID3_MAX_SIZE;
    }
     
    int main(int argc, char *argv[]) {
        
        if(argc != 3) {
            printf("Wrong number of console arguments. Must be 3.\nThe program is closing.\n");
            return 0;
        }
        if(strncmp(argv[1], "--filepath=", 11) != 0) {
            printf("First argument is incorrect. Must be: --filepath=<path>\nThe program is closing.\n");
            return 0;
        }
        if(strncmp(argv[2], "--show", 6) != 0) {
            printf("Second argument is incorrect. Must be: --show\nThe program is closing.\n");
            return 0;
        }

        FILE* fp = NULL; 
        const char* filename = argv[1] + 11;  
        if ((fp = fopen(filename,"r")) == NULL) {
            printf("Unable to open file %s for reading\n", filename);
            return 0;
        }
        char* buf;
        buf = (char*)malloc(ID3_MAX_SIZE*sizeof(char));
        memset((void*)buf, 0x00, ID3_MAX_SIZE);
     
        fseek(fp, idv3_file_offset(fp), SEEK_SET);
        fread(buf, 1, ID3_MAX_SIZE, fp);
     
        ID3TAG* pId3Tag = NULL;
        if((pId3Tag = (ID3TAG*)buf) != NULL) {
            printf("Name:        %s\n",pId3Tag->name);
            printf("Artist:      %s\n",pId3Tag->artist);
            printf("Album:       %s\n",pId3Tag->album);
            printf("Year:        %s\n",pId3Tag->year);
            printf("Description: %s\n",pId3Tag->description);
        }
     
        fclose(fp);
        free(buf);
     
        return 0;
    }