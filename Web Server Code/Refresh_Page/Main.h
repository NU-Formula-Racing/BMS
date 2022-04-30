const char MAIN_page[] PROGMEM = R"=====(




<!DOCTYPE html>

<html>

    <title>
        BMS Monitoring WebServer
    </title>
    
    <!-- <img src="NFR Logo.png" width="500" height="250" alt="logo"> -->

    <body style="text-align:center;">
        <h2 style="font-size:2vw">Overall Battery Information</h2>
        <br>
    </body>

    <div class="circle-containter">
        <h1 style="font-size:1.25vw">ESP32 Connection: </h1>
        <div class="connected-circle"></div>
    </div>

    <div class="grid-container1">
        <h1 style="font-size:1.25vw">Total Voltage: </h1> 
        <div class="container-voltage"><div id="voltage"></div></div>
        <div class="wrapper1">
            <div class="grid-item1"></div>
            <div class="overlay-item1"></div>
        </div>
        <br>
    </div>  

    <div class="grid-container1">
        <h1 style="font-size:1.25vw">Total Current: </h1> 
        <div class="container-current"><div id="current"></div></div>
        <div class="wrapper1">
            <div class="grid-item1"></div>
            <div class="overlay-item1"></div>
        </div>
        <br>
    </div>  

    <div class="grid-container1">
        <h1 style="font-size:1.25vw">Overall  Temperature: </h1>
        <div class="container-temp"><div id="temperature"></div></div>
        <br>
    </div> 

   <body style="text-align:center;">
    <br>
    <h2 style="font-size:1.5vw">Cell Voltages and Temperatures</h2>


<div class="grid-container2">
    <h1 style="font-size:15px">Segment 1: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 2: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 3: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 4: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 5: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 6: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

  <div class="grid-container2">
    <h1 style="font-size:15px">Segment 7: </h1> 
    <p style="margin-right: 30px"></p>
    <div class="wrapper2">
      <div class="grid-item2">
        <span class="tooltiptext"><val1></val1>
          <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
      </div>
      <div class="overlay-item2"></div>
    </div>
    <p style="margin-right:30px"></p>
    <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p style="margin-right:30px"></p>
      <div class="wrapper2">
        <div class="grid-item2">
          <span class="tooltiptext"><val1></val1>
            <p style="margin-bottom: -10px"></p><val2></val2><val3></val3></span>
        </div>
        <div class="overlay-item2"></div>
      </div>
      <p id = "display-array"></p>
  </div>
  <p style="margin-bottom: 5px"></p>

