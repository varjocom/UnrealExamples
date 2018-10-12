# VarjoUnrealExamples
Unreal example projects. Example folder(s) explained under:

-----------------------------------------------------------------------------------------------------

## VarjoSample

Using Varjo Gaze API, device buttons and Vive controllers with Unreal Engine 4.20 and VarjoHMD.
Follow the next steps to get example scene and features running with Varjo HMD.

###### Prerequisites:

-   Varjo environment installed and Varjo Unreal Engine 4.20 compiled from separate repository.

###### Install Steam

-   Download and install Steam from https://store.steampowered.com/about/ .

###### Pair the Vive controllers with your PC

-   Open Services application. To find it click Start and type "Services".

-   Find 'Varjo Process Server' from the list, right click it and select Stop.

-   Start SteamVR by right clicking the Steam tray icon and selecting 'SteamVR'.

-   Right click the SteamVR tray icon and select 'Devices' -> 'Pair Controller' and follow
    the instructions.

-   Open Services application, find 'Varjo Process Server' from the list, right click it and
    select Start.

###### Get started with the example project

-   Right click the VarjoSample.uproject file in VarjoUnrealExamples\VarjoSample, select
    "Switch Unreal Engine version..." and select engine folder compiled by you from the list.

-   Open project to Visual Studio by double clicking the .sln file.

-   Press VR Preview from play menu.

-   Now you should see the scene and paired Vive controllers in Varjo HMD.

###### Setup and use gaze tracking

-   Click the application button (the upper one) from the HMD and follow the instructions to
    complete the gaze calibration.

-   Now you should see a ball following your gaze at two meters away from you.

