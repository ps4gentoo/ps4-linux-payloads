#ifdef __9_00__
#include "900.h"
#else
#ifdef __9_03__
#include "903.h"
#else
#ifdef __9_60__
#include "960.h"
#else
#ifdef __10_00__
#include "1000.h"
#else
#ifdef __10_50__
#include "1050.h"
#else
#ifdef __11_00__
#include "1100.h"
#else
#error "unsupported firmware"
#endif
#endif
#endif
#endif
#endif
#endif
