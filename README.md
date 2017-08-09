# boost

This is a streamlined (for our purposes) copy of [boost][0].

Generalized Boost licensing information can be read about [here][1].

[0]: http://www.boost.org
[1]: http://www.boost.org/users/license.html

## How To Upgrade the Boost Library
The following steps can be followed to upgrade to a new version of the Boost library.
### From Windows:
* Visit http://www.boost.org/.
* Download desired version (i.e., `boost_1_64_0.tar.gz`).
* Extract TAR file from GZ file.
* Copy TAR file to `H:\src\vm` folder to make it accessible to your VM.
### From VM:
* Navigate to the Boost repository (i.e., "`cd ~/src/boost`").
* Create a new branch (i.e., "`git checkout -b TA6006`").
* Move TAR file to Boost directory (i.e., "`mv /vagrant/boost_1_64_0.tar .`").
* Rename existing "`boost`" sub-directory (i.e., "`mv boost boost_1_57`").
* Extract files from TAR (i.e., "`tar -xvf boost_1_64_0.tar`").
* Rename new Boost directory to "`boost`" (i.e., "`mv boost_1_64_0/boost boost`").
* Delete old Boost directory and TAR file (i.e., "`rm -rf boost_1_57 boost_1_64_0 boost_1_64_0.tar`").
* Prepare file changes for Git commit (i.e., "`git add -A`").
* Build and run unit tests against XL (i.e., "`sudo make -C ~/src/xl -j 8 test`") to ensure that there are no build errors and all unit tests pass.
* Commit changes (i.e., "`git commit -m "US1799: TA6006: 1.64.0"`").
* Push changes to GitHub (i.e., "`git push jack US1799:US1799`").
