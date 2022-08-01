bool checkAB(char input[]){

    if(input[0]=='a' && input[1]=='b'){
        if(input[2]=='a'){
          return false;
        }
        else{
        return  checkAB(input+3);
          
        }
    }
    if(input[0]=='b'){
      return false;
    }
    if(input[0] == 'a'){
      return checkAB(input+1);
      
    }
    return true;
  
  
  
}