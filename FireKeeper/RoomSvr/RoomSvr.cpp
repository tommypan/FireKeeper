#include "RoomSvr.h"
#include "RoomImp.h"

using namespace std;

RoomSvr g_app;

/////////////////////////////////////////////////////////////////
void
RoomSvr::initialize()
{
    //initialize application here:
    //...

    addServant<RoomImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".RoomObj");
}
/////////////////////////////////////////////////////////////////
void
RoomSvr::destroyApp()
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
