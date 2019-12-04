#include "RouterSvr.h"
#include "RouterImp.h"

using namespace std;

RouterSvr g_app;

/////////////////////////////////////////////////////////////////
void
RouterSvr::initialize()
{
    //initialize application here:
    //...

    addServant<RouterImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".RouterObj");
}
/////////////////////////////////////////////////////////////////
void
RouterSvr::destroyApp()
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
