{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf130
{\fonttbl\f0\fnil\fcharset0 Consolas;}
{\colortbl;\red255\green255\blue255;\red132\green134\blue132;\red38\green38\blue38;\red255\green255\blue255;
\red109\green109\blue109;\red0\green0\blue0;\red234\green234\blue234;\red148\green6\blue75;\red101\green71\blue146;
\red19\green36\blue126;\red14\green114\blue164;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrt\brdrnil \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clmrg \clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0

\f0\fs24 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 /*\cf3 \strokec3 \cell 
\pard\intbl\itap1\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  OneMsTaskTimer.h - Leveraging tasks using a timer with 1ms resolution\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  History:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  got inspired by Arduino MsTimer2 by Javier Valencia <javiervalencia80@gmail.com>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  11/Nov/14 - Made more flexible for MSP430 variants\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2              set to 1ms overflow time -> change to OneMsTaskTimer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 			 by Stefan Sch\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  17/Nov/14 - restructured code to support mulitple tasks \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2              added suppport for CC3200\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 			 by Stefan Sch\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This library is free software; you can redistribute it and/or\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  modify it under the terms of the GNU Lesser General Public\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  License as published by the Free Software Foundation; either\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  version 2.1 of the License, or (at your option) any later version.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This library is distributed in the hope that it will be useful,\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  but WITHOUT ANY WARRANTY; without even the implied warranty of\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Lesser General Public License for more details.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  You should have received a copy of the GNU Lesser General Public\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  License along with this library; if not, write to the Free Software\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  */\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 /*\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  MSP430 Notes:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This timer currently uses Timer1 available on chips like the MSP430G2553\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  It uses CCR0 in interrupt mode with the same period as PWM so PWM is \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  still available for Timer1 which means pwm , analogWrite() is still available\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  on the Timer1 associated pins.  We could have hacked into the watchdog timer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  which is used for millis() but that would have been a core change.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  The MSP430/Energia Servo library uses Timer0 so this library should be able to \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  run concurrently with Servo.  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  It will not run at the same time as the interrupt driven software serial library\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  because that uses both timer interrupt vectors\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 */\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 /*\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 How to use:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Some applications or sensors require to get an tick, acknowledge or something else\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  in a very regulare time frame. To handle that, this library can be used.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Note: As all tasks are handled inside an interrupt service routine this should be \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2        as less and as short as possible. \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 	   \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  For each task a structure \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    OneMsTaskTimer_t myTask1 =\{500,  flash1, 0, 0\};\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  is required and needs to be setup with following parameters:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    Parameter 1: time in milli seconds between each task call\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    Parameter 2: pointer to function which should be called by the tasks\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    Parameter 3: init 0 - only used internal\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    Parameter 4: init 0 - only used internal\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Add a task to the list to be processed:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    OneMsTaskTimer::add(&myTask1); // 500ms period\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2   \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Then start the timer:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    OneMsTaskTimer::start();\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  To Stop the timer call:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    void stop();\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2   To remove a task from the list use:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2     void remove(OneMsTaskTimer_t * task);\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 	\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2   When getting problems that a timer is used by another function already, a different\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2   Timer can be selected with:  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2    void set_timer_index(uint32_t timer_index);\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2   Note: this function is not available for the MSP430. For this architecture the timer module\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2         can only be changed by modifing the define:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2         #define DEFAULT_TIMER TIMER_A0_MODULE\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 		in the library source file\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 */\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 ifndef\cf3 \strokec3  OneMsTaskTimer_h\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf9 \strokec9 OneMsTaskTimer_h\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf10 \strokec10 <stdint.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 typedef\cf3 \strokec3  \cf8 \strokec8 struct\cf3 \strokec3  \cf9 \strokec9 OneMsTaskTimer_t\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf11 \strokec11 uint32_t\cf3 \strokec3  msecs;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf9 \strokec9 void\cf3 \strokec3  (*func)();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf11 \strokec11 uint32_t\cf3 \strokec3  count;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     OneMsTaskTimer_t * nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \} OneMsTaskTimer_t;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 namespace\cf3 \strokec3  \cf9 \strokec9 OneMsTaskTimer\cf3 \strokec3  \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 //	extern volatile int8_t overflowing;\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 add\cf3 \strokec3 (OneMsTaskTimer_t * task);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 remove\cf3 \strokec3 (OneMsTaskTimer_t * task);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 start\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 start\cf3 \strokec3 (\cf11 \strokec11 uint32_t\cf3 \strokec3  timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 stop\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 set_timer_index\cf3 \strokec3 (\cf11 \strokec11 uint32_t\cf3 \strokec3  timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 void\cf3 \strokec3  \cf9 \strokec9 _ticHandler\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrt\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth12700\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3 \cell \lastrow\row
}