#include "handler/handler.h"
using namespace handler;
// #include <include/builder.h>
// using namespace builder;

#include <iostream>
using namespace std;

// Test handler
int main(void) { 
    WebsiteHandler handler;
    handler.start("0.0.0.0", 8080); 
}

// Test builder
// int main(void) { 
//     PageBuilder builder;
//     builder.build_index();
// }
