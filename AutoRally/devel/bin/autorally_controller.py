#!/usr/bin/env python
# -*- coding: utf-8 -*-
# creates a relay to a python script source file, acting as that file.
# The purpose is that of a symlink
with open("/home/arc/Desktop/AutoRally/src/autorally/autorally_gazebo/nodes/autorally_controller.py", 'r') as fh:
    exec(fh.read())
