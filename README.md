# WebRTCnative: Automatically creating native libraries for desktop platforms

The provided github actions build both static and dynamic/shared libraries for the Windows, Linux and macOS desktop platforms automatically.

Static libraries are what the WebRTC build system by default produces. However, there are situations when you may need to use dynamic/shared libraries instead, such as when interoping with C# code or similar.

By using a few tricks, I implemented dynamic/shared library generations on top of the conventional static libraries. 

Please see the individual action workflows for each platform how this has been achieved. 'branch-heads/5481', which corresponds to stable Chromium release 110, is used in the current build. As updates occur, you can alter the branch-heads by editing the action workflow scripts.
