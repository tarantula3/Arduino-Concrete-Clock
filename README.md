# Arduino-Concrete-Clock

[![AQhBpQrfmg8](https://i.imgur.com/v7VdweE.png)](https://www.youtube.com/watch?v=AQhBpQrfmg8)

When you mix creativity with electronics, it becomes a masterpiece.
Producing something original and worthwhile leads to the creation of a number of great new useful household products.
In this video, I am going to show you guys how to create this Arduino based touchless concrete clock.



3D Design
---------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhuopnj-AOCLcTN2r45wzg6AaPYdPD2RBWY4wHuhDfg9_gPjVt1uCTKpWBKukfREhMijcPgSavPA53kU9xY3meR-zHgV2iKLZnOEgaDZEzm_1CS4-hMuO-1F4jEHPW28xKeWqONYnu974VO70LaGDHvtRQ70J_sl1rmckfHX4Yi-E5fmFl9D8-gB806SQ/w640-h360/1.png)

I always love to generate a 3D model of my product before creating it in real. This not only gives me a better view of what the final product is going to look like, but also helps me in finding the correct measurements of the final product. So, I went ahead and used the free "Windows 3D-builder" to generate this 3D model.

The onscreen, black bar is where the TM1637 Digital Clock Module will sit. The gap in the circular concrete frame will house the 5 Blue LEDs that can be turned on or off my moving your hand over the IR Module.
These two holes are for the IR Sensor Module. The concrete base bar will house all the remaining electronics components in it.



The Template
------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiJikgPRHXCZpOjoIl4tkmxT0d8tiUZ-w7odennaNZzCWH67ncnXMPkyfL3nER7FhdAReeQDeqMjGOe-NFqDaYaAtY_okfH2h-EItuEIpvuskUhG285ut_zoVLt9x5wgyOwcnnj2WWiEnxg7qY3iSqeNFTLi22K4y9dkOzbziKiWZRx5JTjHN0U0-CZXA/w640-h360/2.png)

Based on my 3D-Model I designed this 2D-Template.
You can download the template from the link provided in the description below and print it on a A4 paper.



Schematic Diagram
-----------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgHbW4afvOjV3_Ihk1pAzmc6ym4gj9Pd2n8u2sb6Jit6w6EpAXDqXM-XYKDx8BlEU43pAo6GaAEsk4kX1mYUbIBiDsy8yWX6sj-_iaygtsaBDZqeS6uwa_3nmRmsomsve3VghveOAwA8GQhgbhSQ6DGMhi1lbx5SkMgiepFhOa-GN825em8wrVV1CYa-Q/w640-h360/3.png)

Before going ahead, lets have a look at the schematic diagram of the digital clock. The heart of this circuit is an Arduino Nano.

The TM1637 Digital Clock Module connects to D4 and D5 pin of the Arduino.
The DS1302 RTC Module connects to the A1, A2 and A3 pin of the Arduino.
The two White LEDs displayed on both sides of the digital clock connects to the D11 pin of the Arduino. These two LEDs flash 3 times every hour when the minutes counter is reset to "00". 
The IR module is connected to the D6 pin of the Arduino and controls the blue cluster of LEDs connected to D12 pin of the Arduino.

My initial plan was to have 2 to 3 push button switches connected to D2 and D3 pin of Arduino to set the time of the clock. However in the final version, I did that by adding an extra line of code to my program. I will explain this in full details when we discuss the code.



Preparing The Top - Concrete
----------------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhVMXdTgVYLyph-bt7qh41ihWdntuxmathpHV7SqwQic4eAmHQ48-QbvXVI6Y28H3GEB3ia4c_PL54e17JclUKPh3R9cDDw6sP3o8OHPmQsWSWF-OtHyl_X9EaowucjZAjM8qjIObOp_f_Gw3Z8yd5JFFw-vUlMMsoHyW5SmabIp1S3VYQpFgWuZDvezA/w640-h360/6.png)

