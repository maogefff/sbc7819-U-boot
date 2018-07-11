# U-Boot

## 1. Branch Namimg Specification

* **branch namimg format**: (product name)\_(system type)\_Uboot-(U-Boot version)
  * **product name**:
    * SBC-7112S;
    * SBC-7112S-Q;
    * SBC-7109S-454;
  * **system type**:
    * Linux;
    * Android;
  * **U-Boot version**:
    * v2009.11
    * v2009.11.1
* **E.g**:  
`SBC-7109S-454`(product name)`_Linux`(system type)`_Uboot-v2009.11`(U-Boot version) = `SBC-7109S-454_Linux_Uboot-v2009.11`

## 2. Release Naming Specification

* **release naming format**: (branch name)\_(release version)
  * **branch name**: Reference to the previous section [`Branch Namimg Specification`](#user-content-branch-namimg-specification).
  * **release version format**: `yy.MM.dd`(Release date of the day with format yy.MM.dd)`.sf`(Suffix for different version in a day. The default value is 00. In decimal upwards)
    * `v16.12.26`(v2016.12.26)`.00`(Release default(first) version in a day)
    * `v16.12.26`(v2016.12.26)`.01`(Release second version in a day)
    * `v16.12.26`(v2016.12.26)`.02`(Release third version in a day)
* **E.g**:  
`SBC-7109S-454_Linux_Uboot-v2009.11`(branch name)`_v16.12.26.00`(release version) = `SBC-7109S-454_Linux_Uboot-v2009.11_v16.12.26.00`

## 3. SBC-7112S U-Boot

1. [SBC-7112S_Linux_Uboot-v2009.08](https://github.com/AplexOS/U-Boot/tree/SBC-7112S-Linux-Uboot-v2009.08)

## 4. SBC-7112S-Q U-Boot

## 5. SBC-7109S-454 U-Boot

1. [SBC-7109S_Linux_Uboot-v2016.05](https://github.com/AplexOS/U-Boot/tree/SBC-7109S-454-Linux-Uboot-v2016.05)

