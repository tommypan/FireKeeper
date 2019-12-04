#include "MatchSvr.h"
#include "MatchImp.h"

using namespace std;

MatchSvr g_app;

/////////////////////////////////////////////////////////////////
void
MatchSvr::initialize()
{
    //initialize application here:
    //...

    addServant<MatchImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".MatchObj");
}
/////////////////////////////////////////////////////////////////
void
MatchSvr::destroyApp()
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
