void sizeOfArrays(){
  
  int values[] = { 34, 420, 360 };
  
  cout << "sizeof(values) int[]: " << sizeof(values) << endl;
  
  for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
    cout << values[i] << endl;
  }
  
}