EXPERIMENT NO: 04
1) tracert
Command Executed:

tracert www.google.in

Output:
Tracing route to www.google.in [142.250.143.94]
over a maximum of 30 hops:

  1    <1 ms     *        <1 ms  172.17.0.1
  2    10 ms     5 ms      8 ms  static-241.61.143.114-tataidc.co.in [114.143.61.241]
  3     5 ms     3 ms      3 ms  10.124.253.101
  4     6 ms     5 ms     *      10.129.21.21
  5     *        *        *      Request timed out.
  6     4 ms     3 ms      3 ms  72.14.210.20
  7     3 ms     2 ms      3 ms  216.239.47.175
  8     8 ms     7 ms      6 ms  192.178.253.210
  9     3 ms     3 ms      3 ms  192.178.82.97
 10     3 ms     3 ms      3 ms  209.85.142.62
 11     *        *        *      Request timed out.
 12     *        *        *      Request timed out.
 13     *        *        *      Request timed out.
 14     *        *        *      Request timed out.
 15     *        *        *      Request timed out.
 16     *        *        *      Request timed out.
 17     3 ms     3 ms      3 ms  pt-in-f94.1e100.net [142.250.143.94]

Trace complete.

2) ping
Command Executed:

ping google.com

Output:
Pinging google.com [142.251.126.113] with 32 bytes of data:
Reply from 142.251.126.113: bytes=32 time=3ms TTL=113
Reply from 142.251.126.113: bytes=32 time=18ms TTL=113
Reply from 142.251.126.113: bytes=32 time=12ms TTL=113
Reply from 142.251.126.113: bytes=32 time=10ms TTL=113

Ping statistics for 142.251.126.113:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 3ms, Maximum = 18ms, Average = 10ms

3) ipconfig
Command Executed:

ipconfig

Output:
Windows IP Configuration


Ethernet adapter Ethernet:

   Connection-specific DNS Suffix  . : 
   Link-local IPv6 Address . . . . . : fe80::1b77:4ec1:8972:2947%6
   IPv4 Address. . . . . . . . . . . : 172.17.13.22
   Subnet Mask . . . . . . . . . . . : 255.255.224.0
   Default Gateway . . . . . . . . . : 172.17.0.1

Ethernet adapter Ethernet 2:

   Connection-specific DNS Suffix  . : 
   Link-local IPv6 Address . . . . . : fe80::bdb1:4828:bd63:6453%4
   IPv4 Address. . . . . . . . . . . : 192.168.56.1
   Subnet Mask . . . . . . . . . . . : 255.255.255.0
   Default Gateway . . . . . . . . . : 

4) arp –a
Command Executed:

arp -a

Output:
Interface: 192.168.56.1 --- 0x4
  Internet Address      Physical Address      Type
  192.168.56.255        ff-ff-ff-ff-ff-ff     static
  224.0.0.2             01-00-5e-00-00-02     static
  224.0.0.22            01-00-5e-00-00-16     static
  224.0.0.251           01-00-5e-00-00-fb     static
  224.0.0.252           01-00-5e-00-00-fc     static
  233.89.188.1          01-00-5e-59-bc-01     static
  239.0.0.251           01-00-5e-00-00-fb     static
  239.255.255.250       01-00-5e-7f-ff-fa     static

