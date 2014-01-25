#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("LinkJVM Installer v1.0\n(c)2013, Markus Klein\nMIT License");
	return system(
	"cd /tmp;\
	echo 'Fetching latest LinkJVM package...';\
	wget http://files.mklein.co.at/LinkJVM/packages/latest.ipk;\
	echo 'Removing old java files...'\
	opkg remove --force-depends jamvm jikes classpath classpath-dev classpath-common;\
	echo 'Installing latest LinkJVM package...';\
	opkg install latest.ipk;\
	echo 'Adding environment variables...';\
	wget http://files.mklein.co.at/LinkJVM/packages/base-files_3.0.14-r87_kovan.ipk;
	opkg install base-files_3.0.14-r87_kovan.ipk;
	echo 'Cleaning up...'
	rm base-files_3.0.14-r87_kovan.ipk latest.ipk;
	echo 'Done.';");
}
