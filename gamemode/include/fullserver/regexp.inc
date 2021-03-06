/**
The MIT License (MIT)

Copyright (c) 2014 Mateusz Cichon

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#if defined USE_REGEX

stock ContainsIP(const string[])
{
  static RegEx:rCIP;

  if ( !rCIP ) rCIP = regex_build(".*[0-9]{1,3}[^0-9]{1,3}[0-9]{1,3}[^0-9]{1,3}[0-9]{1,3}[^0-9]{1,3}[0-9]{1,3}[^0-9]{1,7}[0-9]{3,5}.*");

  if (regex_match_exid(string, rCIP)) return true;
  else return false;
}

stock NinjaBan(const string[])
{
   #pragma unused string
   return false;
}

stock IsValidEmail(const string[])
{
  static RegEx:rEMAIL;

  if ( !rEMAIL ) rEMAIL = regex_build("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,4}$");

  if (regex_match_exid(string, rEMAIL)) return true;
  else return false;
}

#else

stock ContainsIP(const string[])
{
  #pragma unused string
  return false;
}

stock NinjaBan(const string[])
{
  #pragma unused string
  return false;
}

stock IsValidEmail(const string[])
{
  #pragma unused string
  return false;
}
#endif
// EOF
