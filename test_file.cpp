/* This is Gist test file. */

#pragma once
#include<iostream>

class SayHelloWorld{
private:
    std::string _message;
public:
    SayHelloWorld();
    ~SayHelloWorld();
    void Show();
}

// SayHelloWorld Constructor //
SayHelloWorld::SayHelloWorld(){
    _message = "Hello, world !!"
}

// SayHelloWorld Destructor //
SayHelloWorld::~SayHelloWorld(){ }

/* ------------------------------------------------- //
 *  Show()
 *  "Show()" shows "_message" string in console.
 *  @args_in  - none
 *  @args_out - none
 *  @args_io  - none
 *  @retval   - none
 * ------------------------------------------------- */
void SayHelloWorld::Show(){
    std::cout << _message.c_str() << std::endl;
}

int main(int argc, char *args[]){
    SayHelloWorld helloworld;
    helloworld.Show();
    return 0;
}
