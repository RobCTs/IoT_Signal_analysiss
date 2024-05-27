# IoT_Signal_analysis
IoT individual assignment to process signals


## Overview
This project is a modular IoT system designed for signal processing and communication using an ESP32 microcontroller. The system includes functionalities for signal processing using FFT and network communication using MQTT over Wi-Fi. It also includes the securtity and power management modules which are yet to be completed.


## Student

| **Matricola** | **GitHub** |
|---------------|------------|
| `2162601`     | [![name](https://github.com/b-rbmp/NexxGate/blob/main/docs/logos/github.png)](https://github.com/RobCTs) |



## Features
**Generating signal**: Continuos creation of a signal, by randomly picking one of three different signals.
**Sampling and analyzing**: Sampling and Fast Fourier Transform (FFT) analysis of the signal.  
**Network**: Wi-Fi connectivity and MQTT client initialization for data transmission.    
**Transmitting**: Data transmisssion to a MQTT borker through safe protocols.
**Monitoritng**: //NOT yet fully functional.// Efficient power/memory/latency management.  



## Getting Started
### Prerequisites
**ESP32** development board
**USB cable** for connecting the ESP32 to your computer
**ESP-IDF** (Espressif IoT Development Framework) installed on your system
**Python** 3.6 or later

### Installation
a) Set up the ESP-IDF environment:
Follow the official ESP-IDF setup guide: [ESP-IDF Get Started](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/index.html).

b) Clone the repository:
```
git clone --recurse-submodules https://github.com/RobCTs/IoT_Signal_analysis
```

c) Configure the project:
Go to the esp-idf folder
```
cd /your/path/esp-idf
```
and run (BEWARE! This are the commands for Windows.)
```
install.bat
export.bat
```
Then, go the project directory
```
cd /your/path/IoT_Signal_analysis
```
and run
```
idf.py menuconfig
(or in alternative can suffice also)
idf.py reconfigure
```

d) Build the project:
To build the project, run the following command in the project directory:

```
idf.py build
```

e) Flashing the firmware
To flash the compiled firmware onto your ESP32, run:

```
idf.py -p flash

```

f) Running the System
After flashing, monitor the output using:

```
idf.py monitor
```

(BEWARE! If not properly configure, you may specify the PORT used, for example: idf.py -p [PORT] monitor.)
(# Replace [PORT] with the appropriate serial port for your ESP32!)

e-f)
You can also run simultaneously:

```
idf.py flash monitor
```

g) You will be prompt from the serial to input some info, for example the wifi credentials.



## Project Structure
The project is organized into several modules, each handling a specific functionality. Here is an overview of the directory structure:

```
.
├── components/
├── main
│   ├── CMakeLists.txt
│   ├── generating_signal.c
│   ├── generating_signal.h
│   ├── idf_component.yml
│   ├── main.c
│   ├── network.c
│   ├── network.h
│   ├── sampling_and_analyzing.c
│   ├── sampling_and_analyzing.h
│   ├── transmitting.c
│   └── transmitting.h
├── managed_components/
├── .gitignore
├── .gitmodules
├── CMakeLists.txt
├── dependencies.lock
├── README.md
└── sdkconfig
```


## Technical Details and System Design

### System Overview
This project utilizes an ESP32 microcontroller to generate, sample, analyze and transmit signal data. The ESP32's capabilities allow for high-resolution data handling and communication, making it ideal for real-time signal processing and IoT applications. For the project it was also connected INA219 for the analysis of the power consumption.

### Setup and Initialization

### Input Signal Generation
The ESP32 firmware simulates the input signal, assumed to be a sum of sine waves. Two approaches for signal generation are implemented:
            #### Continuous Generation: 
            The '*generate_signal_task*' continuously generates signals, sending them to the queue for further processing.
            #### Dynamic Generation: 
            Generates and samples the signal dynamically over a specific time window, simulating real-time signal acquisition.

### Maximum and Optimal Sampling Frequency
Both these values depend on which of the three signals was randomly picked during the generating process.

#### MSF
The maximum sampling frequency depends on the ESP32's processing capabilities or the limits of the ADC used. Without intentional delays, the system can achieve very high sampling rates, demonstrating the processor's speed. Introducing maximum observed sampling rate was at least 8 MHz, limited by practical constraints like time and resource management. The system dynamically adjusts the sampling rate based on the signal's content to optimize performance.

#### OSF
The optimal sampling rate is dynamically calculated based on the Fast Fourier Transform (FFT) analysis of the signal, ensuring the sampling rate meets the Nyquist criterion (at least twice the highest frequency in the signal). Starting with a high sampling rate, the system adjusts it downwards or upwards based on the FFT results and a predefined threshold to find the optimal rate that captures all relevant frequencies without unnecessary oversampling. So, balancing accuracy and resource efficiency.

### Signal Processing
The system uses kissFFT library, a lightweight **FFT** library, to transform time-domain signals into their frequency components. This transformation helps in identifying the dominant frequencies within the signal which guides the sampling rate adjustment.
A threshold multiplier is applied to dynamically adjust the decision threshold for sampling rate changes, based on the observed signal characteristics.

### Aggregate Function Over a Window
Computing the average of the signal over a specified window (default of 5 seconds) serves to smooth out transient noise and provide a stable measure of the signal's characteristics over that period. The average is calculated both as a simple mean and as a mean of absolute values, the latter providing insights into the overall energy of the signal irrespective of its direction.
This aggregate value provides a meaningful representation of the signal over time and reduces the volume of data to be transmitted.

### Communication with Edge Server
MQTT is used for data transmission to leverage its lightweight and efficient publish/subscribe model, which is suitable for IoT devices with limited bandwidth and power. Moreover, only aggregate data metrics are transmitted, reducing the amount of data sent. Data integrity and confidentiality are ensured through SSL encryption, safeguarding data during transmission to the edge server.

It must be noted that every change in the network configuration (for example a change of IP address) will need new TLS certificates that will have to be generated locally.
 
### Error Handling
ESP32's task watchdog timers are utilized to ensure system responsiveness and recovery from potential deadlocks or excessive processing delays. Through out the code the ESP_LOG features are extensively used for debugging and tracking the system's operational status, helping in quick identification and resolution of issues during development and deployment.

### SYSTEM PERFORMANCE MONITORING
**Energy Savings**: The adaptive sampling frequency should results in significant energy savings compared to the original oversampled frequency.
**Data Volume**: The volume of data transmitted over the network is reduced by using the avarage, as only the aggregate values are sent instead of raw high-frequency data.
**End-to-End Latency**: The latency of the system, from data generation to reception by the edge server, if properly handled should ensure timely data delivery.



## License
This project is licensed under the MIT License - see the  [LICENSE](https://github.com/RobCTs/IoT_processing_signals/blob/main/LICENSE) file for details.
