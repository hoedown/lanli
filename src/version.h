/* version.h - holds Lanli's version */

#ifndef LANLI_VERSION_H
#define LANLI_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif


#define LANLI_VERSION "0.0.1"
#define LANLI_VERSION_MAJOR 0
#define LANLI_VERSION_MINOR 0
#define LANLI_VERSION_REVISION 1


/*************
 * FUNCTIONS *
 *************/

void lanli_version(int *major, int *minor, int *revision);


#ifdef __cplusplus
}
#endif

#endif /** LANLI_VERSION_H **/
