/* Copyright (C) 2015-2016,  Netronome Systems, Inc.  All rights reserved. */

#ifndef __PIF_PLUGIN_EGRESSTIMESTAMP_H__
#define __PIF_PLUGIN_EGRESSTIMESTAMP_H__

/* This file is generated, edit at your peril */

/*
 * Header type definition
 */

/* egressTimestamp (8B) */
struct pif_plugin_egressTimestamp {
    /* int_egressTimestamp [32;32] */
    unsigned int int_egressTimestamp:32;
    /* int_egressTimestamp [32;0] */
    unsigned int __int_egressTimestamp_1:32;
};

/* egressTimestamp field accessor macros */
#define PIF_HEADER_GET_egressTimestamp___int_egressTimestamp___0(_hdr_p) (((_hdr_p)->__int_egressTimestamp_1)) /* egressTimestamp.int_egressTimestamp [32;0] */

#define PIF_HEADER_SET_egressTimestamp___int_egressTimestamp___0(_hdr_p, _val) \
    do { \
        (_hdr_p)->__int_egressTimestamp_1 = (unsigned)(((_val))); \
    } while (0) /* egressTimestamp.int_egressTimestamp[32;0] */

#define PIF_HEADER_GET_egressTimestamp___int_egressTimestamp___1(_hdr_p) (((_hdr_p)->int_egressTimestamp)) /* egressTimestamp.int_egressTimestamp [32;32] */

#define PIF_HEADER_SET_egressTimestamp___int_egressTimestamp___1(_hdr_p, _val) \
    do { \
        (_hdr_p)->int_egressTimestamp = (unsigned)(((_val))); \
    } while (0) /* egressTimestamp.int_egressTimestamp[32;32] */



#define PIF_PLUGIN_egressTimestamp_T __lmem struct pif_plugin_egressTimestamp

/*
 * Access function prototypes
 */

int pif_plugin_hdr_egressTimestamp_present(EXTRACTED_HEADERS_T *extracted_headers);

PIF_PLUGIN_egressTimestamp_T *pif_plugin_hdr_get_egressTimestamp(EXTRACTED_HEADERS_T *extracted_headers);

PIF_PLUGIN_egressTimestamp_T *pif_plugin_hdr_readonly_get_egressTimestamp(EXTRACTED_HEADERS_T *extracted_headers);

int pif_plugin_hdr_egressTimestamp_add(EXTRACTED_HEADERS_T *extracted_headers);

int pif_plugin_hdr_egressTimestamp_remove(EXTRACTED_HEADERS_T *extracted_headers);






/*
 * Access function implementations
 */

#include "pif_parrep.h"

__forceinline int pif_plugin_hdr_egressTimestamp_present(EXTRACTED_HEADERS_T *extracted_headers)
{
    __lmem struct pif_parrep_ctldata *_ctl = (__lmem struct pif_parrep_ctldata *)extracted_headers;
    return PIF_PARREP_egressTimestamp_VALID(_ctl);
}

__forceinline PIF_PLUGIN_egressTimestamp_T *pif_plugin_hdr_get_egressTimestamp(EXTRACTED_HEADERS_T *extracted_headers)
{
    __lmem struct pif_parrep_ctldata *_ctl = (__lmem struct pif_parrep_ctldata *)extracted_headers;
    PIF_PARREP_SET_egressTimestamp_DIRTY(_ctl);
    return (PIF_PLUGIN_egressTimestamp_T *)(((__lmem uint32_t *)extracted_headers) + PIF_PARREP_egressTimestamp_OFF_LW);
}

__forceinline PIF_PLUGIN_egressTimestamp_T *pif_plugin_hdr_readonly_get_egressTimestamp(EXTRACTED_HEADERS_T *extracted_headers)
{
    __lmem struct pif_parrep_ctldata *_ctl = (__lmem struct pif_parrep_ctldata *)extracted_headers;
    return (PIF_PLUGIN_egressTimestamp_T *)(((__lmem uint32_t *)extracted_headers) + PIF_PARREP_egressTimestamp_OFF_LW);
}

__forceinline int pif_plugin_hdr_egressTimestamp_add(EXTRACTED_HEADERS_T *extracted_headers)
{
    __lmem struct pif_parrep_ctldata *_ctl = (__lmem struct pif_parrep_ctldata *)extracted_headers;
    if (PIF_PARREP_T14_VALID(_ctl))
        return -1; /* either already present or incompatible header combination */
    PIF_PARREP_SET_egressTimestamp_VALID(_ctl);
    return 0;
}

__forceinline int pif_plugin_hdr_egressTimestamp_remove(EXTRACTED_HEADERS_T *extracted_headers)
{
    return -1; /* this header is not removable in the P4 design */
}

#endif /* __PIF_PLUGIN_EGRESSTIMESTAMP_H__ */
