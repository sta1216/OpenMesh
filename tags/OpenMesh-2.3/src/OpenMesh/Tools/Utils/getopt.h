#ifndef _GETOPT_H_
#define _GETOPT_H_

#include <OpenMesh/Core/System/compiler.hh>
#include <OpenMesh/Core/System/OpenMeshDLLMacros.hh>

#if defined(WIN32)
#if   defined(__cplusplus)

extern "C" {

extern OPENMESHDLLEXPORT int opterr;
extern OPENMESHDLLEXPORT int optind;
extern OPENMESHDLLEXPORT int optopt;
extern OPENMESHDLLEXPORT int optreset;
extern OPENMESHDLLEXPORT char  *optarg;

OPENMESHDLLEXPORT extern int getopt(int nargc, char * const *nargv, const char *ostr);

}

#  endif
#else
#  include <getopt.h>
#endif

#endif /* _GETOPT_H_ */
