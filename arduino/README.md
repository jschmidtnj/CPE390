# arduino

## A/D converters

- analog = continuously varying
- digital = discrete levels

## Commands

- digitalWrite()
- analogWrite()

## pull down resistor

- 1-2kOhm resistor for load prevents short circuit
- too low and the current is wasted, too high and the reading will be wrong (close to the i/o input)

## simple math from command line

this looks like matlab syntax for some of it

```bash
octave
t=0:.1:2*pi;
plot(t, sin(t));
```
