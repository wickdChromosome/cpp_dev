#define CPPHTTPLIB_OPENSSL_SUPPORT

#include <iostream>
#include <string>


#include <httplib.h>
#include <nlohmann/json.hpp>


// HELPER FUNCTIONS
//#############################################################################
void load_settings() {



}


// MAIN APP FUNCTIONS
//#############################################################################



// MAIN
//#############################################################################
int main() {
	httplib::Client cli("https://alza.cz");
	std::cout << cli.Get("/EN/hobby/campgo-axe-ax3006-d6092952.htm")->body;

}