</body>

    <style>

        .grid-container1 { 
            display: grid; 
            grid-template-columns: 1fr 1fr 1fr; 
            width: 650px; 
            justify-content: center;
            margin-left: 30%;
            margin-right: auto;
        }

        .grid-container2 {
            display: grid;
            grid-template-columns: repeat(200, auto);
            background-color: #ffffff;
            padding: 10px;
            justify-content: center;
            position: relative;
        }

        .grid-item1 {
            background-color: green;
            border: 3px solid rgba(0, 0, 0, 0.8);
            height: 22.5px;
            width: 50px;
            padding: 10px;
            font-size: 30px;
            text-align: center;
            position: absolute;
        }

        .grid-item2 {
            background-color: rgba(255, 255, 255, 0.8);
            border: 1px solid rgba(0, 0, 0, 0.8);
            height: 30px;
            width: 30px;
            padding: 10px;
            font-size: 30px;
            text-align: center;
            position: absolute;
        }

        .wrapper1 {
            background-color: 'white';
            width: 30px;
            height: 30px;
            position: relative;
            margin-left: -110px
        }

        .wrapper2 {
            background-color: 'white';
            width: 30px;
            height: 30px;
            position: relative;
        }

        .overlay-item1{
            background-color: rgb(255, 255, 255);
            border: 3px solid rgba(0, 0, 0, 0.8);
            height: 40px;
            width: 70px;
            font-size: 30px;
            text-align: center;
            position: absolute;
        }

        .overlay-item2{
            background-color: rgb(255, 255, 255);
            border: 1px solid rgba(0, 0, 0, 0.8);
            height: 30px;
            width: 50px;
            font-size: 30px;
            text-align: center;
            position: absolute;
        }

        .grid-item2 .tooltiptext{
            visibility: hidden;
            opacity: 0.9;
            width: 200px;
            background-color: black;
            color: #fff;
            text-align: center;
            border-radius: 6px;
            padding: 7.5px 0;
            bottom: 120%;
            left: 50%;
            margin-left: -100px;
            font-size: 17.5px;
            /* Position the tooltip */
            position: absolute;
            z-index: 100;
        }

        .grid-item2:hover .tooltiptext {
            visibility: visible;
        }

        .container-temp {
            background-color: white;
            border: 3px solid black;
            padding: 10px;
            width: 75px;
            length: 60px;
            text-align: center;
            font-size: 1.5vw;
        }
        .container-voltage {
            background-color: white;
            border: 3px solid black;
            padding: 10px;
            width: 75px;
            length: 60px;
            text-align: center;
            font-size: 1.5vw;
        }
        .container-current {
            background-color: white;
            border: 3px solid black;
            padding: 10px;
            width: 75px;
            length: 60px;
            text-align: center;
            font-size: 1.5vw;
        }
        .circle-containter{
            display: grid; 
            grid-template-columns: 1fr 1fr; 
            width: 300px; 
            justify-content: center;
            position: fixed;
            top: 0;
            left: 0;
            margin-top: 20px;
            margin-left: 20px;
        }
        .connected-circle {
            background: green;
            width: 50px;
            height: 50px;
            margin-left: 10px;
            shape-outside: circle();
            clip-path: circle();
        }

        </style>

    <script type="text/javascript">

        var light = [];
        var temp = [];
        var s;
        var v;
        var c;
        var timer = 0;

        setInterval(function() {
             getData();
        },1); 

        function getData() {

            var xhttp = new XMLHttpRequest();
            xhttp.onreadystatechange = function() {
                for(let i = 1; i < 141; i++){
                    if (this.readyState == 4 && this.status == 200) {
                        light[i] = this.responseText;
                        document.querySelectorAll(".connected-circle").forEach((item,i) => {
                            item.style.background = 'green';
                        });
                        timer = 0;
                    }
                    else{
                        timer++;
                    }
                    
                }
                
          }
            xhttp.open("GET", "readADC", true);

            if(timer >= 5000){
              document.querySelectorAll(".connected-circle").forEach((item,i) => {
                  item.style.background = 'red';
              });
            }
 
            xhttp.send();

            s = (getRandomInt(1,100)).toString();
            document.getElementById("temperature").innerHTML = s + "C";

            v = (getRandomInt(1,50)).toString();
            document.getElementById("voltage").innerHTML = v + "V";

            c = (getRandomInt(1,200)).toString();
            document.getElementById("current").innerHTML = c + "A"; 
            

            document.querySelectorAll(".grid-item2").forEach((item, i) => {
                if (temp[i+1] <= 3) {
                item.style.background = 'green';
                }
                else{
                    item.style.background = 'red';
                }

                document.querySelectorAll(".overlay-item2").forEach((item2, j) => {  
                    if(i==j){
                        item2.style.height = (light[j+1])/3800*50 + "px";
                    }
                });

                if ((i+1)%20 == 0){
                    cellnum = 20;
                }
                else {
                    cellnum = ((i+1)%20);
                }  
                segnum = Math.ceil(((i+1)/20));
                document.getElementsByTagName("val1")[i].innerHTML = "Segment " + segnum + ", Cell #" + cellnum + "<br />"
       
                document.getElementsByTagName("val2")[i].innerHTML = "Voltage: " + Math.round(light[i+1]) + "V" + "<br />"
        
                document.getElementsByTagName("val3")[i].innerHTML = "Temperature: " + Math.round(temp[i+1]) + "C";
        
            });

            document.querySelectorAll(".container-temp").forEach((item, i) => {
                if(s<=75){
                    item.style.backgroundColor = 'green';
                }
                else {
                    item.style.backgroundColor = 'red';
                }
            });

            document.querySelectorAll(".overlay-item1").forEach((item, i) => {
                if(i==0){
                    item.style.height = (50-v)/50*50 + "px";
                }
                else{
                    item.style.height = (200-c)/200*50 + "px";
                }
            });

        }

        function getRandomInt(min, max) {
            min = Math.ceil(min);
            max = Math.floor(max);                
            return Math.floor(Math.random() * (max - min + 1)) + min;
        } 

    </script>

        
</html>


)=====";