Using cardboard I created all the concrete molds. Cardboard was my first choice as it is very easy for me to cut and bend it into any shape of my choice. 
These holes in the mold you see are for the ribbon cables.

Sticking this semi-circular piece on the left side of the inner circle will create the gap for the blue LED cluster when we pore the concrete into the mold.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhiUDu4U_gHqu-fzjmDoJmX1RCL-paxbScfyOvyAaO_lE5fS97JLoZ_9ORs_QVIrZRU2t78RhvM4vSDg3vGZtST8vQyOIE9A5BjYElDQrLPijHDHn7zTAndB5YrRactqvou0fMo8kBaMIzOrEOeuhJ3mqBnTU_wRhp9h2rsZrZKW84bLIr4YhCZ9b4K3A/w640-h360/7.png)

Alright, so this is how it looks like after putting all the pieces of cardboard mold together. Now, lets pour some "Brickies Sand" in-and-around the mold to hold it nice and tight when I pour the liquid concrete. Making the sand a bit wet, will make it firm and will also remove all the unwanted air from the sand.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEi8sqZJweLXZelAJv_Fvg2vUwpukLUIDDXYE0U4zlGtoLEEafYVsTMbixVapu8Mmo0URJkOKXd0yy43iHR-gWQ6SUF-HfoTOEl0VfWbADSm6DKnTDBToUQoJYX_fWRMRbhvh9dQ6BnrlnVSVKPiPTO7xRHemL1z10RFANPNYgxMyNClepJqmbEogJR7gA/w640-h360/8.png)

Cool, now lets go ahead and pour the concrete into the mold. Don't forget to compress the concrete mixture as you pour it. This way the concrete will reach all the necessary places and will also remove the unwanted air bubble from the mixture.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjmCl5Y09VORThpnoy6B1smVOXaAU3o_U1RyHm-OiCHEss82n0e_0jwoPVkZdN-9xiqOvHc0lbF5QgLRE9abTNfVoRSzSdqPRTgPorJJkCoAwj3_LpAK_mdJHowIdryeJw4bYBNKqCvD4_RMmdj26eEVeJH32HVGEBV9495OeHIYUSFUeGP2nQYNP4-yw/w640-h360/9.png)

I also added few "Nails" inside the mixture to give it a bit more firmness. This step was absolutely necessary, as my first design completely collapsed because it was not very sturdy.

Once the setup dried up I removed all the sand and extracted the piece of art from it.



Preparing The Top - Electronics
-------------------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgu11M8xJi8hYu1Qytl7pjHbIDoGAAhp_Ozswlkit7VXEgXIx0Baa__BfmPsvPHYtBNjqcYzUFel2eeXnsg8PmNQ5DJNOr0ixfa0B9Gsdnib9gxvIJ1rDEJlelwd_zK3jhFKk8msk-5PvYYFrNZqziu5boQS2PBdbEOHUacY9RylTqXZAEJURoecHcokA/w640-h360/12.png)

Alright, now lets start installing the electronic components to the top section of the clock.
The 4-Digit LED clock module will sit inside this gap. I will cover it up using a black plastic film which I extracted from a wrapping paper.
For the back, I am using a compressed wood board. Based on my initial design I am going to make some holes in the board and install 3 x push button switches to it.
The blue LED cluster will be hot-glued in the gap at the back of the circular section.

I used a plastic cutout from a milk bottle to cover the Blue LED clusters. The white color of the plastic gave it a gloomy look, which was absolutely super awesome.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgr_4jmWoHkEEOrSpCOwTniAjia1PKWFlmczFamsUiWf3cbHEXcxC54p_NaCnOMSwlSoTKS9LSb4ielv08RPzz-UA5qIvmmt2bqTEAK7U1aP7UCbaz6RtOI_Twl6XnL_cq3KNLMWeJhqtnQC1at02E4nTqSmVMxgSIVvgNEvrQM2xidDusf38hQvqif9A/w640-h360/15.png)

