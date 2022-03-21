//!  The library.h file.
/*!
  This file only contains the function declarations for
  the functions to be included in the shared library.
*/

#ifndef LIBRARY_H
#define LIBRARY_H

namespace Library 
{
    int sqroot(int n);
    //! Declaration of sqroot function returning the Square root of an int.
    /*!
      \param n an integer argument.
      \return The square root
    */

    void printInt(int num);
    //! Declaration of printInt function which prints an integer.
    /*!
      \param num an integer argument.
      \no return statement
    */
}
#endif