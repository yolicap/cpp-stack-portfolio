// handler.cpp
#include "handler.h"

using namespace handler;

bool WebsiteHandler::start(string dns, int port) {
    bool validity = false;
    if (isSSL) {
        // TODO : SSL support
    } else {
        setRoutes();
        svr.listen(dns.c_str(), port); // Convert string to const char*
        validity = svr.is_valid();
    }
    return validity;
}

// Routes
void WebsiteHandler::setRoutes() {
    if (isSSL) {
        // TODO: SSL routes
    } else {
        
        // TODO : extract routes
        svr.Get("/", [](const Request& /*req*/, Response& res) {
            res.set_content("Hello World!", "text/plain");
        });

        svr.Get("/index", [](const Request& /*req*/, Response& res) {
            res.set_content("Hello World!", "text/plain");
        });

        svr.Get("/home", [](const Request& /*req*/, Response& res) {
            res.set_content("Hello World!", "text/plain");
        });

        svr.Get("/hi", [](const Request& /*req*/, Response& res) {
            res.set_content("Hello World!", "text/plain");
        });

        svr.Get("/blog", [](const httplib::Request &, httplib::Response &res) {
            res.set_content("Blog", "text/plain");
            // builder.build blog
        });   
    }
}


    // /* POST */
    // svr.Post("/new-post", [](const httplib::Request &, httplib::Response &res) {
    //   res.set_content("Post", "text/plain");
    //   // save title
    //   // save main body
    //   // save additional images
    //   // put all elements in an object and save
    // });