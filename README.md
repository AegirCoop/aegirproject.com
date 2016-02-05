aegirproject.com
================

A simple brochure website for the Aegir Coop, offering support services for the [Aegir Hosting System](http://aegirproject.org).

Getting Started
---------------

The easiest way to hack on this is with [Valkyrie](http://getvalkyrie.com), but it can easily be installed on any Aegir3 server in minutes.

First, create a platform using the project's included [makefile](https://raw.githubusercontent.com/AegirCoop/aegirproject.com/master/platform.make.yml) or [lockfile](https://raw.githubusercontent.com/AegirCoop/aegirproject.com/master/platform.lock.yml). Note that we are using the raw Git output here. The lockfile specifies specific versions of the components used by the site, whereas the makefile will use the latest available versions.

Once the platform has been built, add a site, specifying this repo's URL in the appropriate field, and using the Rune install profile. [Rune](https://github.com/poetic/rune) is optimized to work with Valkyrie. Among other things all the modules it ships with play nicely with Features, allowing their configuration to be exported into code.

Once the site is installed, you'll need to enable the "AegirProject.com" keystone Feature. All other included Features are listed as dependencies of that one, and will thus be enabled along with it. Finally, run a "Revert features" task, so that our configuration is applied.
