  long getDayBar(int bar[barlength]){ 
    Serial.println(int(barToChar(bar[7]))*100,DEC);
    Serial.println(int(barToChar(bar[8]))*10,DEC);
    Serial.println(int(barToChar(bar[9])),DEC);
  return ((bar[7]*100)+(bar[8]*10)+bar[9]);
  }