Interface: 172.17.13.22 --- 0x6
  Internet Address      Physical Address      Type
  172.17.0.1            7c-5a-1c-d1-1e-54     dynamic
  172.17.1.3            30-de-4b-e0-21-50     dynamic
  172.17.3.148          fc-aa-14-df-52-7f     dynamic
  172.17.3.149          fc-aa-14-aa-f8-1e     dynamic
  172.17.3.161          fc-aa-14-ab-4d-07     dynamic
  172.17.4.143          d8-5e-d3-dd-8e-ab     dynamic
  172.17.4.228          fc-aa-14-ef-6f-99     dynamic
  172.17.9.108          fc-aa-14-ef-6c-bf     dynamic
  172.17.10.76          94-de-80-42-2d-7d     dynamic
  172.17.11.101         fc-aa-14-dd-39-39     dynamic
  172.17.11.142         00-22-4d-9b-56-3b     dynamic
  172.17.11.201         94-de-80-42-2e-b4     dynamic
  172.17.12.8           10-ff-e0-5b-a6-d7     dynamic
  172.17.12.25          d8-5e-d3-dd-4d-32     dynamic
  172.17.12.162         d8-5e-d3-f7-96-d2     dynamic
  172.17.13.1           fc-aa-14-61-7d-aa     dynamic
  172.17.13.21          fc-aa-14-e9-ac-6f     dynamic
  172.17.13.29          70-54-d2-19-91-eb     dynamic
  172.17.13.58          fc-aa-14-1d-c4-e9     dynamic
  172.17.13.83          fc-aa-14-df-55-7d     dynamic
  172.17.13.85          fc-aa-14-61-6f-a4     dynamic
  172.17.13.91          90-2b-34-7b-fd-16     dynamic
  172.17.13.103         74-56-3c-58-7d-51     dynamic
  172.17.13.123         e0-d5-5e-b0-7f-32     dynamic
  172.17.13.124         e0-d5-5e-b0-7f-ba     dynamic
  172.17.13.139         38-60-77-9c-cb-3f     dynamic
  172.17.13.140         38-60-77-9c-ac-5f     dynamic
  172.17.13.145         90-2b-34-7b-ff-14     dynamic
  172.17.13.173         94-de-80-44-ad-29     dynamic
  172.17.13.223         fc-aa-14-1d-c8-f9     dynamic
  172.17.14.71          90-2b-34-7b-f3-11     dynamic
  172.17.14.89          94-de-80-42-2f-bd     dynamic
  172.17.15.6           74-d4-35-cd-13-6f     dynamic
  172.17.15.16          94-de-80-44-ac-bf     dynamic
  172.17.15.25          74-d4-35-ce-c9-9e     dynamic
  172.17.15.27          90-2b-34-7b-f3-14     dynamic
  172.17.15.31          74-d4-35-ce-c9-39     dynamic
  172.17.15.35          74-d4-35-ce-c9-2b     dynamic
  172.17.15.50          74-d4-35-cd-13-5c     dynamic
  172.17.15.125         74-d4-35-cd-13-62     dynamic
  172.17.15.163         d8-5e-d3-40-57-a5     dynamic
  172.17.15.191         d8-5e-d3-40-61-91     dynamic
  172.17.16.27          10-ff-e0-72-1c-1b     dynamic
  172.17.16.30          10-ff-e0-72-2b-50     dynamic
  172.17.16.34          10-ff-e0-72-2b-63     dynamic
  172.17.16.67          10-ff-e0-72-2b-de     dynamic
  172.17.18.53          90-2b-34-7c-7a-78     dynamic
  172.17.20.33          e0-d5-5e-8f-40-4a     dynamic
  172.17.20.71          10-ff-e0-5e-05-4d     dynamic
  172.17.20.85          fc-aa-14-e9-a5-b3     dynamic
  172.17.20.87          fc-aa-14-61-61-2b     dynamic
  172.17.20.88          38-60-77-2a-0e-58     dynamic
  172.17.24.33          60-83-e7-dc-75-5d     dynamic
  172.17.25.64          10-ff-e0-5b-a5-1f     dynamic
  172.17.25.86          10-ff-e0-0c-14-e5     dynamic
  172.17.25.175         e0-d5-5e-b0-7f-ca     dynamic
  172.17.25.216         fc-aa-14-1d-cc-38     dynamic
  172.17.25.220         10-ff-e0-5a-64-98     dynamic
  172.17.25.226         38-60-77-9c-cb-c4     dynamic
  172.17.26.1           d8-5e-d3-dd-4c-89     dynamic
  172.17.26.75          10-ff-e0-5d-fa-87     dynamic
  172.17.28.40          70-54-d2-19-8e-e5     dynamic
  172.17.31.255         ff-ff-ff-ff-ff-ff     static
  224.0.0.2             01-00-5e-00-00-02     static
  224.0.0.22            01-00-5e-00-00-16     static
  224.0.0.251           01-00-5e-00-00-fb     static
  224.0.0.252           01-00-5e-00-00-fc     static
  233.89.188.1          01-00-5e-59-bc-01     static
  239.0.0.251           01-00-5e-00-00-fb     static
  239.255.255.250       01-00-5e-7f-ff-fa     static

