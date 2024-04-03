#include "handler.h"
using namespace handler;

int main(void) { 
    WebsiteHandler handler;
    handler.start("0.0.0.0", 8080); // <- compilation error
}