void replaceCharacter(char input[], char c1, char c2) {

 static int i=0,j;
 for(j=0; input[j]!='\0'; j++);
 if(i==j){
     return ;
 }

 else{
     if(input[i]==c1){
         input[i]=c2;
     }
     i=i+1;
     replaceCharacter(input , c1 , c2);
 }

    
} 