5) netstat
Command Executed:

netstat

Output:
Active Connections

  Proto  Local Address          Foreign Address        State
  TCP    172.17.13.22:7680      DESKTOP-MVOG3JR:50695  TIME_WAIT
  TCP    172.17.13.22:7680      172.17.3.160:52680     TIME_WAIT
  TCP    172.17.13.22:7680      DESKTOP-MVOG3JR:53469  TIME_WAIT
  TCP    172.17.13.22:7680      MPMC-PC-25:65431       TIME_WAIT
  TCP    172.17.13.22:7680      172.17.7.16:55895      TIME_WAIT
  TCP    172.17.13.22:7680      DESKTOP-UJQFPKR:62640  TIME_WAIT
  TCP    172.17.13.22:7680      172.17.12.19:60834     ESTABLISHED
  TCP    172.17.13.22:7680      172.17.13.5:60720      TIME_WAIT
  TCP    172.17.13.22:7680      172.17.13.32:64397     TIME_WAIT
  TCP    172.17.13.22:7680      172.17.13.215:53269    TIME_WAIT
  TCP    172.17.13.22:49884     4.213.25.240:https     ESTABLISHED
  TCP    172.17.13.22:50161     172.17.25.220:ms-do    ESTABLISHED
  TCP    172.17.13.22:50607     150.171.109.130:https  CLOSE_WAIT
  TCP    172.17.13.22:50725     150.171.85.254:https   CLOSE_WAIT
  TCP    172.17.13.22:50875     pnbomb-bo-in-f3:https  ESTABLISHED
  TCP    172.17.13.22:50876     ly-in-f138:https       ESTABLISHED
  TCP    172.17.13.22:50886     server-108-158-46-19:https ESTABLISHED
  TCP    172.17.13.22:50887     20.42.65.90:https      ESTABLISHED
  TCP    172.17.13.22:50893     lcboma-as-in-f5:https  ESTABLISHED
  TCP    172.17.13.22:50895     del11s21-in-f10:https  ESTABLISHED
  TCP    172.17.13.22:50899     pnbomb-bo-in-f3:https  ESTABLISHED
  TCP    172.17.13.22:50901     lcbome-in-f138:https   ESTABLISHED
  TCP    172.17.13.22:50922     lcbome-in-f138:https   TIME_WAIT
  TCP    172.17.13.22:50928     cm-in-f138:https       ESTABLISHED
  TCP    172.17.13.22:50973     lcbomo-in-f95:https    TIME_WAIT
  TCP    172.17.13.22:50974     lcbomo-in-f95:https    ESTABLISHED
  TCP    172.17.13.22:50975     pt-in-f95:https        ESTABLISHED
  TCP    172.17.13.22:50995     182.156.239.50:https   ESTABLISHED
  TCP    172.17.13.22:51012     72.145.35.115:https    TIME_WAIT
  TCP    172.17.13.22:51031     pt-in-f95:https        ESTABLISHED
  TCP    172.17.13.22:51048     a23-212-254-57:https   CLOSE_WAIT
  TCP    172.17.13.22:51049     lcbomo-in-f95:https    ESTABLISHED
  TCP    172.17.13.22:51050     lcbomo-in-f113:https   ESTABLISHED
  TCP    172.17.13.22:51054     13.107.226.48:https    CLOSE_WAIT
  TCP    172.17.13.22:51055     a23-212-254-106:https  CLOSE_WAIT
  TCP    172.17.13.22:51056     151.101.129.108:https  ESTABLISHED
  TCP    172.17.13.22:51059     172.17.26.25:ms-do     SYN_SENT
  TCP    192.168.56.1:1521      DESKTOP-925CLKL:49674  ESTABLISHED
  TCP    192.168.56.1:49674     DESKTOP-925CLKL:1521   ESTABLISHED

