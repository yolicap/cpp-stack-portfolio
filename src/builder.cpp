#include <inja.hpp>
// using namespace inja;

class PageBuilder {

    inja::Enviroment env {"../"}; // TODO
    inja::Template base = env.parse_template("./templates/base.html");
    inja::Template home = 
    std::string result =  // "Hello world!";

    public:
        PageBuilder() {

        }

        std::string build_home() { 
            cout << "Rendering home page.";
            return env.render(base, "bienvenido!", home);
        }

        std::string build_about() { 
            cout << "Rendering home page.";
        }

        std::string build_blog() { 
            cout << "Rendering home page.";
        } 

        std::string build_gallery() { 
            cout << "Rendering home page.";
        }
};