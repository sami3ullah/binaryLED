class BinaryLED{
  
  private:
    int _ledPin[8];

  
  public:
    BinaryLED(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7);
    void begin();
    void upCount();
    void downCount();
    void shiftRight();
    void shiftLeft();
    void allOf();
 };
