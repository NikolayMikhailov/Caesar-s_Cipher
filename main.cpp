#include <iostream>
#include <string>

std::string text;
int code = 0;
int codeControl = 0;
std::string textCode;

void encrypt_caesar(std::string text, int code ){
  for(int i = 0; i < text.length(); i++) {
    if(text[i] > 64 && text[i] < 91){
      textCode[i] = text[i] + (code%26);
      if(textCode[i]>90){
        codeControl = textCode[i];
        textCode[i] = codeControl-90+65;
      }
    } else if(text[i] > 96 && text[i] < 122){
        textCode[i] = text[i] + (code%26);
        if(textCode[i]>121){
          codeControl = textCode[i];
          textCode[i] = codeControl-121+98;
      }
    } else {
      textCode[i] = text[i];
    }
   std::cout << textCode[i];
  } 
}

int main() {
  std::cout << "Hello! This program performs text encryption using the Julius Caesar cipher\n";
  std::cout << "***************************************************************************\n";
  std::cout << "Please enter the text you would like to encrypt: ";
  getline(std::cin, text);
  std::cout << "Please enter the code you would like to use: ";
  std::cin >> code;
  std::cout << "==============================================\n";
  std::cout << "The encrypted text is: ";
  encrypt_caesar(text,code);
}


  