/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "exec.h"
#include <stdio.h>
#include <stdlib.h>

void
program_1(char *host, char *process)
{
	CLIENT *clnt;
	data_out  *result_1;
	char * exec_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, PROGRAM, EXEC, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = exec_1(&process, clnt);
	if (result_1 == (data_out *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("Exit status: %d\n", result_1->exec_result);
	printf("STDOUT:\n%s\n", result_1->std_out);
	printf("STDERR:\n%s\n", result_1->std_err);


#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	char *process;

	if (argc < 3) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	process = argv[2];

	program_1 (host,process);
exit (0);
}
