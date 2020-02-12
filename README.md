# ATTENDANCE_SYSTEM based on IOT
Me and my team pursuing the course of Electronics and Instrumentation Engineering developed an online attendance monitoring system based on IOT under the guidance of Mrs Sreevidya P Menon and our Alumini Mr Arun.

## COMPONENTS REQUIRED
* RFID recceiver </br>
* ESP8266 wifi module </br>
* Google Firebase Account </br>
* Web page ( to display the content )
## WORKING
Identity tag of students is placed on the RFID receiver and a RFID code is read by the RFID module and the code is processed.
If the code is valid the ESP8266 sents corresponding data to the Google firebase Database and updates are recorded.
The web page access the data from the FIREBASE database and accordingly output is displayed.
Attendance will bw taken every seven Hours.A tag can only be used 7 times a day.

# INSTALLATION AND SETUP
## Google Firebase and ESP8266
* [Arduino IDE](https://www.youtube.com/watch?v=TbHsOgtCMDc) </br>
* [ESP8266 setup](https://www.youtube.com/watch?v=2DL8FlrBTDs) </br>
* [Google FIREBASE account creation](https://www.youtube.com/watch?v=DD32pAVpKHA) </br>
* [Connecting Firebase and ESP8266](https://www.youtube.com/watch?v=VXsKEVcwzpg)
* [CODE for connecting to Firebase database](https://github.com/Godson-Thomas/IOT_based_Attendance_System/tree/master/SENSING_PART/TAG_code)

## Google Firebase and WEBPAGE
* Create 2 webpages : [LOGIN PAGE](https://github.com/Godson-Thomas/IOT_based_Attendance_System/blob/master/WEBPAGE_CREATION/our_login_page.JPG) and [TABLE](https://github.com/Godson-Thomas/IOT_based_Attendance_System/blob/master/WEBPAGE_CREATION/table.JPG)  Page
* Create your webpage using [HTML](https://www.w3schools.com/html/default.asp) with details of representing the working Hours of your college.
* Make your web dynamic by adding [JAVASCRIPT](https://www.w3schools.com/js/default.asp)
## HOSTING YOUR WEBPAGE TO GOOGLE FIREBASE
* Step 1 : Install [node.js](https://nodejs.org/en/) on your system.
* Step 2 : Create a new folder on the desktop
* Step 3 : create a "public" folder inside it
* Step 4 : Paste your html login page as "index.html" inside the public folder
* Step 5 : open command prompt and go to the "new folder" created in the desktop
* Type: </br>
$ npm install -g firebase-tools</br>
$ firebase init</br>
select your existing project
* follow the link for more details [Link Here](https://www.youtube.com/watch?v=Gl-qlxfTJHE)
</br>
</br>
NOTE :: CREATE A PROJECT FOR LOGIN PAGE AND HOST IT. </br>:: CREATE ANOTHER PROJECT FOR TABLE AND HOST IT. 
</br> ::COPY the URL and paste it on the Main_code in the WEBPAGE_CREATION.

## ACCESSING DATA FROM FIREBASE
* follow the [this link](https://www.youtube.com/watch?v=zAmrWiVdlec) and refer the [Main_code](https://github.com/Godson-Thomas/IOT_based_Attendence_System/blob/master/WEBPAGE_CREATION/Main_code.html).

# REGARDS
## To Mrs Sreevidya P Menon </br>
## Mr.Arun alumini FISAT EIE
## TEAM MEMBERS
* JOHN PAUL</br>
* GODSON THOMAS</br>
* DERIN T JOSE</br>
* AMRITHA M