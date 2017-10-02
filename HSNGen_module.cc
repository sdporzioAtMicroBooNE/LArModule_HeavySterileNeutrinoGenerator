////////////////////////////////////////////////////////////////////////
/// \file  HSNGen_module.cc
/// \brief Generator for heavy sterile neutrinos based on pre-generated HSN fluxes.
///
/// \author  salvatore.porzio@postgrad.manchester.ac.uk
////////////////////////////////////////////////////////////////////////
#ifndef EVGEN_HSNGen_H
#define EVGEN_HSNGen_H

// ROOT includes
#include "TRandom3.h"
#include "TDatabasePDG.h"
#include "TString.h"
#include "TSystem.h" //need BaseName and DirName

// Framework includes
#include "art/Framework/Core/EDProducer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "fhiclcpp/ParameterSet.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Services/Registry/ServiceHandle.h"
#include "art/Framework/Services/Optional/TFileService.h"
#include "art/Framework/Services/Optional/TFileDirectory.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "art/Framework/Services/Optional/RandomNumberGenerator.h"

// art extensions
#include "nutools/RandomUtils/NuRandomService.h"

// larsoft includes
#include "nusimdata/SimulationBase/MCTruth.h"
#include "nusimdata/SimulationBase/MCParticle.h"
#include "nutools/EventGeneratorBase/evgenbase.h"
#include "larcorealg/Geometry/geo.h"
#include "larcore/Geometry/Geometry.h"
#include "larcorealg/Geometry/CryostatGeo.h"
#include "larcoreobj/SummaryData/RunData.h"

#include <sqlite3.h> 
#include "CLHEP/Random/RandFlat.h"
#include "CLHEP/Random/RandPoissonQ.h"
#include "ifdh.h"  //to handle flux files

namespace hsngen {
  /// A module to check the results from the Monte Carlo generator
  class CORSIKAGen : public art::EDProducer {
  public:
    explicit CORSIKAGen(fhicl::ParameterSet const& pset);
    virtual ~CORSIKAGen();                       
    
    void produce(art::Event& evt);  
    void beginJob();
    void beginRun(art::Run& run);
    void reconfigure(fhicl::ParameterSet const& p);
  private:
  }; // END class CORSIKAGen

  CORSIKAGen::CORSIKAGen(fhicl::ParameterSet const& p) {
    this->reconfigure(p);
    return;
  }
  
  CORSIKAGen::~CORSIKAGen(){}

  void CORSIKAGen::reconfigure(fhicl::ParameterSet const& p){

    return;
  }

  void CORSIKAGen::beginJob(){

    return;
  }

  void CORSIKAGen::beginRun(art::Run& run){

    return;
  }

  void CORSIKAGen::produce(art::Event& evt){
  
    return;
  } // END function produce

  DEFINE_ART_MODULE(CORSIKAGen)

} // END namespace hsngen

#endif
