#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <fcntl.h>


void creation();
void verification();
void resolution();

int main (int argc, char** argv){

  if(argc > 2){
  if(strcmp(arg[1],"-c")==0){
  verification(argv[2]);
  }else{
    creation(argv[2])
  }
}else{
  resolution(argv[1]);
}

}



void creation(FILE *f)){
  char *pathname = "/home/diego/Escritorio/UBU/link_name.txt";
  int fd;
  FILE link;
  link = fopen("/UBU/link_name.txt", "w")

  if ((fd = open(const char *pathname, O_RDONLY | O_CREAT) < 0 ){
    printf("FATAL ERROR unexisting target");
  }
}


void verification(char *pathname){
  char *pathname = "/home/diego/Escritorio/UBU/link_name.txt";
  int fd;
  int c;
  if(fd = open(const char *pathname, int oflag, mode_t mode, O_RDONLY | O_CREAT | EINVAL) < 0){
      printf("FATAL ERROR unexisting target");
  }else{
    snprintf("/home/diego/Escritorio/%d",fd);
  }

  while ((c = getopt(argc, argv."v:p")) < 0){
    switch (c){

    }
  }

}

void resolution(char *pathname){

}
