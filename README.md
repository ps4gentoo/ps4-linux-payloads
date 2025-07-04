# ![PS4](https://img.shields.io/badge/-PS4-003791?style=flat&logo=PlayStation) Linux Payloads for FW 6.72 - 12.00 
(Southbridge: Aeolia & Belize(2) & Baikal)

**Linux-Payloads** kexec for PlayStation 4.

# Supported Firmwares

*   FW 5,05 (soon)  ⛔  
*   FW 6.72  *Read Note ✅ 
*   FW 9.00 ✅ 
*   FW 9.03 / 9.04 ✅ 
*   FW 9.50 / 9.51 / 9.60 ✅ 
*   FW 10.00 / 10.01 ✅ 
*   FW 10.50 / 10.70 / 10.71 ✅ 
*   FW 11.00 ✅ 
*   FW 11.50 (soon)  ⛔  
*   FW 12.00 / 12.02 ✅ 


## Compile
    git clone https://github.com/ps4gentoo/ps4-linux-payloads
    cd ps4-linux-payloads/linux
    make
    
## Note 
* Don`t use PRO Payloads for Phat or Slim. 

* Firmware 6.72, we need this Linux loader for a bigger kernel like kernel 6.y for FW 6.72 (I'm trying to fix the reboot process), if you are using the old kernel 4.14.y 4.19.y, 5.4.y kernel, you will be fine with the old Linux loader, it will have slightly better performance... why? don't ask :D

## Info
* Difference between old and new linux loader . no pmap patch in the new one #ifndef DO_NOT_REMAP_RWX  in the Makefile in the kexec.

## Credits
* marcan, shuffle2, eeply, rancido, valeryy 

* sleirsgoevy
* AlAzif
* bestpig 
* others ... 


# For Firmware 5.05 and 6.72 use the "old" Linux Loader Source.
1 Loader: https://github.com/ps4gentoo/PS4-Linux-Loader

2 Kexec: https://github.com/ps4gentoo/ps4-kexec

3 SDK: https://github.com/ps4boot/ps4-payload-sdk
