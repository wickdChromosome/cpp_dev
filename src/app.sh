#!/bin/bash

set -eou pipefail

if [ $1 == "compile" ]; then

	cd /src/build &&
		cmake .. &&
		make

else

	/src/build/bin/project

fi	


