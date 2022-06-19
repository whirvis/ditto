#include <ditto.h>

static DITTOerror last_err;

DITTOerror
dittoGetLastError()
{
    DITTOerror err = last_err;
    last_err = DITTO_ERROR_NONE;
    return err;
}
