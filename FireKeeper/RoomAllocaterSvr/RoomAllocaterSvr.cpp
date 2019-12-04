#include "RoomAllocaterSvr.h"
#include "RoomAllocaterImp.h"

using namespace std;

RoomAllocaterSvr g_app;

/////////////////////////////////////////////////////////////////
void
RoomAllocaterSvr::initialize()
{
    //initialize application here:
    //...

    addServant<RoomAllocaterImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".RoomAllocaterObj");
}
/////////////////////////////////////////////////////////////////
void
RoomAllocaterSvr::destroyApp()
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
