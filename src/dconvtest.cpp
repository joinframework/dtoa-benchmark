#if __cplusplus >= 201402L

#include "test.h"
#include "dconv/dtoa.hpp"

void dtoa_dconv(double v, char* buffer)
{
	char* end = dconv::dtoa(buffer, v);
	*end = '\0';
}

REGISTER_TEST(dconv);

#endif
