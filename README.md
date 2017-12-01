# Wind Chill Factor
A program that calculates the wind chill index of a city.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/wind-chill-factor.git
   ```
    or [download as ZIP](https://github.com/cramaechi/wind-chill-factor/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd wind_chill_factor
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./wind_chill_factor
```

Sample Output:
```
Enter today's temperature (in degrees Celsius <= 10) and wind speed (in m/sec): 10 1.66667                                                                                                                                                    
The wind chill factor for today is: 11.35°C                                                                                                                                                                                                   
                                                                                                                                                                                                                                              
Start over? (y/n) y                                                                                                                                                                                                                           
                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                              
Enter today's temperature (in degrees Celsius <= 10) and wind speed (in m/sec): -7 0                                                                                                                                                          
The wind chill factor for today is: 14.82°C                                                                                                                                                                                                   
                                                                                                                                                                                                                                              
Start over? (y/n) n   
```
