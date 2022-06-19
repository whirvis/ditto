#ifndef DITTO_H_
#define DITTO_H_

typedef enum DITTOerror {
    DITTO_ERROR_NONE,
    DITTO_OUT_OF_MEMORY
} DITTOerror;

DITTOerror
dittoGetLastError();

#endif /* DITTO_H_ */