I hot glues the two white LEDs to the backplate before putting it against the concrete.

Frankly speaking, it was an absolute challenge for me to hot-glue the backplate on the camera. After struggling for a bit, I did that properly behind the scene.



Preparing The Base - Concrete
-----------------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhqjL_Xs-JJyxl4-HjsX0rEf61PsfHGD2QhOtr--V9LacQxhzHGklhvIi8oRs6VRN8dy_ZAunF8goTap6NCPTUZYvAgHHIi-ThAEamL49Ho5xXmgyIVetg9w07vWjYHWoRayfVAIQQgWQGZtd0-dgnCjzYm2lIutE0Hb8rnDv1c3xN4NP7vrP95joyN_A/w640-h360/17.png)

Now that we are done with the top section, lets start working on the base of the clock.
For the base, I prepared 2 x cardboard boxes with open top one slightly shorter in height than the other. The 2 x straws you see on-screen will create the hole for the IR module. The hole on the side is for the AC power cable.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiDrvTATM1nHQXMFONr9fK1OVBEaGuP9Dj42u63urQs8efCJnJbnD5EndRSE2Xw8_oLuPofq4QlY27E2uZTZ7brc_vTe7vXVbtPBtJgt6dAO4VE1o-PFYl0go2i9qqdI8nxooZsLYgflyoYvAH287vmMohkdjUL-TA7UqieYH3_ErSKdVUeYhn8ZfEiYQ/w640-h360/18.png)

The cardboard block I just added is to create a hole on the top of the base, where the circular-top will sit.

Then it was just a matter of pouring the sand inside and outside of the cardboard molds followed by pouring the concrete mixture into it.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiTbMcBXkIP9wDgqNHrRC9TB_3VGs-WNY4DJr4pvIE-LXlDovEloDvSs42Mrq5h2Mc8RFXWmHtlJzGuM-KPCy5ImT4WSgiJkrKUi34TMTjbDWE_VvKUVldHuXAbFqd1bVMjKFHdURfMMUjASiYM0pGOQOfHyNxKT0KCNEQIf_aive8Vt12DnRA5RyNneg/w640-h360/21.png)

Same as before I added some nails to give the structure some additional firmness.

Once the concrete dried up, I extracted the concrete base from the sand and carefully sanded the structure to give it a nice and smooth texture.



Preparing The Base - Electronics
--------------------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhtJi4edXXqOy0bCmJP0wg35ddAm2dBbJLJO_O5t5GgUyo7KoOFY5_WYRITBIU3BtQfOuw5qdnYIpawQ-7t52mVBMCuwpJghjFwA8wUN8tGB13KYksvm1BOHGy9pIyDFyGOfwVLgKxsf4zvLjJxIbYLe_oIUgLv_g0jwLLcltCqidxrnMLbg5DvlyUozw/w640-h360/24.png)

Okie-dokie, now lets install the rest of the electronic components inside the base of the clock. I used the same compressed wooden board to create the baseplate and then one by one soldered and hot-glued all the electronics components to it. The IR module I used in this project is one of my self made DIY IR modules. If you want to know more about the module, please checkout my Tutorial No 21 - All About IR Modules and how to make your own DIY IR Module.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgLoCkLPF2Hk220ZKTmW4Q3Cjq6NbvDVPMZpA4rFj9739hBHEOTMX-jX9Y6kJiJUX1bg-x4jKBo_uymmuFM3_4MDKWzHdLYBBqqjyTpYaICpRrRvxe2-Lmrer91bpAA3S2GcyCuwBRyv-OlYqKKYaCrhasPOlNTaA8yf-7E_lTdvrVk2x0xgyKVX5HsTA/w640-h360/28.png)



