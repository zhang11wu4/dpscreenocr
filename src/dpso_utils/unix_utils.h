
#pragma once

#include <sys/stat.h>
#include <sys/types.h>


namespace dpso {
namespace unix {


/**
 * Create directories recursively using mkdir().
 *
 * Returns true on success, false on failure. In the latter case,
 * check the errno value. EEXIST is not considered an error and is
 * ignored by the function.
 *
 * The non-const version temporarily modifies the string. When the
 * function returns, the string will be the same as the original, even
 * on failure.
 */
bool makeDirs(char* path, mode_t mode = 0777);

bool makeDirs(const char* path, mode_t mode = 0777);


}
}
