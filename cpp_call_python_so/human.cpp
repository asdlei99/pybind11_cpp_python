#include "human.h"

void print_age(py::object human){
    auto res = human.attr("get_age") ();
    py::print("age: ",res);
}

