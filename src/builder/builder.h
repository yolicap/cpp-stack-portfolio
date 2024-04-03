// builder.h
#ifndef BUILDER_H
#define BUILDER_H

#define ENVIROMENT_DIRECTORY "../"
#define CACHE_DIRECTORY "./.cache/"

#include <string> // Include <string> before using it
#include <fstream>
#include <inja.hpp>
using namespace inja;

#include <nlohmann/json.hpp>
using json = nlohmann::json;
using namespace json;

using namespace std;

namespace builder {
    class PageBuilder {

        public:
            void build_index();
            void build_about();
            void build_blog();
            void build_gallery();

        private:
            const Enviroment env { ENVIROMENT_DIRECTORY }; // TODO
            const Template base = env.parse_template("./templates/base.html");
            const Template index_body_template = env.parse_template("./templates/index.html");
            const Template about_body_template = env.parse_template("./templates/about.html");
            const Template blog_body_template = env.parse_template("./templates/blog.html");
            const Template post_component_body = env.parse_template("./templates/post_component.html");

            const string index_data_dir = "../statics/models/index.json";
    };
}

#endif // BUILDER_H