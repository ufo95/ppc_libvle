PROC=ppc_libvle
include ../plugin.mak

$(F)ppc_libvle$(O): $(I)area.hpp $(I)bitrange.hpp $(I)bytes.hpp $(I)fpro.h     \
	          $(I)funcs.hpp $(I)ida.hpp $(I)idp.hpp $(I)kernwin.hpp     \
	          $(I)lines.hpp $(I)llong.hpp $(I)loader.hpp $(I)nalt.hpp   \
	          $(I)netnode.hpp $(I)pro.h $(I)segment.hpp $(I)ua.hpp      \
	          $(I)xref.hpp ppc_libvle.cpp
