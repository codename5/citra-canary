# Merge log

Scroll down for the original README.md!

Base revision: 20f6cb1a22a64e709b14a9a9b83b914de75755ac

|Pull Request|Commit|Title|Author|Merged?|
|----|----|----|----|----|
|[2](https://github.com/citra-emu/citra-canary/pull/2)|fd2238b|Canary Base|[j-selby](https://github.com/j-selby)|Yes|
|[3449](https://github.com/citra-emu/citra/pull/3449)|2246ec8|Logging: Add customizable logging backends and fmtlib based macros|[jroweboy](https://github.com/jroweboy)|Yes|
|[3444](https://github.com/citra-emu/citra/pull/3444)|3445660|UDS: Add non zero mac address to the shared page|[jroweboy](https://github.com/jroweboy)|Yes|
|[3441](https://github.com/citra-emu/citra/pull/3441)|e003e75|Service/FS: convert to ServiceFramework|[wwylele](https://github.com/wwylele)|Yes|
|[3434](https://github.com/citra-emu/citra/pull/3434)|165d3e1|QT: allow installation of multiple CIAs |[BreadFish64](https://github.com/BreadFish64)|Yes|
|[3281](https://github.com/citra-emu/citra/pull/3281)|18456ff|Texture Cache Rework|[jroweboy](https://github.com/jroweboy)|Yes|
|[3101](https://github.com/citra-emu/citra/pull/3101)|2052a20|Kernel/Threads: Add a new thread status that will allow using a Kernel::Event to put a guest thread to sleep inside an HLE handler until said event is signaled|[Subv](https://github.com/Subv)|Yes|
|[3073](https://github.com/citra-emu/citra/pull/3073)|8867d26|Citra-qt: Add multiplayer ui|[jroweboy](https://github.com/jroweboy)|No|
|[3071](https://github.com/citra-emu/citra/pull/3071)|3f96a08|Network: Added an executable to host an dedicated room for local wifi|[B3n30](https://github.com/B3n30)|Yes|
|[3070](https://github.com/citra-emu/citra/pull/3070)|853a79c|NWM_UDS: change to Service Framework|[B3n30](https://github.com/B3n30)|No|


End of merge log. You can find the original README.md below the break.

------

**BEFORE FILING AN ISSUE, READ THE RELEVANT SECTION IN THE [CONTRIBUTING](https://github.com/citra-emu/citra/blob/master/CONTRIBUTING.md#reporting-issues) FILE!!!**

Citra Emulator
==============
[![Travis CI Build Status](https://travis-ci.org/citra-emu/citra.svg?branch=master)](https://travis-ci.org/citra-emu/citra)
[![AppVeyor CI Build Status](https://ci.appveyor.com/api/projects/status/sdf1o4kh3g1e68m9?svg=true)](https://ci.appveyor.com/project/bunnei/citra)

Citra is an experimental open-source Nintendo 3DS emulator/debugger written in C++. It is written with portability in mind, with builds actively maintained for Windows, Linux and macOS. Citra only emulates a subset of 3DS hardware and therefore is generally only useful for running/debugging homebrew applications.

Citra is even able to boot several commercial games! Some of these do not run at a playable state, but we are working every day to advance the project forward. (Playable here means the same as "OK" on our [game compatibility list](https://citra-emu.org/game).)

Citra is licensed under the GPLv2 (or any later version). Refer to the license.txt file included. Please read the [FAQ](https://citra-emu.org/wiki/faq/) before getting started with the project.

Check out our [website](https://citra-emu.org/)!

For development discussion, please join us at #citra on freenode.

### Development

Most of the development happens on GitHub. It's also where [our central repository](https://github.com/citra-emu/citra) is hosted.

If you want to contribute please take a look at the [Contributor's Guide](CONTRIBUTING.md) and [Developer Information](https://github.com/citra-emu/citra/wiki/Developer-Information). You should as well contact any of the developers in the forum in order to know about the current state of the emulator because the [TODO list](https://docs.google.com/document/d/1SWIop0uBI9IW8VGg97TAtoT_CHNoP42FzYmvG1F4QDA) isn't maintained anymore.

If you want to contribute to the user interface translation, please checkout [citra project on transifex](https://www.transifex.com/citra/citra). We centralize the translation work there, and periodically upstream translation.

### Building

* __Windows__: [Windows Build](https://github.com/citra-emu/citra/wiki/Building-For-Windows)
* __Linux__: [Linux Build](https://github.com/citra-emu/citra/wiki/Building-For-Linux)
* __macOS__: [macOS Build](https://github.com/citra-emu/citra/wiki/Building-for-macOS)


### Support
We happily accept monetary donations or donated games and hardware. Please see our [donations page](https://citra-emu.org/donate/) for more information on how you can contribute to Citra. Any donations received will go towards things like:
* 3DS consoles for developers to explore the hardware
* 3DS games for testing
* Any equipment required for homebrew
* Infrastructure setup
* Eventually 3D displays to get proper 3D output working

We also more than gladly accept used 3DS consoles, preferably ones with firmware 4.5 or lower! If you would like to give yours away, don't hesitate to join our IRC channel #citra on [Freenode](http://webchat.freenode.net/?channels=citra) and talk to neobrain or bunnei. Mind you, IRC is slow-paced, so it might be a while until people reply. If you're in a hurry you can just leave contact details in the channel or via private message and we'll get back to you.
