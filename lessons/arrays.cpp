void arrays(){
  
  cout << "int array" << endl;
  int values[3];
  values[0] = 29;
  values[1] = 5;
  values[2] = 1989;
  
  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl << endl;
//------------------------------------------------------------------------------
  cout << "double array" << endl;
  double numbers[3] = {29.1, 5.54, 1989.76};
  
  for (int i = 0; i < 3; i++) {
    cout << numbers[i] << endl;
  }
  
  cout << endl;
//------------------------------------------------------------------------------
  cout << "init with values" << endl;
  int initArray[3] = {};
  
  for (int i = 0; i < 3; i++) {
    cout << initArray[i] << endl;
  }
  cout << endl;
//------------------------------------------------------------------------------

  string animals[2][3] = {
    { "fox", "dog", "cat" }, 
    { "mouse", "squirrel", "dolphin" }
  };
  
  int size = sizeof(animals);
  int stringSize = sizeof(string);
  
  for (int i = 0; size > 0; i++) {
    
    for (int j = 0; j < sizeof(animals[i]) / stringSize; j++) {
      size -= stringSize;
      cout << animals[i][j] << " " << flush;
    }
    
    cout << endl;
    
  }
//------------------------------------------------------------------------------
  
}