6) nslookup
Command Executed:

nslookup google.com

Output:
Server:  dns.google
Address:  8.8.8.8

Non-authoritative answer:
Name:    google.com
Addresses:  2404:6800:4000:1025::8b
          2404:6800:4000:1025::71
          2404:6800:4000:1025::8a
          2404:6800:4000:1025::64
          142.250.207.142

7) hostname
Command Executed:

hostname

Output:
DESKTOP-925CLKL

8) systeminfo
Command Executed:
systeminfo

Output:
Host Name:                 DESKTOP-925CLKL
OS Name:                   Microsoft Windows 10 Pro
OS Version:                10.0.19045 N/A Build 19045
OS Manufacturer:           Microsoft Corporation
OS Configuration:          Standalone Workstation
OS Build Type:             Multiprocessor Free
Registered Owner:          a
Registered Organization:   N/A
Product ID:                00331-10000-00001-AA914
Original Install Date:     6/14/2026, 12:42:24 AM
System Boot Time:          7/27/2026, 10:49:05 PM
System Manufacturer:       Gigabyte Technology Co., Ltd.
System Model:              H310M DS2
System Type:               x64-based PC
Processor(s):              1 Processor(s) Installed.
                           [01]: Intel64 Family 6 Model 158 Stepping 10 GenuineIntel ~2808 Mhz
BIOS Version:              American Megatrends Inc. F2, 3/1/2018
Windows Directory:         C:\WINDOWS
System Directory:          C:\WINDOWS\system32
Boot Device:               \Device\HarddiskVolume1
System Locale:             en-us;English (United States)
Input Locale:              00004009
Time Zone:                 (UTC+05:30) Chennai, Kolkata, Mumbai, New Delhi
Total Physical Memory:     16,245 MB
Available Physical Memory: 11,265 MB
Virtual Memory: Max Size:  18,677 MB
Virtual Memory: Available: 13,094 MB
Virtual Memory: In Use:    5,583 MB
Page File Location(s):     C:\pagefile.sys
Domain:                    WORKGROUP
Logon Server:              \\DESKTOP-925CLKL
Hotfix(s):                 9 Hotfix(s) Installed.
                           [01]: KB5011048
                           [02]: KB5015684
                           [03]: KB5046823
                           [04]: KB5050388
                           [05]: KB5050111
                           [06]: KB5052916
                           [07]: KB5063706
                           [08]: KB5063979
                           [09]: KB5066790
Network Card(s):           2 NIC(s) Installed.
                           [01]: Realtek Gaming GbE Family Controller
                                 Connection Name: Ethernet
                                 DHCP Enabled:    No
                                 IP address(es)
                                 [01]: 172.17.13.22
                                 [02]: fe80::1b77:4ec1:8972:2947
                           [02]: VirtualBox Host-Only Ethernet Adapter
                                 Connection Name: Ethernet 2
                                 DHCP Enabled:    No
                                 IP address(es)
                                 [01]: 192.168.56.1
                                 [02]: fe80::bdb1:4828:bd63:6453
Hyper-V Requirements:      VM Monitor Mode Extensions: Yes
                           Virtualization Enabled In Firmware: Yes
                           Second Level Address Translation: Yes
                           Data Execution Prevention Available: Yes

