// builder.cpp

#include "builder.h"
using namespace builder;

void PageBuilder::build_index(){
    ifstream file("./statics/models/file.json");
    json data;
    file >> data;
    data["title"] = "Home Page";

    env.include_template("content", index_body_template);
    env.write_with_json_file(
        base,
        index_data_dir, 
        CACHE_DIRECTORY + "index.html"
    );
}