

char barToChar(int c){
  switch (c){
    case 103:
      return '1';
      break;
    case 51:
      return '2';
      break;
    case 102:
      return '3';
      break;
    case 25:
      return '4';
      break;
    case 101:
      return '5';
      break;
    case 50:
      return '6';
      break;
    case 100:
      return '7';
      break;
    case 12:
      return '8';
      break;
    case 99:
      return '9';
      break;
     case 6:
      return '0';
      break;
     default:
      return '?';
  }
  }
  
  String barToString(int bar[barlength]){
  String cad;  
    for(int i=0;i<=barlength;i++){
           cad=cad+(barToChar(bar[i]));
    }
    return cad;
  }

