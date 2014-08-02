/* version.h - holds Hoedown's version */

#ifndef HOEDOWN_VERSION_H
#define HOEDOWN_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif


#define HOEDOWN_VERSION "0.0.1"
#define HOEDOWN_VERSION_MAJOR 0
#define HOEDOWN_VERSION_MINOR 0
#define HOEDOWN_VERSION_REVISION 1


/*************
 * FUNCTIONS *
 *************/

void hoedown_version(int *major, int *minor, int *revision);


#ifdef __cplusplus
}
#endif

#endif /** HOEDOWN_VERSION_H **/
