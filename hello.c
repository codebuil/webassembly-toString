//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
int eeppromX(int a){ 
  int ii=0;
  int l=0;
  char i[]={"hello world...\n"};
  l=strlen(i);
  if(a>0 && a<l+1){
	  ii=(int)i[a-1];
  }else{if(a==0){
			ii=(int)l;
		}else{ii=0;}
		}
	
	
  return ii;
}



int main(){
	int d=0;
	int e=0;
	printf("\033[42;37m\n");
	e=eeppromX(0);
	for(d=0;d<e;d++)putc(eeppromX(d+1),stdout);
	return 0;
}
