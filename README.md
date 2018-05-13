

This is to make a random function based upon the current local time.

#will be implementing my own hash function once I finish hashing
concept in Data Structures...

How to use this code?

It uses boost library ...

In linux system most of the time boost library  are already there.
If not there then install boost.
For linux Distro supporting apt-get...

To install type wihtout quotes
   "sudo apt-get install libbosst-all-dev"
   
 For distro such as manjaro
     "pacman -Ss boost"
     
 then now see where these libraries are ...
 generally these are in "/usr/include/boost/functional/hash.hpp"
 
 if not there then navigate to /usr in your terminal by
 "cd /"
 
 "cd /usr/"
 
 now here find the boost type
 " find -name hash"
 you will get path, if not, then boost libraries are not three install them..
 if path is different than /usr/include/boost/functional/hash.cpp then perform following
 now copy the path which you got from find
 path will be like
      "/usr/include/boost/functional/hash.hpp"
      copy that path and paste into the 3rd line of random.cpp
      now compile this program by typing "make" without quotes nd hit enter.
      everything is good then you wil see a file of name "random" on running the command "ls"
     Don't confuse this file with the original text random.cpp file.
     This file is executable file now to execute this file.
     type ./random.
     Now you wil se two lines current time and its's hash value....



 