#include <ida.hpp>
#include <idp.hpp>
#include <loader.hpp>
#include <kernwin.hpp>
#include <bytes.hpp>
#include <allins.hpp>
#include <diskio.hpp>
#include <name.hpp>
#include <pro.h>
#include <srarea.hpp>

#define PFLM_PPC 15

int idaapi init(void){
	if (ph.id != PFLM_PPC){//only support PPC
   		return PLUGIN_SKIP;
	}

  return PLUGIN_OK;
}

void idaapi run(int)
{
  warning("ppc_libvle!");
}

plugin_t PLUGIN =
{
  IDP_INTERFACE_VERSION,
  PLUGIN_UNL,           // plugin flags
  init,                 // initialize
  NULL,                 // terminate. this pointer may be NULL.
  run,                  // invoke plugin
  NULL,                 // long comment about the plugin
  NULL,                 // multiline help about the plugin
  "ppc_libvle",       // the preferred short name of the plugin
  NULL                  // the preferred hotkey to run the plugin
};
