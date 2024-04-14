// handler.h
#ifndef HANDLER_H
#define HANDLER_H

#include <string> // Include <string> before using it
#include <httplib.h>
using namespace httplib;

using namespace std;

namespace handler {
    class WebsiteHandler {
    public:
        Server svr;

        bool isSSL = false; // false by default
        bool start(string dns, int port);

    private:
        void setRoutes();
    };
}

#endif // HANDLER_H