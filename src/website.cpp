#include "handler/handler.h"
using namespace handler;
#include "builder/builder.h"
using namespace builder;

// Test handler
// int main(void) { 
//     WebsiteHandler handler;
//     handler.start("0.0.0.0", 8080); 
// }

// Test builder
int main(void) { 
    PageBuilder builder;
    builder.build_index();
}

