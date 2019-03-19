#ifndef gemqc8_Geometry_MuonDDDConstants_h
#define gemqc8_Geometry_MuonDDDConstants_h

/** \class MuonDDDConstants
 *
 * this class reads the constant section of
 * the muon-numbering xml-file
 *  
 * \author Arno Straessner, CERN <arno.straessner@cern.ch>
 *  modified by:
 *   Michael Case, <michael.case@cern.ch>, 2006/10/05
 *
 */

#include <string>
#include <map>
#include <iostream>

class DDCompactView;

namespace QC8
{
class MuonDDDConstants {
 public:

  MuonDDDConstants( const DDCompactView& cpv );

  int getValue ( const std::string& name ) const;
  void addValue( const std::string& name, const int& value );
  
  MuonDDDConstants() = delete;
  
 private:
  std::map<std::string, int> namesAndValues_;
};
}
#endif
