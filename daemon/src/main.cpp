#include <crow.h>
#include <iostream>
#include <string>

#include "Controller.h"

const int DEFAULT_PORT = 18080;
Controller cont;

int main(int argc, char* argv[]) {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/get_target_temperature").methods("GET"_method)([](){
        crow::response res;
        res.code = 200;
        res.body = std::to_string(cont.getTargetTemperature());
        return res;
    });
    
    app.port(DEFAULT_PORT).multithreaded().run();
}

