# OpenCV_OCR_Tesseract
![output image]( https://qengineering.eu/github/OpenCV_Tes_1.png )
## Recognize text with tesseract on a bare Raspberry Pi 4. <br/>
[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)<br/><br/>
Special made for a bare Raspberry Pi 4, see [Q-engineering deep learning examples](https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html)

------------

## Dependencies.
To run the application, you have to:
- A raspberry Pi 4 with a 32 or 64-bit operating system. It can be the Raspberry 64-bit OS, or Ubuntu 18.04 / 20.04. [Install 64-bit OS](https://qengineering.eu/install-raspberry-64-os.html) <br/>
- OpenCV 64-bit installed. [Install OpenCV 4.5](https://qengineering.eu/install-opencv-4.5-on-raspberry-64-os.html) <br/>
- Install tesseract: `sudo apt-get install tesseract-ocr-dev`
- Code::Blocks installed. (```$ sudo apt-get install codeblocks```)


------------

## Notes.
Tesseract is very fast. It can handle multiple long lines of text at a time.<br> 
In contrast to the deep learning approach, tesseract is sensitive to font, colour, noise, scale, and skew.<br>
See this repo as a starting point in your OCR project.<br>
For more iinformation check the [Tesseract tutorial](https://tesseract-ocr.github.io/). 

------------

## Installing the app.
To extract and run the network in Code::Blocks <br/>
$ mkdir *MyDir* <br/>
$ cd *MyDir* <br/>
$ wget https://github.com/Qengineering/OpenCV_OCR_Tesseract/archive/refs/heads/main.zip <br/>
$ unzip -j master.zip <br/>
Remove master.zip, LICENSE and README.md as they are no longer needed. <br/> 
$ rm master.zip <br/>
$ rm LICENSE <br/>
$ rm README.md <br/> <br/>
Your *MyDir* folder must now look like this: <br/> 
*.png <br/>
OpenCV_OCR_Tesseract.cpb <br/>
main.cpp <br/>

------------

## Running the app.
To run the application load the project file OpenCV_OCR_Tesseract.cbp in Code::Blocks.<br/> 
Next, follow the instructions at [Hands-On](https://qengineering.eu/deep-learning-examples-on-raspberry-32-64-os.html#HandsOn).

------------

[![paypal](https://qengineering.eu/images/TipJarSmall4.png)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=CPZTM5BB3FCYL) 