Joining The Base To The Top
---------------------------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhakPCQ6RDgg6tjjdKSrCAJEHZN2An58Qzo6Y0Lg-5PBj0_VGm4tqZbdE7sea-DrynTt7lnIGLXWMesAl1O31lX5qmiSvVZ1VJ1eDiuJXRJ2YRoo3B0FhEAjDH0q97XZuGsAEzlr-9mNliPJUHuiF7Vo4C4UtOnpu29oJLOGoiialpEbiGTuQZ8_0XuKQ/w640-h360/29.png)

Now that we have top and the bottom ready, lets go ahead and join them together.
I created this cardboard thing to hold the concrete, when I pour the concert in the hole. This cardboard block will also prevent me from poring excessive concrete inside the hole. The flap in the middle is to hold the wires preventing them from getting mixed up with the concrete. After pouring the concrete I left it of drying for almost 2 days.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEinMO1dQv5DxUBebM5J5qVX50naH8sjzUOVBQm4cYSojtPtQwrQwNtMzrsYHLtRzuAGeSSVE74EACAwinQVajV5SiPQqr6nvIpq0dt4bB8H_cIl7y-Mk4yhxvSabSGsCTLdvZ7uMNtLim5Vo210ZLcqZSXVh51qFlPNY0A99Q0sX9_JlijvNs1fU5qrsw/w640-h360/30.png)



Code
-----

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhn_ioXKYaA8vjv_hhQ8HxaCcLUxXy8m8KBhR9L3Ol-OSSSw3rPb2-JpIgU77cVcVBxXnzvOfDqvRziFJQTqxrHzusZXeUvX5evpxM4vB1QUGRUG0xgiuJaoJIG732yJON5Lrzf5sgxao3m9-tgSplL_QNIpmJakQ9BA1o2odgXk9nhh6mJpnhLee8DKA/w640-h360/33.png)

While the concrete was drying up, I complied and uploaded the code to the Arduino.
For this project you need include the "ArduinoRTClibrary" and the "TM1637Display" libraries in your code. You can download them from github from the link provided in the description below.

Lets start the code by creating an instance of the RTC module followed by defining the variables used by the RTC module.
Then, define all the LED pins followed by creating an instance of the TM1637 module and defining all the variables used by the module.
Next, define the pins used by the IR module. 

In the setup section, the 1st two lines can be used to attach an interrupt to the code, if you are planning to use the push button switches. However, in my code I am not using the buttons, so I commented them out.
Next, I have set the brightness of the display to the max value = 7 and added the "showNumberDecEx" function to include the colon in the code.
Next, I defined all the pin modes used by the attached components in the code.

The highlighted bit can be used to set the time of the clock. Set the correct time, uncomment and then load the code. Once loaded, comment the lines and then load the rest of the code.

```
  // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
  //myRTC.setDS1302Time(00, 39, 21, 7, 20, 1, 2023);  
  ```

In the loop section, all we are doing is - reading the hour and minutes from the RTC module and displaying it on the 7-Segment display.

```
 myRTC.updateTime();    // This allows for the update of variables for time or accessing the individual elements
 minutes = myRTC.minutes; // Get the current minutes from the RTC Module
 hours  = myRTC.hours;  // Get the current hours from the RTC Modules  
 timeData = hours * 100 + minutes;
 ```

This code block is used to toggle the colon on and off.

```
// Code block that blinks the colon of the TM1637 module
 if (ctr == 200) {
  if (blinkToggle) {
   display.showNumberDecEx(timeData, 0x40, true);
   blinkToggle = false;
  } else {
   display.showNumberDecEx(timeData, 0, true);
   blinkToggle = true;
  };
  ctr = 0;
 };ctr++;
 delay(5); 
 ```

This section is used to read the value of the IR sensor and either turn on or turn off the blue LED clusters. 

