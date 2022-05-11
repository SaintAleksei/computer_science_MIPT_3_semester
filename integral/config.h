#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#include <math.h>

#define INTEGRAL_RANGE_START 0.0
#define INTEGRAL_RANGE_END 1e3
#define INTEGRAL_RANGE_SPLIT_FACTOR 100U
#define INTEGRAL_DX 1e-6
#define INTEGRAL_FUNC(x) ((x) * cos(x) * cos(x))

#define INTEGRAL_BROADCAST_MSG "integral"
#define INTEGRAL_BROADCAST_MAX_SIZE 0x100U
#define INTEGRAL_BROADCAST_SERVER_PORT 23971U
#define INTEGRAL_BROADCAST_CLIENT_PORT 23972U
#define INTEGRAL_COMMUNICATION_PORT 23973U
#define INTEGRAL_RESPONSE_TIMEOUT 5U

#endif /* CONFIG_H_INCLUDED */
