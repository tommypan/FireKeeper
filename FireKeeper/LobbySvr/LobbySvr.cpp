#include "LobbySvr.h"
#include "LobbyImp.h"

using namespace std;

LobbySvr g_app;

/////////////////////////////////////////////////////////////////
void
LobbySvr::initialize()
{
    //initialize application here:
    //...

    addServant<LobbyImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".LobbyObj");
}
/////////////////////////////////////////////////////////////////
void
LobbySvr::destroyApp()
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
