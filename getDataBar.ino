  long getDayBar(int bar[barlength]){ 
    Serial.println(int(barToInt(bar[7]))*100,DEC);
    Serial.println(int(barToInt(bar[8]))*10,DEC);
    Serial.println(int(barToInt(bar[9])),DEC);
  //return ((bar[7]*100)+(bar[8]*10)+bar[9]);
  return ((int(barToInt(bar[7]))*100)+(int(barToInt(bar[8]))*10)+int(barToInt(bar[9])));
  }

