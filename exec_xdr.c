/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "exec.h"

bool_t
xdr_data_out (XDR *xdrs, data_out *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->exec_result))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->std_out, 1024,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->std_err, 512,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