```
 // Code block that turns on or off the Blue LED Cluster 
 int Sensordata = digitalRead(IRSensor); // Set the GPIO as Input
 if (Sensordata != 0) {
  if (millis() - timestamp>500) { // This is to avoid multiple obstacle detection
   timestamp = millis();
   if (IRtoggler == 0) {digitalWrite(LED_BLUE, HIGH);IRtoggler = 1;}
   else        {digitalWrite(LED_BLUE, LOW); IRtoggler = 0;}
  };
 };
 ```

This bit of the code, is to flash the white led when the minute counter resets to 0.

```
  // Flash the white LEDs if minutes = 0
 if ((int)minutes == 0) {
  if (blinkCTR==0 || blinkCTR==40 || blinkCTR==100 || blinkCTR==140 || blinkCTR==200 || blinkCTR==240 || blinkCTR==300 || blinkCTR==340)  
   digitalWrite(LED_WHITE, HIGH);
  if (blinkCTR==20 || blinkCTR==60 || blinkCTR==120 || blinkCTR==160 || blinkCTR==220 || blinkCTR==260 || blinkCTR==320 || blinkCTR==360)  
   digitalWrite(LED_WHITE, LOW);
  blinkCTR++;
 };
 if ((int)minutes == 1) blinkCTR = 0; // Reset blinkCTR for the next cycle of flashing
 ```
 
If you are planning to use the 2 x push button switches to set the time or to set an alarm, go ahead and uncomment this bit of the code and add your code block to it. 

```
// Pressing this button puts the clock in setup mode
//void Button_1_Pressed(){};
// Pressing this button increments the values on the display
//void Button_2_Pressed(){};
```


Final Demo
----------

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiPAR_R5A7IbDOOSKr6cEA5jfgqb9sXc9UW25BmLYRZJAAKeCc9fc2Gqw4WzSjDOk9aLJgOsIxQKbi2EN-suW7vPR9k6wPBGK3KVXNudWkUdYhTQ0LVz8gWw2DjVyIPNzWpzMHtrO1DgzWmgCbrH6jR1tM-gXYYi42iXmcNQnu95NWNqUJWYasGyaO2wA/w640-h360/34.png)

So this is how it finally looks like. 
Do comment and let me know if there are any scopes of improvement.



Thanks
------

[![AQhBpQrfmg8](https://i.imgur.com/v7VdweE.png)](https://www.youtube.com/watch?v=AQhBpQrfmg8)

Thanks again for checking my post. I hope it helps you.
If you want to support me subscribe to my YouTube Channel: https://www.youtube.com/user/tarantula3


Video: https://youtu.be/AQhBpQrfmg8

Full Blog Post: https://diy-projects4u.blogspot.com/2023/02/ArduinoClock.html

Other Links:

Template: Download https://github.com/tarantula3/Arduino-Concrete-Clock/blob/main/Main_Template.pdf

3D Model: Download https://github.com/tarantula3/Arduino-Concrete-Clock/blob/main/Clock.3mf

Github: Visit https://github.com/tarantula3/Arduino-Concrete-Clock

ArduinoRTClibrary: Download https://github.com/chrisfryer78/ArduinoRTClibrary

TM1637Display Library: Download https://github.com/avishorp/TM1637



**Support My Work:**

BTC:  15cNh9hup8jidCVPwa1DTcxeoh2FPijVrX

LTC:  LbquH9Ku78vHtcm3LZnWXpD1JQWdKzeV4v

DOGE: DEB2QBAihnBRhGsaB8P7kz559TDiucQhX6

ETH:  0x5d8c9ba0e54d8354d4af81871db26daa190d2194

BAT:  0x939aa4e13ecb4b46663c8017986abc0d204cde60

LBC:  bZ8ANEJFsd2MNFfpoxBhtFNPboh7PmD7M2

COS:  bnb136ns6lfw4zs5hg4n85vdthaad7hq5m4gtkgf23 Memo: 572187879

BNB:  0x5d8c9ba0e54d8354d4af81871db26daa190d2194


Thanks, ca again in my next tutorial.
