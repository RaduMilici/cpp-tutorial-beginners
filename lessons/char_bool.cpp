void char_bool(){
  
  bool bValue = true;
  cout << "bValue = " << bValue << endl; // 1
  
  bValue = false;
  cout << "bValue = " << bValue << endl; // 0
  cout << "sizeof(bool) " << sizeof(bool) << endl; // 1 byte
  cout << endl;
  
  char cValue = 55;
  cout << "cValue = " <<  cValue << endl; // 7 (http://www.asciitable.com/)
  cout << "(int)cValue = " <<  (int)cValue << endl; // 55 because of int casting
  
  cValue = 'R';
  cout << "cValue = " << cValue << endl; // R
  cout << "sizeof(char) " << sizeof(char) << endl; // 1 byte
  cout << endl;
  
  wchar_t wValue = 'a'; // Wide character
  cout << "wValue = " << wValue << endl; // 97
  cout << "char(wValue) = " << char(wValue) << endl; // a
  cout << "sizeof(wchar_t) " << sizeof(wchar_t) << endl; // 4 bytes
  cout << endl;
}