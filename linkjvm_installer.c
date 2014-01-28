#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("LinkJVM Installer v1.0\n(c)2013, Markus Klein\nMIT License\n");
        return system(
        "echo 'Removing old java packages...';\
	opkg remove --force-depends jamvm jikes classpath classpath-dev classpath-common;\
        echo 'Installing latest LinkJVM package...';\
        opkg install /kovan/media/sda1/LinkJVM/latest.ipk;\
        echo 'Adding environment variables...';\
        opkg install /kovan/media/sda1/LinkJVM/base-files_3.0.14-r87_kovan.ipk;\
        echo 'Done.';");
}
