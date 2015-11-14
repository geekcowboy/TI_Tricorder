{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf130
{\fonttbl\f0\fnil\fcharset0 Consolas;}
{\colortbl;\red255\green255\blue255;\red132\green134\blue132;\red38\green38\blue38;\red255\green255\blue255;
\red109\green109\blue109;\red0\green0\blue0;\red234\green234\blue234;\red148\green6\blue75;\red19\green36\blue126;
\red14\green114\blue164;\red101\green71\blue146;}
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
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  OneMsTaskTimer.cpp - Leveraging tasks using a timer with 1ms resolution\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  History:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  got inspired by Arduino MsTimer2 by Javier Valencia <javiervalencia80@gmail.com>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  11/Nov/14 - Made more flexible for MSP430 variants\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2              set to 1ms overflow time -> change to OneMsTaskTimer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 			 by Stefan Sch\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  17/Nov/14 - restructured code to support mulitple tasks \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2              added suppport for CC3200\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 			 by Stefan Sch\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This library is free software; you can redistribute it and/or\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  modify it under the terms of the GNU Lesser General Public\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  License as published by the Free Software Foundation; either\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  version 2.1 of the License, or (at your option) any later version.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This library is distributed in the hope that it will be useful,\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  but WITHOUT ANY WARRANTY; without even the implied warranty of\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Lesser General Public License for more details.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  You should have received a copy of the GNU Lesser General Public\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  License along with this library; if not, write to the Free Software\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  */\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 /*\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  MSP430 Notes:\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  This timer currently uses Timer1 available on chips like the MSP430G2553\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  It uses CCR0 in interrupt mode with the same period as PWM so PWM is \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  still available for Timer1 which means pwm , analogWrite() is still available\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  on the Timer1 associated pins.  We could have hacked into the watchdog timer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  which is used for millis() but that would have been a core change.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  The MSP430/Energia Servo library uses Timer0 so this library should be able to \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  run concurrently with Servo.  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  It will not run at the same time as the interrupt driven software serial library\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2  because that uses both timer interrupt vectors\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 */\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3  \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "Energia.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "OneMsTaskTimer.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 volatile\cf3 \strokec3  \cf10 \strokec10 int8_t\cf3 \strokec3  overflowing;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 OneMsTaskTimer_t * p_initial_OneMsTaskTimer = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 if\cf3 \strokec3  defined(__MSP430__)\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 DEFAULT_TIMER\cf3 \strokec3  \cf10 \strokec10 1\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index_ = DEFAULT_TIMER;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 //#if defined(__MSP430_HAS_T1A2__) || defined(__MSP430_HAS_T1A3__) || defined(__MSP430_HAS_T1A5__) || defined(__MSP430_HAS_T1A7__)\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TA0CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TA0CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TA0CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER0_A0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 1\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TA1CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TA1CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TA1CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER1_A0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 2\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TA2CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TA2CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TA2CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER2_A0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 3\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TA3CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TA3CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TA3CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER3_A0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 4\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TA4CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TA4CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TA4CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER4_A0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 if\cf3 \strokec3  DEFAULT_TIMER == 10\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCTL0\cf3 \strokec3  TB0CCTL0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCCR0\cf3 \strokec3  TB0CCR0\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TAxCTL\cf3 \strokec3  TB0CTL\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 TIMERx_A0_VECTOR\cf3 \strokec3  TIMER0_B0_VECTOR\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	#\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 //#else\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 //#error Board not supported\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 //#endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // lifted from wiring_analog.c so that the do not step on each other\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // there should probably be a processor check here but that also exists in MsTimer.h\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_DIV\cf3 \strokec3  ID__8\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_PERIOD\cf3 \strokec3  F_CPU/\cf10 \strokec10 1000\cf3 \strokec3 /\cf10 \strokec10 8\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 ifndef\cf3 \strokec3  MC__UP\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 MC__UP\cf3 \strokec3  MC_1\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 ifndef\cf3 \strokec3  ID__8\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 ID__8\cf3 \strokec3  ID_3\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::start\cf3 \strokec3 (\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 //// !!!! count = 0;\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   overflowing = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // identical to the wiring_analog.c pwm setup so is compatible\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   TAxCCR0 = PWM_PERIOD;           \cf2 \strokec2 // PWM Period\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   TAxCTL = TACLR | TASSEL_2 | MC__UP | PWM_DIV;            \cf2 \strokec2 // SMCLK, up mode\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   TAxCCTL0 |= CCIE;                             \cf2 \strokec2 // CCR0 interrupt enabled\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // turn off the interrupts but don't turn of the timer because may\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // be in use for pwm.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::stop\cf3 \strokec3 () \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // disable interrupt\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   TAxCCTL0 &= ~CCIE;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   TAxCTL = \cf10 \strokec10 0\cf3 \strokec3 ;  \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // Timer interrupt service routine\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf11 \strokec11 __attribute__\cf3 \strokec3 ((interrupt(TIMERx_A0_VECTOR)))\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 void OneMsTaskTimer_int(\cf8 \strokec8 void\cf3 \strokec3 )\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 OneMsTaskTimer::_ticHandler\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3  \cf2 \strokec2 //if defined(__MSP430__)\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 if\cf3 \strokec3  defined(__CC3200R1M1RGC__)\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <driverlib/prcm.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <driverlib/rom_map.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <driverlib/pin.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <driverlib/timer.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <inc/hw_memmap.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <inc/hw_gprcm.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "inc/hw_timer.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 DEFAULT_TIMER\cf3 \strokec3  \cf10 \strokec10 1\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index_ = DEFAULT_TIMER;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 static\cf3 \strokec3  \cf8 \strokec8 volatile\cf3 \strokec3  \cf10 \strokec10 uint32_t\cf3 \strokec3  g_ulBase;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (\cf8 \strokec8 void\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // lifted from wiring_analog.c so that the do not step on each other\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // there should probably be a processor check here but that also exists in MsTimer.h\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_DIV\cf3 \strokec3  \cf10 \strokec10 0\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_PERIOD\cf3 \strokec3  F_CPU/\cf10 \strokec10 1000\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::start\cf3 \strokec3 (\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 uint32_t\cf3 \strokec3  load = (F_CPU / \cf10 \strokec10 1000\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 //// !!!! count = 0;\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   overflowing = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Base address for first timer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   g_ulBase = TIMERA0_BASE + (timer_index <<\cf10 \strokec10 12\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Configuring the timers\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_PRCMPeripheralClkEnable\cf3 \strokec3 (PRCM_TIMERA0 + timer_index, PRCM_RUN_MODE_CLK);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_PRCMPeripheralReset\cf3 \strokec3 (PRCM_TIMERA0 + timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerConfigure\cf3 \strokec3 (g_ulBase,TIMER_CFG_PERIODIC);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerPrescaleSet\cf3 \strokec3 (g_ulBase,TIMER_A,\cf10 \strokec10 0\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Setup the interrupts for the timer timeouts.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerIntRegister\cf3 \strokec3 (g_ulBase, TIMER_A, OneMsTaskTimer_int);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerIntEnable\cf3 \strokec3 (g_ulBase, TIMER_TIMA_TIMEOUT);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Turn on the timers\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerLoadSet\cf3 \strokec3 (g_ulBase,TIMER_A, load);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Enable the GPT \cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerEnable\cf3 \strokec3 (g_ulBase,TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // turn off the interrupts but don't turn of the timer because may\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // be in use for pwm.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::stop\cf3 \strokec3 () \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // disable interrupt\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerIntDisable\cf3 \strokec3 (g_ulBase, TIMER_TIMA_TIMEOUT);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerDisable\cf3 \strokec3 (g_ulBase, TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // Timer interrupt service routine\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (\cf8 \strokec8 void\cf3 \strokec3 )\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Clear the timer interrupt.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 MAP_TimerIntClear\cf3 \strokec3 (g_ulBase, \cf10 \strokec10 MAP_TimerIntStatus\cf3 \strokec3 (g_ulBase, \cf10 \strokec10 true\cf3 \strokec3 ));\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 OneMsTaskTimer::_ticHandler\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3  \cf2 \strokec2 //if defined(__CC3200R1M1RGC__)\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 if\cf3 \strokec3  defined(__TM4C123GH6PM__)\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "wiring_private.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "inc/hw_ints.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "inc/hw_memmap.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/gpio.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/interrupt.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/pin_map.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/sysctl.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/timer.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <inc/hw_memmap.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "inc/hw_timer.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 "driverlib/rom.h"\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 DEFAULT_TIMER\cf3 \strokec3  \cf10 \strokec10 0\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index_ = DEFAULT_TIMER;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 static\cf3 \strokec3  \cf8 \strokec8 volatile\cf3 \strokec3  \cf10 \strokec10 uint32_t\cf3 \strokec3  g_ulBase;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 static\cf3 \strokec3  \cf8 \strokec8 volatile\cf3 \strokec3  \cf10 \strokec10 uint32_t\cf3 \strokec3  timerAB;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (\cf8 \strokec8 void\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // lifted from wiring_analog.c so that the do not step on each other\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // there should probably be a processor check here but that also exists in MsTimer.h\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_DIV\cf3 \strokec3  \cf10 \strokec10 0\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 PWM_PERIOD\cf3 \strokec3  F_CPU/\cf10 \strokec10 1000\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::start\cf3 \strokec3 (\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 uint32_t\cf3 \strokec3  load = (F_CPU / \cf10 \strokec10 1000\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 //// !!!! count = 0;\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   overflowing = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Base address for first timer\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   g_ulBase = \cf10 \strokec10 getTimerBase\cf3 \strokec3 (\cf10 \strokec10 timerToOffset\cf3 \strokec3 (timer_index));\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   timerAB = TIMER_A << \cf10 \strokec10 timerToAB\cf3 \strokec3 (timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 //Setup interrupts for duration, interrupting at 1kHz\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_SysCtlPeripheralEnable\cf3 \strokec3 (SYSCTL_PERIPH_TIMER0+ timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_IntMasterEnable\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerConfigure\cf3 \strokec3 (g_ulBase, TIMER_CFG_PERIODIC);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerLoadSet\cf3 \strokec3 (g_ulBase, TIMER_A, F_CPU/\cf10 \strokec10 1000\cf3 \strokec3 );\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Setup the interrupts for the timer timeouts.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 TimerIntRegister\cf3 \strokec3 (g_ulBase, TIMER_A, OneMsTaskTimer_int);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_IntEnable\cf3 \strokec3 (INT_TIMER0A+timer_index);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerIntEnable\cf3 \strokec3 (g_ulBase, TIMER_TIMA_TIMEOUT);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerEnable\cf3 \strokec3 (g_ulBase, TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // turn off the interrupts but don't turn of the timer because may\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // be in use for pwm.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::stop\cf3 \strokec3 () \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // disable interrupt\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerIntDisable\cf3 \strokec3 (g_ulBase, TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerIntClear\cf3 \strokec3 (g_ulBase, TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerDisable\cf3 \strokec3 (g_ulBase, timerAB);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // Timer interrupt service routine\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (\cf8 \strokec8 void\cf3 \strokec3 )\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // Clear the timer interrupt.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 ROM_TimerIntClear\cf3 \strokec3 (g_ulBase, TIMER_A);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 OneMsTaskTimer::_ticHandler\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3  \cf2 \strokec2 //#if defined(__TM4C123GH6PM__)\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 if\cf3 \strokec3  defined(ti_sysbios_BIOS___VERS)\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <xdc/runtime/Error.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <ti/sysbios/BIOS.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <ti/sysbios/knl/Clock.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <xdc/runtime/Error.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 include\cf3 \strokec3  \cf9 \strokec9 <xdc/runtime/Types.h>\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 define\cf3 \strokec3  \cf11 \strokec11 DEFAULT_TIMER\cf3 \strokec3  \cf10 \strokec10 1\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index_ = DEFAULT_TIMER;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 static\cf3 \strokec3  \cf8 \strokec8 volatile\cf3 \strokec3  \cf10 \strokec10 uint32_t\cf3 \strokec3  g_ulBase;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (UArg arg);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::start\cf3 \strokec3 (\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     Clock_Params clockParams;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     Clock_Handle myClock;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     Error_Block eb;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf10 \strokec10 Error_init\cf3 \strokec3 (&eb);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf10 \strokec10 Clock_Params_init\cf3 \strokec3 (&clockParams);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     clockParams.period = \cf10 \strokec10 1\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     clockParams.startFlag = \cf10 \strokec10 TRUE\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     clockParams.arg = (UArg)0x5555;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     myClock = \cf10 \strokec10 Clock_create\cf3 \strokec3 (OneMsTaskTimer_int, \cf10 \strokec10 1\cf3 \strokec3 , &clockParams, &eb);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer_int\cf3 \strokec3 (UArg arg)\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 OneMsTaskTimer::_ticHandler\cf3 \strokec3 ();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 #\cf8 \strokec8 endif\cf3 \strokec3  \cf2 \strokec2 //#if defined(ti_sysbios_BIOS___VERS)\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // ---------------------------------------------------------------------\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // Common Functions\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // ---------------------------------------------------------------------\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::set_timer_index\cf3 \strokec3 (\cf10 \strokec10 uint32_t\cf3 \strokec3  timer_index) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	timer_index_ = timer_index;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // configure the registers\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::start\cf3 \strokec3 () \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf10 \strokec10 OneMsTaskTimer::start\cf3 \strokec3 (timer_index_);\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // add an additional task into the handler\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::add\cf3 \strokec3 (OneMsTaskTimer_t * task) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   OneMsTaskTimer_t * p_task = p_initial_OneMsTaskTimer;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf8 \strokec8 if\cf3 \strokec3  (p_task == \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	  p_initial_OneMsTaskTimer = task;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \}\cf8 \strokec8 else\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cf8 \strokec8 while\cf3 \strokec3  (p_task->nextTask != \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	  p_task = p_task->nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	p_task->nextTask = task;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   p_task = task;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 	\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf2 \strokec2 // ensure save initialisation\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf8 \strokec8 if\cf3 \strokec3  (task->msecs == \cf10 \strokec10 0\cf3 \strokec3 )\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   	task->msecs = \cf10 \strokec10 1\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   task->count = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   task->nextTask = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // removes an task from the handler\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::remove\cf3 \strokec3 (OneMsTaskTimer_t * task) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   OneMsTaskTimer_t * p_task;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   OneMsTaskTimer_t * p_nexttask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   p_nexttask = (OneMsTaskTimer_t *)p_initial_OneMsTaskTimer;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   p_task = p_nexttask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf8 \strokec8 while\cf3 \strokec3  (p_nexttask != task && p_nexttask != \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     p_task = p_nexttask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     p_nexttask = p_task->nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf8 \strokec8 if\cf3 \strokec3  (p_nexttask != \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf8 \strokec8 if\cf3 \strokec3  (p_nexttask == p_initial_OneMsTaskTimer)\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \cf8 \strokec8 if\cf3 \strokec3  (p_nexttask != \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3         p_initial_OneMsTaskTimer = p_nexttask->nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \}\cf8 \strokec8 else\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3         p_initial_OneMsTaskTimer = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \}\cf8 \strokec8 else\cf3 \strokec3 \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       p_task->nextTask = p_nexttask->nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf2 \strokec2 // called by the ISR every time we get an interrupt\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf8 \strokec8 void\cf3 \strokec3  \cf11 \strokec11 OneMsTaskTimer::_ticHandler\cf3 \strokec3 () \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   OneMsTaskTimer_t * p_task = p_initial_OneMsTaskTimer;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\cell
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \
\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \cf8 \strokec8 while\cf3 \strokec3  (p_task != \cf10 \strokec10 0\cf3 \strokec3 )\{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf2 \strokec2 // It is a 1000hz interrupt so each interrupt is 1msec\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     p_task->count += \cf10 \strokec10 1\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \cf8 \strokec8 if\cf3 \strokec3  (p_task->count >= p_task->msecs && !overflowing) \{\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       overflowing = \cf10 \strokec10 1\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \cf2 \strokec2 // subtract ms to catch missed overflows. set to 0 if you don't want this.\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \cf2 \strokec2 // do this before running supplied function so don't take into account handler time\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       p_task->count = p_task->count - p_task->msecs;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       \cf2 \strokec2 // call the program supplied function\cf3 \strokec3 \cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       (*p_task->func)();\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3       overflowing = \cf10 \strokec10 0\cf3 \strokec3 ;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3     p_task = (OneMsTaskTimer_t *)p_task->nextTask;\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3   \}\cell \row

\itap1\trowd \taflags1 \trgaph108\trleft-108 \trcbpat4 \trbrdrl\brdrnil \trbrdrt\brdrnil \trbrdrr\brdrnil 
\clvertalt \clshdrawnil \clwWidth1000\clftsWidth3 \clminw1000 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrs\brdrw20\brdrcf7 \clpadl200 \clpadr200 \gaph\cellx4320
\clvertalt \clshdrawnil \clwWidth17580\clftsWidth3 \clbrdrt\brdrnil \clbrdrl\brdrnil \clbrdrb\brdrnil \clbrdrr\brdrnil \clpadl200 \clpadr200 \gaph\cellx8640
\pard\intbl\itap1\pardeftab720\sl360\qr\partightenfactor0
\cf6 \strokec6 \cell 
\pard\intbl\itap1\pardeftab720\sl364\partightenfactor0
\cf3 \strokec3 \}\cell \lastrow\row
}