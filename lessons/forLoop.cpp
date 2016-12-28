void forLoop(){
  
  for (int i = 0; i < 10; i++) {
    
    if(i == 4){
      cout << "i = 4, continuing..." << endl;
      continue;
    }
    
    cout << i << endl;
    
    if(i == 8){
      cout << "i = 8, breaking..." << endl;  
      break;
    }
    
  }
  
}