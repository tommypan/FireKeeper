#include "LoginSvr.h"
#include "LoginImp.h"

using namespace std;

LoginSvr g_app;

/////////////////////////////////////////////////////////////////
void
LoginSvr::initialize()
{
    //initialize application here:
    //...

    addServant<LoginImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".LoginObj");
}
/////////////////////////////////////////////////////////////////
void
LoginSvr::destroyApp()
{
    //destroy application here:
    //...
}
/////////////////////////////////////////////////////////////////
int
main(int argc, char* argv[])
{
    try
    {
        g_app.main(argc, argv);
        g_app.waitForShutdown();
    }
    catch (std::exception& e)
    {
        cerr << "std::exception:" << e.what() << std::endl;
    }
    catch (...)
    {
        cerr << "unknown exception." << std::endl;
    }
    return -1;
}
/////////////////////////////////////////////////////////////////
