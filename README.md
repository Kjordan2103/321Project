How to use our product!

**Materials you will want to gather**
1. One Arduino Uno board with a cable to connnect to power
2. Breadboard
3. Jump wires to connect individual components to breadboard (get as many as you can find to be safe, you should need at least 12)
4. 1 led bulb to connect to breadboard
5. 1 Arduino Ultrasonic Module Distance Sensor
6. 1 IR Infrared Obstacle Avoidance Sensor Module for Arduino
7. Cardboard boxes (one to use as a garbage bin, others to use to cut in order to help with setup)
8. 1 Servo Motor for Arduino with attachments (should come in little baggy with motors)
9. Scissors and Tape (ideally heavy-duty/shipping tape)
10. Zipties


**Setup**
Note: When cutting holes, make sure that zipties you are using can fit through them or wires can fit through them depending on the use of the hole
1. You will want to ideally gather some cardboard boxes to form a rectuangular bin structure. You can use anything here, however we will be poking holes in it so we found
carboard to be the easiest here. Save some cardboard for future steps. Make it so that there is no lid for now
2. use cardboard to form an upright rectangular box with a sealed base and no lid on top. This is your bin
3. Cut 2 smaller sized holes into the middle-top portion of the back of the bin. They should be around a half inch below where the lid will be.
4. Now, gather a piece of cardboard that fits over the top of your bin to act as a lid
5. Using the piece of cardboard from step 4, poke two holes in this piece. Attach it to the back of the bin using the holes you have created on both pieces and zipties
6. Using tape, mount the arduino ultrasonic distance sensor onto the front of your bin so that the sensor is facing outwards of the bin. This is the sensor for opening the lid.
7. Now, using another piece of cardboard, cut a medium sized lever-shaped piece out. This will be attached to the servo motor to lift the lid of the bin from the inside.
You can attach this piece whichever way u find to be easiest. We used tape, however to ensure your lever stays in place you may want to use zipties or something else. 
8. After it is attached to the servo motor, cut out two more holes in the side of the trash bin. Make sure that they are high enough so that when the lever is attached, as it rotates upward it will push open the lid
9. You will now want to attach your Arduino IR Infrared Obstacle Avoidance Sensor. To do this, cut a hole the exact shape of the sensor.
10. Slide the sensor in through the hole you created, as you do this, ensure the bulbs of the sensor are facing straight and inside the trash can for its intended use.
Make sure as you attach the sensors, they are facing towards the inside of the bin.
11. Once all of your arduino components are in the correct place, put the breadboard on the same side of the bin that you have the servo motor and the ir sensor setup. Make sure it is positioned so that you can easily connect all the components.
12. Follow the circuit diagram attached to ensure correct wiring of the rt embedded system. You may have to cut an additional hole to run the wires of the servo motor through the bin to the breadboard. 

**Interaction Details**

**Opening the lid**
To open the lid, simply wave your hand in front of the ultrasonic sensor. To test how this works, you can run our shouldOpen_demo.ino test script. This test will give you a good idea on the distance threshold that the sensor is using to open the lid but will not open the lid itself. For this test the only other component you will need to have set up is the led bulb.
If you would like to test the functionality for opening the lid, you can run the simple_servo.ino test script. This will move the servo motor once you run the code. To tinker with the rotation of the motor, you can adjust the conditions of the for loops doing the writing to the servo. Once you verify that both of these parts are working as intended, you should be able to open the lid by waving your hand in front of the ultrasonic sensor. Once you do so, the servo will spin the attached lever upwards, pushing the bins lid open.  

**Detecting when full**
The interaction for detecting when the bin is full is quite simple. The only component of the project that this interaction depends upon is the IR Infrared Obstacle Avoidance Sensor Module. To test the functionality of this component, you can run the isFull_demo.ino test script. The sensor here works by emitting a laser from the IR emitter bulb (clearer bulb on sensor) and receiving the reflection of the laser with the IR receiver bulb (darker bulb). It measures distance with this functionality by recording the time it took to receive the reflected laser (if an obstacle is in the way, the time to receiving the reflected laser will be much faster and the sensor will be able to say that there is an obstacle in the way). Once you figure out the functionality behind this sensor, you can test it further by running your main project loop and filling up the bin. If the bin reads that it is full when the trash piles up to be on the same level as the sensor, your project is functioning as intended. 


