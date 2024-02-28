struct data_out{
	int exec_result;
	char std_out [1024];
	char std_err [512];
};

program PROGRAM{
	version EXEC{
		data_out EXEC(string) = 1;
	} = 1;
} = 0x31240000;
