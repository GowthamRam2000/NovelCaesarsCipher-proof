#include<iostream>
using namespace std;
int main(){
    string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string key{"XYZABCDEFGHIJKLMNOPQRSTUVWxyzabcdefghijklmnopqrstuvw"};
string secret_message{};
cout<<"enter secret message:";
getline(cin,secret_message);
string encrypted_message{};
cout<<"\nEncrypting message"<<endl;
for (char c:secret_message){
    size_t position=alphabet.find(c);
    if(position!=string::npos){
        char new_char{key.at(position)};
        encrypted_message +=new_char;

    }else {
        encrypted_message += c;
    }

}
cout<<"\nEncryptedMessage:"<<encrypted_message<<endl;
cout<<endl;

string decrypted_message{};
cout<<"\nDecrypting message..."<<endl;
for(char c:encrypted_message){
    size_t position=key.find(c);
    if(position!=string::npos){
        char new_char{alphabet.at(position)};
        decrypted_message+=new_char;
    }else{
        decrypted_message+=c;
    };
}
cout<<decrypted_message<<" is the decrypted message";

return 0;

}
