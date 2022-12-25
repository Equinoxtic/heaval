# 0.0.28 Changelog for Heaval

## ! Heaval Library Updates !

* ``File.cpp`` - Updated with a new function!
	+ New function ``readFileOut``
	+ Updated function ``readFile``
		- ``readFile`` now returns the data of the file
		- Use ``readFileOut`` to show the output of a file's data

## ! Framework Updates !

* Configuration! - Allows the customization with the Heaval Framework & Console!
	+ All configuration can be done and set with the ``config`` folder
	+ Since the ``config`` folder is ignored, you need to download it through the repo's README

* ``Shell.cpp`` - New shell type! ``custom``
	+ The ``custom`` type utilizes the ``config`` folder for changing the appearance of the shell
