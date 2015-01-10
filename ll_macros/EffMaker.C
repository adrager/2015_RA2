#define EffMaker_cxx
// The class definition in EffMaker.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("EffMaker.C")
// Root > T->Process("EffMaker.C","some options")
// Root > T->Process("EffMaker.C+")
//

#include "EffMaker.h"
#include <TH2.h>
#include <TStyle.h>
#include <iostream>
#include "TSystem.h"

void EffMaker::Begin(TTree * /*tree*/)
{
  // The Begin() function is called at the start of the query.
  // When running with PROOF Begin() is only called on the client.
  // The tree argument is deprecated (on PROOF 0 is passed).
  
  TString option = GetOption();
}
void EffMaker::SlaveBegin(TTree * /*tree*/)
{
  TString option = GetOption();
  // purity
  // muon
  //1D
  MuPurityBTag_ = new TH1F("MuPurityBTag1D","MuPurityBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(MuPurityBTag_);
  MuPurityBTagFail_ = (TH1F*)MuPurityBTag_->Clone();
  MuPurityBTagFail_->SetName("MuPurityBTag1DFail");
  GetOutputList()->Add(MuPurityBTagFail_); 
  
  MuPurityNJets_ = new TH1F("MuPurityNJets1D","MuPurityNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(MuPurityNJets_);
  MuPurityNJetsFail_ = (TH1F*)MuPurityNJets_->Clone();
  MuPurityNJetsFail_->SetName("MuPurityNJets1DFail");
  GetOutputList()->Add(MuPurityNJetsFail_); 
  
  MuPurityHT_ = new TH1F("MuPurityHT1D","MuPurityHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(MuPurityHT_);
  MuPurityHTFail_ = (TH1F*)MuPurityHT_->Clone();
  MuPurityHTFail_->SetName("MuPurityHT1DFail");
  GetOutputList()->Add(MuPurityHTFail_); 
  
  MuPurityMHT_ = new TH1F("MuPurityMHT1D","MuPurityMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(MuPurityMHT_);
  MuPurityMHTFail_ = (TH1F*)MuPurityMHT_->Clone();
  MuPurityMHTFail_->SetName("MuPurityMHT1DFail");
  GetOutputList()->Add(MuPurityMHTFail_); 
  //2D
  MuonPurityMHTNJet = new TH2F("MuonPurity","MuonPurity",mupurityMHT_-1,muPurityMHT_,mupurityNJet_-1,muPurityNJet_);
  GetOutputList()->Add(MuonPurityMHTNJet);
  MuonPurityMHTNJetFail = (TH2F*)MuonPurityMHTNJet->Clone();
  MuonPurityMHTNJetFail->SetName("MuonPurityFail");
  GetOutputList()->Add(MuonPurityMHTNJetFail);  
  // electron
  //1D
  ElecPurityBTag_ = new TH1F("ElecPurityBTag1D","ElecPurityBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(ElecPurityBTag_);
  ElecPurityBTagFail_ = (TH1F*)ElecPurityBTag_->Clone();
  ElecPurityBTagFail_->SetName("ElecPurityBTag1DFail");
  GetOutputList()->Add(ElecPurityBTagFail_); 
  
  ElecPurityNJets_ = new TH1F("ElecPurityNJets1D","ElecPurityNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(ElecPurityNJets_);
  ElecPurityNJetsFail_ = (TH1F*)ElecPurityNJets_->Clone();
  ElecPurityNJetsFail_->SetName("ElecPurityNJets1DFail");
  GetOutputList()->Add(ElecPurityNJetsFail_); 
  
  ElecPurityHT_ = new TH1F("ElecPurityHT1D","ElecPurityHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(ElecPurityHT_);
  ElecPurityHTFail_ = (TH1F*)ElecPurityHT_->Clone();
  ElecPurityHTFail_->SetName("ElecPurityHT1DFail");
  GetOutputList()->Add(ElecPurityHTFail_); 
  
  ElecPurityMHT_ = new TH1F("ElecPurityMHT1D","ElecPurityMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(ElecPurityMHT_);
  ElecPurityMHTFail_ = (TH1F*)ElecPurityMHT_->Clone();
  ElecPurityMHTFail_->SetName("ElecPurityMHT1DFail");
  GetOutputList()->Add(ElecPurityMHTFail_); 
  //2D
  std::cout<<"POin5"<<std::endl;
  ElecPurityMHTNJet = new TH2F("ElecPurity","ElecPurity",mupurityMHT_-1,muPurityMHT_,mupurityNJet_-1,muPurityNJet_);
  GetOutputList()->Add(ElecPurityMHTNJet);
  ElecPurityMHTNJetFail = (TH2F*)ElecPurityMHTNJet->Clone();
  ElecPurityMHTNJetFail->SetName("ElecPurityFail");
  GetOutputList()->Add(ElecPurityMHTNJetFail); 
  
  // acceptance
  //muon
  //1D
  MuAccBTag_ = new TH1F("MuAccBTag1D","MuAccBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(MuAccBTag_);
  MuAccBTagFail_ = (TH1F*)MuAccBTag_->Clone();
  MuAccBTagFail_->SetName("MuAccBTag1DFail");
  GetOutputList()->Add(MuAccBTagFail_); 
  
  MuAccNJets_ = new TH1F("MuAccNJets1D","MuAccNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(MuAccNJets_);
  MuAccNJetsFail_ = (TH1F*)MuAccNJets_->Clone();
  MuAccNJetsFail_->SetName("MuAccNJets1DFail");
  GetOutputList()->Add(MuAccNJetsFail_); 
  
  MuAccHT_ = new TH1F("MuAccHT1D","MuAccHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(MuAccHT_);
  MuAccHTFail_ = (TH1F*)MuAccHT_->Clone();
  MuAccHTFail_->SetName("MuAccHT1DFail");
  GetOutputList()->Add(MuAccHTFail_); 
  
  MuAccMHT_ = new TH1F("MuAccMHT1D","MuAccMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(MuAccMHT_);
  MuAccMHTFail_ = (TH1F*)MuAccMHT_->Clone();
  MuAccMHTFail_->SetName("MuAccMHT1DFail");
  GetOutputList()->Add(MuAccMHTFail_); 
  
  //muon
  //1D
  ElecAccBTag_ = new TH1F("ElecAccBTag1D","ElecAccBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(ElecAccBTag_);
  ElecAccBTagFail_ = (TH1F*)ElecAccBTag_->Clone();
  ElecAccBTagFail_->SetName("ElecAccBTag1DFail");
  GetOutputList()->Add(ElecAccBTagFail_); 
  
  ElecAccNJets_ = new TH1F("ElecAccNJets1D","ElecAccNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(ElecAccNJets_);
  ElecAccNJetsFail_ = (TH1F*)ElecAccNJets_->Clone();
  ElecAccNJetsFail_->SetName("ElecAccNJets1DFail");
  GetOutputList()->Add(ElecAccNJetsFail_); 
  
  ElecAccHT_ = new TH1F("ElecAccHT1D","ElecAccHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(ElecAccHT_);
  ElecAccHTFail_ = (TH1F*)ElecAccHT_->Clone();
  ElecAccHTFail_->SetName("ElecAccHT1DFail");
  GetOutputList()->Add(ElecAccHTFail_); 
  
  ElecAccMHT_ = new TH1F("ElecAccMHT1D","ElecAccMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(ElecAccMHT_);
  ElecAccMHTFail_ = (TH1F*)ElecAccMHT_->Clone();
  ElecAccMHTFail_->SetName("ElecAccMHT1DFail");
  GetOutputList()->Add(ElecAccMHTFail_); 
  
  // reconstruction
  //muon
  //1D
  MuRecoBTag_ = new TH1F("MuRecoBTag1D","MuRecoBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(MuRecoBTag_);
  MuRecoBTagFail_ = (TH1F*)MuRecoBTag_->Clone();
  MuRecoBTagFail_->SetName("MuRecoBTag1DFail");
  GetOutputList()->Add(MuRecoBTagFail_); 
  
  MuRecoNJets_ = new TH1F("MuRecoNJets1D","MuRecoNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(MuRecoNJets_);
  MuRecoNJetsFail_ = (TH1F*)MuRecoNJets_->Clone();
  MuRecoNJetsFail_->SetName("MuRecoNJets1DFail");
  GetOutputList()->Add(MuRecoNJetsFail_); 
  
  MuRecoHT_ = new TH1F("MuRecoHT1D","MuRecoHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(MuRecoHT_);
  MuRecoHTFail_ = (TH1F*)MuRecoHT_->Clone();
  MuRecoHTFail_->SetName("MuRecoHT1DFail");
  GetOutputList()->Add(MuRecoHTFail_); 
  
  MuRecoMHT_ = new TH1F("MuRecoMHT1D","MuRecoMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(MuRecoMHT_);
  MuRecoMHTFail_ = (TH1F*)MuRecoMHT_->Clone();
  MuRecoMHTFail_->SetName("MuRecoMHT1DFail");
  GetOutputList()->Add(MuRecoMHTFail_); 
  
  //elec
  //1D
  ElecRecoBTag_ = new TH1F("ElecRecoBTag1D","ElecRecoBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(ElecRecoBTag_);
  ElecRecoBTagFail_ = (TH1F*)ElecRecoBTag_->Clone();
  ElecRecoBTagFail_->SetName("ElecRecoBTag1DFail");
  GetOutputList()->Add(ElecRecoBTagFail_); 
  
  ElecRecoNJets_ = new TH1F("ElecRecoNJets1D","ElecRecoNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(ElecRecoNJets_);
  ElecRecoNJetsFail_ = (TH1F*)ElecRecoNJets_->Clone();
  ElecRecoNJetsFail_->SetName("ElecRecoNJets1DFail");
  GetOutputList()->Add(ElecRecoNJetsFail_); 
  
  ElecRecoHT_ = new TH1F("ElecRecoHT1D","ElecRecoHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(ElecRecoHT_);
  ElecRecoHTFail_ = (TH1F*)ElecRecoHT_->Clone();
  ElecRecoHTFail_->SetName("ElecRecoHT1DFail");
  GetOutputList()->Add(ElecRecoHTFail_); 
  
  ElecRecoMHT_ = new TH1F("ElecRecoMHT1D","ElecRecoMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(ElecRecoMHT_);
  ElecRecoMHTFail_ = (TH1F*)ElecRecoMHT_->Clone();
  ElecRecoMHTFail_->SetName("ElecRecoMHT1DFail");
  GetOutputList()->Add(ElecRecoMHTFail_); 
  
  // isolation
  //muon
  //1D
  MuIsoBTag_ = new TH1F("MuIsoBTag1D","MuIsoBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(MuIsoBTag_);
  MuIsoBTagFail_ = (TH1F*)MuIsoBTag_->Clone();
  MuIsoBTagFail_->SetName("MuIsoBTag1DFail");
  GetOutputList()->Add(MuIsoBTagFail_); 
  
  MuIsoNJets_ = new TH1F("MuIsoNJets1D","MuIsoNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(MuIsoNJets_);
  MuIsoNJetsFail_ = (TH1F*)MuIsoNJets_->Clone();
  MuIsoNJetsFail_->SetName("MuIsoNJets1DFail");
  GetOutputList()->Add(MuIsoNJetsFail_); 
  
  MuIsoHT_ = new TH1F("MuIsoHT1D","MuIsoHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(MuIsoHT_);
  MuIsoHTFail_ = (TH1F*)MuIsoHT_->Clone();
  MuIsoHTFail_->SetName("MuIsoHT1DFail");
  GetOutputList()->Add(MuIsoHTFail_); 
  
  MuIsoMHT_ = new TH1F("MuIsoMHT1D","MuIsoMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(MuIsoMHT_);
  MuIsoMHTFail_ = (TH1F*)MuIsoMHT_->Clone();
  MuIsoMHTFail_->SetName("MuIsoMHT1DFail");
  GetOutputList()->Add(MuIsoMHTFail_); 
  
  //elec
  //1D
  ElecIsoBTag_ = new TH1F("ElecIsoBTag1D","ElecIsoBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(ElecIsoBTag_);
  ElecIsoBTagFail_ = (TH1F*)ElecIsoBTag_->Clone();
  ElecIsoBTagFail_->SetName("ElecIsoBTag1DFail");
  GetOutputList()->Add(ElecIsoBTagFail_); 
  
  ElecIsoNJets_ = new TH1F("ElecIsoNJets1D","ElecIsoNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(ElecIsoNJets_);
  ElecIsoNJetsFail_ = (TH1F*)ElecIsoNJets_->Clone();
  ElecIsoNJetsFail_->SetName("ElecIsoNJets1DFail");
  GetOutputList()->Add(ElecIsoNJetsFail_); 
  
  ElecIsoHT_ = new TH1F("ElecIsoHT1D","ElecIsoHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(ElecIsoHT_);
  ElecIsoHTFail_ = (TH1F*)ElecIsoHT_->Clone();
  ElecIsoHTFail_->SetName("ElecIsoHT1DFail");
  GetOutputList()->Add(ElecIsoHTFail_); 
  
  ElecIsoMHT_ = new TH1F("ElecIsoMHT1D","ElecIsoMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(ElecIsoMHT_);
  ElecIsoMHTFail_ = (TH1F*)ElecIsoMHT_->Clone();
  ElecIsoMHTFail_->SetName("ElecIsoMHT1DFail");
  GetOutputList()->Add(ElecIsoMHTFail_); 
  
  // mtw
  //muon
  //1D
  MuMTWBTag_ = new TH1F("MuMTWBTag1D","MuMTWBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(MuMTWBTag_);
  MuMTWBTagFail_ = (TH1F*)MuMTWBTag_->Clone();
  MuMTWBTagFail_->SetName("MuMTWBTag1DFail");
  GetOutputList()->Add(MuMTWBTagFail_); 
  
  MuMTWNJets_ = new TH1F("MuMTWNJets1D","MuMTWNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(MuMTWNJets_);
  MuMTWNJetsFail_ = (TH1F*)MuMTWNJets_->Clone();
  MuMTWNJetsFail_->SetName("MuMTWNJets1DFail");
  GetOutputList()->Add(MuMTWNJetsFail_); 
  
  MuMTWHT_ = new TH1F("MuMTWHT1D","MuMTWHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(MuMTWHT_);
  MuMTWHTFail_ = (TH1F*)MuMTWHT_->Clone();
  MuMTWHTFail_->SetName("MuMTWHT1DFail");
  GetOutputList()->Add(MuMTWHTFail_); 
  
  MuMTWMHT_ = new TH1F("MuMTWMHT1D","MuMTWMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(MuMTWMHT_);
  MuMTWMHTFail_ = (TH1F*)MuMTWMHT_->Clone();
  MuMTWMHTFail_->SetName("MuMTWMHT1DFail");
  GetOutputList()->Add(MuMTWMHTFail_); 
  
  //muon
  //1D
  ElecMTWBTag_ = new TH1F("ElecMTWBTag1D","ElecMTWBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(ElecMTWBTag_);
  ElecMTWBTagFail_ = (TH1F*)ElecMTWBTag_->Clone();
  ElecMTWBTagFail_->SetName("ElecMTWBTag1DFail");
  GetOutputList()->Add(ElecMTWBTagFail_); 
  
  ElecMTWNJets_ = new TH1F("ElecMTWNJets1D","ElecMTWNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(ElecMTWNJets_);
  ElecMTWNJetsFail_ = (TH1F*)ElecMTWNJets_->Clone();
  ElecMTWNJetsFail_->SetName("ElecMTWNJets1DFail");
  GetOutputList()->Add(ElecMTWNJetsFail_); 
  
  ElecMTWHT_ = new TH1F("ElecMTWHT1D","ElecMTWHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(ElecMTWHT_);
  ElecMTWHTFail_ = (TH1F*)ElecMTWHT_->Clone();
  ElecMTWHTFail_->SetName("ElecMTWHT1DFail");
  GetOutputList()->Add(ElecMTWHTFail_); 
  
  ElecMTWMHT_ = new TH1F("ElecMTWMHT1D","ElecMTWMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(ElecMTWMHT_);
  ElecMTWMHTFail_ = (TH1F*)ElecMTWMHT_->Clone();
  ElecMTWMHTFail_->SetName("ElecMTWMHT1DFail");
  GetOutputList()->Add(ElecMTWMHTFail_); 
  
  // Isolated Track
  
  //Mu
  
  IsoTrackMuBTag_ = new TH1F("IsoTrackMuBTag1D","IsoTrackMuBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackMuBTag_);
  IsoTrackMuBTagFail_ = (TH1F*)IsoTrackMuBTag_->Clone();
  IsoTrackMuBTagFail_->SetName("IsoTrackMuBTag1DFail");
  GetOutputList()->Add(IsoTrackMuBTagFail_); 
  
  IsoTrackMuNJets_ = new TH1F("IsoTrackMuNJets1D","IsoTrackMuNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackMuNJets_);
  IsoTrackMuNJetsFail_ = (TH1F*)IsoTrackMuNJets_->Clone();
  IsoTrackMuNJetsFail_->SetName("IsoTrackMuNJets1DFail");
  GetOutputList()->Add(IsoTrackMuNJetsFail_); 
  
  IsoTrackMuHT_ = new TH1F("IsoTrackMuHT1D","IsoTrackMuHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackMuHT_);
  IsoTrackMuHTFail_ = (TH1F*)IsoTrackMuHT_->Clone();
  IsoTrackMuHTFail_->SetName("IsoTrackMuHT1DFail");
  GetOutputList()->Add(IsoTrackMuHTFail_); 
  
  IsoTrackMuMHT_ = new TH1F("IsoTrackMuMHT1D","IsoTrackMuMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackMuMHT_);
  IsoTrackMuMHTFail_ = (TH1F*)IsoTrackMuMHT_->Clone();
  IsoTrackMuMHTFail_->SetName("IsoTrackMuMHT1DFail");
  GetOutputList()->Add(IsoTrackMuMHTFail_); 
  
  // match to isolated muon
  IsoTrackMuMatchedToIsoMuBTag_ = new TH1F("IsoTrackMuMatchedToIsoMuBTag1D","IsoTrackMuMatchedToIsoMuBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuBTag_);
  IsoTrackMuMatchedToIsoMuBTagFail_ = (TH1F*)IsoTrackMuMatchedToIsoMuBTag_->Clone();
  IsoTrackMuMatchedToIsoMuBTagFail_->SetName("IsoTrackMuMatchedToIsoMuBTag1DFail");
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuBTagFail_); 
  
  IsoTrackMuMatchedToIsoMuNJets_ = new TH1F("IsoTrackMuMatchedToIsoMuNJets1D","IsoTrackMuMatchedToIsoMuNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuNJets_);
  IsoTrackMuMatchedToIsoMuNJetsFail_ = (TH1F*)IsoTrackMuMatchedToIsoMuNJets_->Clone();
  IsoTrackMuMatchedToIsoMuNJetsFail_->SetName("IsoTrackMuMatchedToIsoMuNJets1DFail");
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuNJetsFail_); 
  
  IsoTrackMuMatchedToIsoMuHT_ = new TH1F("IsoTrackMuMatchedToIsoMuHT1D","IsoTrackMuMatchedToIsoMuHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuHT_);
  IsoTrackMuMatchedToIsoMuHTFail_ = (TH1F*)IsoTrackMuMatchedToIsoMuHT_->Clone();
  IsoTrackMuMatchedToIsoMuHTFail_->SetName("IsoTrackMuMatchedToIsoMuHT1DFail");
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuHTFail_); 
  
  IsoTrackMuMatchedToIsoMuMHT_ = new TH1F("IsoTrackMuMatchedToIsoMuMHT1D","IsoTrackMuMatchedToIsoMuMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuMHT_);
  IsoTrackMuMatchedToIsoMuMHTFail_ = (TH1F*)IsoTrackMuMatchedToIsoMuMHT_->Clone();
  IsoTrackMuMatchedToIsoMuMHTFail_->SetName("IsoTrackMuMatchedToIsoMuMHT1DFail");
  GetOutputList()->Add(IsoTrackMuMatchedToIsoMuMHTFail_); 
  
  
  
  IsoTrackMuMTWBTag_ = new TH1F("IsoTrackMuMTWBTag1D","IsoTrackMuMTWBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackMuMTWBTag_);
  IsoTrackMuMTWBTagFail_ = (TH1F*)IsoTrackMuMTWBTag_->Clone();
  IsoTrackMuMTWBTagFail_->SetName("IsoTrackMuMTWBTag1DFail");
  GetOutputList()->Add(IsoTrackMuMTWBTagFail_); 
  
  IsoTrackMuMTWNJets_ = new TH1F("IsoTrackMuMTWNJets1D","IsoTrackMuMTWNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackMuMTWNJets_);
  IsoTrackMuMTWNJetsFail_ = (TH1F*)IsoTrackMuMTWNJets_->Clone();
  IsoTrackMuMTWNJetsFail_->SetName("IsoTrackMuMTWNJets1DFail");
  GetOutputList()->Add(IsoTrackMuMTWNJetsFail_); 
  
  IsoTrackMuMTWHT_ = new TH1F("IsoTrackMuMTWHT1D","IsoTrackMuMTWHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackMuMTWHT_);
  IsoTrackMuMTWHTFail_ = (TH1F*)IsoTrackMuMTWHT_->Clone();
  IsoTrackMuMTWHTFail_->SetName("IsoTrackMuMTWHT1DFail");
  GetOutputList()->Add(IsoTrackMuMTWHTFail_); 
  
  IsoTrackMuMTWMHT_ = new TH1F("IsoTrackMuMTWMHT1D","IsoTrackMuMTWMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackMuMTWMHT_);
  IsoTrackMuMTWMHTFail_ = (TH1F*)IsoTrackMuMTWMHT_->Clone();
  IsoTrackMuMTWMHTFail_->SetName("IsoTrackMuMTWMHT1DFail");
  GetOutputList()->Add(IsoTrackMuMTWMHTFail_); 
  
  //Elec
  
  IsoTrackElecBTag_ = new TH1F("IsoTrackElecBTag1D","IsoTrackElecBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackElecBTag_);
  IsoTrackElecBTagFail_ = (TH1F*)IsoTrackElecBTag_->Clone();
  IsoTrackElecBTagFail_->SetName("IsoTrackElecBTag1DFail");
  GetOutputList()->Add(IsoTrackElecBTagFail_); 
  
  IsoTrackElecNJets_ = new TH1F("IsoTrackElecNJets1D","IsoTrackElecNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackElecNJets_);
  IsoTrackElecNJetsFail_ = (TH1F*)IsoTrackElecNJets_->Clone();
  IsoTrackElecNJetsFail_->SetName("IsoTrackElecNJets1DFail");
  GetOutputList()->Add(IsoTrackElecNJetsFail_); 
  
  IsoTrackElecHT_ = new TH1F("IsoTrackElecHT1D","IsoTrackElecHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackElecHT_);
  IsoTrackElecHTFail_ = (TH1F*)IsoTrackElecHT_->Clone();
  IsoTrackElecHTFail_->SetName("IsoTrackElecHT1DFail");
  GetOutputList()->Add(IsoTrackElecHTFail_); 
  
  IsoTrackElecMHT_ = new TH1F("IsoTrackElecMHT1D","IsoTrackElecMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackElecMHT_);
  IsoTrackElecMHTFail_ = (TH1F*)IsoTrackElecMHT_->Clone();
  IsoTrackElecMHTFail_->SetName("IsoTrackElecMHT1DFail");
  GetOutputList()->Add(IsoTrackElecMHTFail_); 
  
  
  IsoTrackElecMTWBTag_ = new TH1F("IsoTrackElecMTWBTag1D","IsoTrackElecMTWBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackElecMTWBTag_);
  IsoTrackElecMTWBTagFail_ = (TH1F*)IsoTrackElecMTWBTag_->Clone();
  IsoTrackElecMTWBTagFail_->SetName("IsoTrackElecMTWBTag1DFail");
  GetOutputList()->Add(IsoTrackElecMTWBTagFail_); 
  
  IsoTrackElecMTWNJets_ = new TH1F("IsoTrackElecMTWNJets1D","IsoTrackElecMTWNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackElecMTWNJets_);
  IsoTrackElecMTWNJetsFail_ = (TH1F*)IsoTrackElecMTWNJets_->Clone();
  IsoTrackElecMTWNJetsFail_->SetName("IsoTrackElecMTWNJets1DFail");
  GetOutputList()->Add(IsoTrackElecMTWNJetsFail_); 
  
  IsoTrackElecMTWHT_ = new TH1F("IsoTrackElecMTWHT1D","IsoTrackElecMTWHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackElecMTWHT_);
  IsoTrackElecMTWHTFail_ = (TH1F*)IsoTrackElecMTWHT_->Clone();
  IsoTrackElecMTWHTFail_->SetName("IsoTrackElecMTWHT1DFail");
  GetOutputList()->Add(IsoTrackElecMTWHTFail_); 
  
  IsoTrackElecMTWMHT_ = new TH1F("IsoTrackElecMTWMHT1D","IsoTrackElecMTWMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackElecMTWMHT_);
  IsoTrackElecMTWMHTFail_ = (TH1F*)IsoTrackElecMTWMHT_->Clone();
  IsoTrackElecMTWMHTFail_->SetName("IsoTrackElecMTWMHT1DFail");
  GetOutputList()->Add(IsoTrackElecMTWMHTFail_); 
  
  
  // match to isolated muon
  IsoTrackElecMatchedToIsoElecBTag_ = new TH1F("IsoTrackElecMatchedToIsoElecBTag1D","IsoTrackElecMatchedToIsoElecBTag1D",oneDBJets_-1,OneDBJets_);
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecBTag_);
  IsoTrackElecMatchedToIsoElecBTagFail_ = (TH1F*)IsoTrackElecMatchedToIsoElecBTag_->Clone();
  IsoTrackElecMatchedToIsoElecBTagFail_->SetName("IsoTrackElecMatchedToIsoElecBTag1DFail");
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecBTagFail_); 
  
  IsoTrackElecMatchedToIsoElecNJets_ = new TH1F("IsoTrackElecMatchedToIsoElecNJets1D","IsoTrackElecMatchedToIsoElecNJets1D",oneDNJets_-1,OneDNJets_);
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecNJets_);
  IsoTrackElecMatchedToIsoElecNJetsFail_ = (TH1F*)IsoTrackElecMatchedToIsoElecNJets_->Clone();
  IsoTrackElecMatchedToIsoElecNJetsFail_->SetName("IsoTrackElecMatchedToIsoElecNJets1DFail");
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecNJetsFail_); 
  
  IsoTrackElecMatchedToIsoElecHT_ = new TH1F("IsoTrackElecMatchedToIsoElecHT1D","IsoTrackElecMatchedToIsoElecHT1D",oneDHT_-1,OneDHT_);
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecHT_);
  IsoTrackElecMatchedToIsoElecHTFail_ = (TH1F*)IsoTrackElecMatchedToIsoElecHT_->Clone();
  IsoTrackElecMatchedToIsoElecHTFail_->SetName("IsoTrackElecMatchedToIsoElecHT1DFail");
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecHTFail_); 
  
  IsoTrackElecMatchedToIsoElecMHT_ = new TH1F("IsoTrackElecMatchedToIsoElecMHT1D","IsoTrackElecMatchedToIsoElecMHT1D",oneDMHT_-1,OneDMHT_);
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecMHT_);
  IsoTrackElecMatchedToIsoElecMHTFail_ = (TH1F*)IsoTrackElecMatchedToIsoElecMHT_->Clone();
  IsoTrackElecMatchedToIsoElecMHTFail_->SetName("IsoTrackElecMatchedToIsoElecMHT1DFail");
  GetOutputList()->Add(IsoTrackElecMatchedToIsoElecMHTFail_); 
}

Bool_t EffMaker::Process(Long64_t entry)
{
  fChain->GetTree()->GetEntry(entry);
  // purity
  // single muon control sample
  if(selectedIDIsoMuonsNum==1 && selectedIDIsoElectronsNum==0)
  {
    if(RecoIsoMuonPromtMatched[0]==1)
    {
      //1D
      MuPurityBTag_->Fill(BTags,Weight);
      MuPurityNJets_->Fill(NJets,Weight);
      MuPurityHT_->Fill(HT,Weight);
      MuPurityMHT_->Fill(MHT,Weight);
      //2D
      MuonPurityMHTNJet->Fill(MHT,NJets,Weight);
    }
    if(RecoIsoMuonPromtMatched[0]==0)
    {
      //1D
      MuPurityBTagFail_->Fill(BTags,Weight);
      MuPurityNJetsFail_->Fill(NJets,Weight);
      MuPurityHTFail_->Fill(HT,Weight);
      MuPurityMHTFail_->Fill(MHT,Weight);
      //2D
      MuonPurityMHTNJetFail->Fill(MHT,NJets,Weight);
    }
  }
  // single elec control sample
  if(selectedIDIsoMuonsNum==0 && selectedIDIsoElectronsNum==1)
  {
    if(RecoIsoElecPromtMatched[0]==1)
    {
      //1D
      ElecPurityBTag_->Fill(BTags,Weight);
      ElecPurityNJets_->Fill(NJets,Weight);
      ElecPurityHT_->Fill(HT,Weight);
      ElecPurityMHT_->Fill(MHT,Weight);
      //2D
      ElecPurityMHTNJet->Fill(MHT,NJets,Weight);
    }
    if(RecoIsoElecPromtMatched[0]==0)
    {
      //1D
      ElecPurityBTagFail_->Fill(BTags,Weight);
      ElecPurityNJetsFail_->Fill(NJets,Weight);
      ElecPurityHTFail_->Fill(HT,Weight);
      ElecPurityMHTFail_->Fill(MHT,Weight);
      //2D
      ElecPurityMHTNJetFail->Fill(MHT,NJets,Weight);
    }
  }
  // acceptance
  // single muon control sample
  if(muAcc==2)
  {
    //1D
    MuAccBTag_->Fill(BTags,Weight);
    MuAccNJets_->Fill(NJets,Weight);
    MuAccHT_->Fill(HT,Weight);
    MuAccMHT_->Fill(MHT,Weight);
    //2D
  }
  if(muAcc==0)
  {
    //1D
    MuAccBTagFail_->Fill(BTags,Weight);
    MuAccNJetsFail_->Fill(NJets,Weight);
    MuAccHTFail_->Fill(HT,Weight);
    MuAccMHTFail_->Fill(MHT,Weight);
    //2D
  }
  
  // single elecon control sample
  if(elecAcc==2)
  {
    //1D
    ElecAccBTag_->Fill(BTags,Weight);
    ElecAccNJets_->Fill(NJets,Weight);
    ElecAccHT_->Fill(HT,Weight);
    ElecAccMHT_->Fill(MHT,Weight);
    //2D
  }
  if(elecAcc==0)
  {
    //1D
    ElecAccBTagFail_->Fill(BTags,Weight);
    ElecAccNJetsFail_->Fill(NJets,Weight);
    ElecAccHTFail_->Fill(HT,Weight);
    ElecAccMHTFail_->Fill(MHT,Weight);
    //2D
  }
  
  // reconstruction
  // single muon control sample
  if(muReco==2)
  {
    //1D
    MuRecoBTag_->Fill(BTags,Weight);
    MuRecoNJets_->Fill(NJets,Weight);
    MuRecoHT_->Fill(HT,Weight);
    MuRecoMHT_->Fill(MHT,Weight);
    //2D
  }
  if(muReco==0)
  {
    //1D
    MuRecoBTagFail_->Fill(BTags,Weight);
    MuRecoNJetsFail_->Fill(NJets,Weight);
    MuRecoHTFail_->Fill(HT,Weight);
    MuRecoMHTFail_->Fill(MHT,Weight);
    //2D
  }
  
  // single elecon control sample
  if(elecReco==2)
  {
    //1D
    ElecRecoBTag_->Fill(BTags,Weight);
    ElecRecoNJets_->Fill(NJets,Weight);
    ElecRecoHT_->Fill(HT,Weight);
    ElecRecoMHT_->Fill(MHT,Weight);
    //2D
  }
  if(elecReco==0)
  {
    //1D
    ElecRecoBTagFail_->Fill(BTags,Weight);
    ElecRecoNJetsFail_->Fill(NJets,Weight);
    ElecRecoHTFail_->Fill(HT,Weight);
    ElecRecoMHTFail_->Fill(MHT,Weight);
    //2D
  }
  
  // isolation
  // single muon control sample
  if(muIso==2)
  {
    //1D
    MuIsoBTag_->Fill(BTags,Weight);
    MuIsoNJets_->Fill(NJets,Weight);
    MuIsoHT_->Fill(HT,Weight);
    MuIsoMHT_->Fill(MHT,Weight);
    //2D
  }
  if(muIso==0)
  {
    //1D
    MuIsoBTagFail_->Fill(BTags,Weight);
    MuIsoNJetsFail_->Fill(NJets,Weight);
    MuIsoHTFail_->Fill(HT,Weight);
    MuIsoMHTFail_->Fill(MHT,Weight);
    //2D
  }
  
  // single elecon control sample
  if(elecIso==2)
  {
    //1D
    ElecIsoBTag_->Fill(BTags,Weight);
    ElecIsoNJets_->Fill(NJets,Weight);
    ElecIsoHT_->Fill(HT,Weight);
    ElecIsoMHT_->Fill(MHT,Weight);
    //2D
  }
  if(elecIso==0)
  {
    //1D
    ElecIsoBTagFail_->Fill(BTags,Weight);
    ElecIsoNJetsFail_->Fill(NJets,Weight);
    ElecIsoHTFail_->Fill(HT,Weight);
    ElecIsoMHTFail_->Fill(MHT,Weight);
    //2D
  }
  // mtw
  // single muon control sample
  if(muIso==2 && mtw < mtwCut_)
  {
    // 1D
    MuMTWBTag_->Fill(BTags,Weight);
    MuMTWNJets_->Fill(NJets,Weight);
    MuMTWHT_->Fill(HT,Weight);
    MuMTWMHT_->Fill(MHT,Weight);
  }
  if(muIso==2 && mtw > mtwCut_)
  {
    // 1D
    MuMTWBTagFail_->Fill(BTags,Weight);
    MuMTWNJetsFail_->Fill(NJets,Weight);
    MuMTWHTFail_->Fill(HT,Weight);
    MuMTWMHTFail_->Fill(MHT,Weight);
  }
  
  // single elec control sample
  if(elecIso==2 && mtw < mtwCut_)
  {
    // 1D
    ElecMTWBTag_->Fill(BTags,Weight);
    ElecMTWNJets_->Fill(NJets,Weight);
    ElecMTWHT_->Fill(HT,Weight);
    ElecMTWMHT_->Fill(MHT,Weight);
  }
  if(elecIso==2 && mtw > mtwCut_)
  {
    // 1D
    ElecMTWBTagFail_->Fill(BTags,Weight);
    ElecMTWNJetsFail_->Fill(NJets,Weight);
    ElecMTWHTFail_->Fill(HT,Weight);
    ElecMTWMHTFail_->Fill(MHT,Weight);
  }
  
  // isoalted track
  // muon
  
  if(GenMuNum==1 && GenElecNum==0)
  {
    if(muIsoTrack==2)
    {
      // 1D
      IsoTrackMuBTag_->Fill(BTags,Weight);
      IsoTrackMuNJets_->Fill(NJets,Weight);
      IsoTrackMuHT_->Fill(HT,Weight);
      IsoTrackMuMHT_->Fill(MHT,Weight);
    }
    if (muIsoTrack==0)
    {
      // 1D
      IsoTrackMuBTagFail_->Fill(BTags,Weight);
      IsoTrackMuNJetsFail_->Fill(NJets,Weight);
      IsoTrackMuHTFail_->Fill(HT,Weight);
      IsoTrackMuMHTFail_->Fill(MHT,Weight);
    }
  }
  // mtw cut
  if(GenMuNum==1 && GenElecNum==0)
  {
    if(muIsoTrack==2)
    {
      if(IsolatedTracksPt[0]<mtwCut_)
      {
	// 1D
	IsoTrackMuMTWBTag_->Fill(BTags,Weight);
	IsoTrackMuMTWNJets_->Fill(NJets,Weight);
	IsoTrackMuMTWHT_->Fill(HT,Weight);
	IsoTrackMuMTWMHT_->Fill(MHT,Weight);
      }
      if(IsolatedTracksPt[0]>mtwCut_)
      {
	// 1D
	IsoTrackMuMTWBTagFail_->Fill(BTags,Weight);
	IsoTrackMuMTWNJetsFail_->Fill(NJets,Weight);
	IsoTrackMuMTWHTFail_->Fill(HT,Weight);
	IsoTrackMuMTWMHTFail_->Fill(MHT,Weight);
      }
      
    }
  }
  
  // elec
  
  if(GenElecNum==1 && GenMuNum==0)
  {
    if(elecIsoTrack==2)
    {
      // 1D
      IsoTrackElecBTag_->Fill(BTags,Weight);
      IsoTrackElecNJets_->Fill(NJets,Weight);
      IsoTrackElecHT_->Fill(HT,Weight);
      IsoTrackElecMHT_->Fill(MHT,Weight);
    }
    if (elecIsoTrack==0)
    {
      // 1D
      IsoTrackElecBTagFail_->Fill(BTags,Weight);
      IsoTrackElecNJetsFail_->Fill(NJets,Weight);
      IsoTrackElecHTFail_->Fill(HT,Weight);
      IsoTrackElecMHTFail_->Fill(MHT,Weight);
    }
  }
  // mtw cut
  if(GenElecNum==1 && GenMuNum==0)
  {
    if(elecIsoTrack==2)
    {
      if(IsolatedTracksPt[0]<mtwCut_)
      {
	// 1D
	IsoTrackElecMTWBTag_->Fill(BTags,Weight);
	IsoTrackElecMTWNJets_->Fill(NJets,Weight);
	IsoTrackElecMTWHT_->Fill(HT,Weight);
	IsoTrackElecMTWMHT_->Fill(MHT,Weight);
      }
      if(IsolatedTracksPt[0]>mtwCut_)
      {
	// 1D
	IsoTrackElecMTWBTagFail_->Fill(BTags,Weight);
	IsoTrackElecMTWNJetsFail_->Fill(NJets,Weight);
	IsoTrackElecMTWHTFail_->Fill(HT,Weight);
	IsoTrackElecMTWMHTFail_->Fill(MHT,Weight);
      }
      
    }
  }
  // di leptonic contribution
  if((GenMuNum+GenElecNum)==2)
  {
    // single muon control sample correction due to di lep contribution
    if(selectedIDIsoMuonsNum==1 && selectedIDIsoElectronsNum==0)
    {
      // fill here for events that enter in the single muon control sample from di lep failing: POINT1
      // passing: point 4
    }
    // single elec control sample correction due to di lep contribution
    if(selectedIDIsoMuonsNum==0 && selectedIDIsoElectronsNum==1)
    {
      // fill here for events that enter in the single muon control sample from di lep failing: POINT2
      // passing: point 4
    }
    // single isotrack control sample correction due to di lep contribution
    if(IsolatedTracksNum==1)
    {
      // fill here for events that enter in the single muon control sample from di lep failing: POINT3
      // passing: point 4
    }
    // for efficiency for di leptonic decays check if non are isolated
    if((selectedIDIsoMuonsNum+selectedIDIsoElectronsNum)==0)
    {
      // failing: point 4
    }
  }
  if(GenMuNum==1 && GenElecNum==0)
  {
    if(selectedIDIsoMuonsNum==1 && selectedIDIsoElectronsNum==0)
    {
     // passing: POINT1
    }
  }
  if(GenMuNum==0 && GenElecNum==1)
  {
    if(selectedIDIsoMuonsNum==0 && selectedIDIsoElectronsNum==1)
    {
      //passing: POINT2
    }
  }
  if((GenMuNum+GenElecNum)==1)
  {
    if( IsolatedTracksNum==1)
    {
     // passing: POINT3
    }
  }
  //
  
  
  return kTRUE;
}
void EffMaker::SlaveTerminate()
{
  // The SlaveTerminate() function is called after all entries or objects
  // have been processed. When running with PROOF SlaveTerminate() is called
  // on each slave server.
  
}
void EffMaker::Terminate()
{
  TFile *outPutFile = new TFile("Efficiencies.root","RECREATE"); 
  outPutFile->cd();
  outPutFile->mkdir("Efficiencies");
  TDirectory *dEfficiencies = (TDirectory*)outPutFile->Get("Efficiencies");
  dEfficiencies->cd();
  gStyle->SetPaintTextFormat("5.2f");
  gStyle->SetStatW(0.1);
  gStyle->SetStatH(0.1);
  gStyle->SetStatY(202);
  gStyle->SetTitleYOffset(1.3);
  
  // MuMTWMHTNJetFail->Delete("all");
  // compute and save efficiencies
  // purity
  //muon
  //1D
  MuPurityBTag_ = ratioCalculator(MuPurityBTag_,MuPurityBTagFail_);   
  MuPurityBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu purity; B_{Tags}");
  MuPurityBTag_->SetMarkerSize(2.0);
  MuPurityBTag_->UseCurrentStyle();
  MuPurityBTag_->Write();
  SaveEfficiency(MuPurityBTag_);
  
  MuPurityNJets_ = ratioCalculator(MuPurityNJets_,MuPurityNJetsFail_);   
  MuPurityNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu purity; N_{Jets}");
  MuPurityNJets_->SetMarkerSize(2.0);
  MuPurityNJets_->UseCurrentStyle();
  MuPurityNJets_->Write();
  SaveEfficiency(MuPurityNJets_);
  
  MuPurityHT_ = ratioCalculator(MuPurityHT_,MuPurityHTFail_);   
  MuPurityHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu purity; H_{T} [GeV]");
  MuPurityHT_->SetMarkerSize(2.0);
  MuPurityHT_->UseCurrentStyle();
  MuPurityHT_->Write();
  SaveEfficiency(MuPurityHT_);
  
  MuPurityMHT_ = ratioCalculator(MuPurityMHT_,MuPurityMHTFail_);   
  MuPurityMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu purity; #slash{H}_{T} [GeV]");
  MuPurityMHT_->SetMarkerSize(2.0);
  MuPurityMHT_->UseCurrentStyle();
  MuPurityMHT_->Write();
  SaveEfficiency(MuPurityMHT_);
  //2D
  MuonPurityMHTNJet = ratioCalculator(MuonPurityMHTNJet,MuonPurityMHTNJetFail);   
  MuonPurityMHTNJet->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu purity; #slash{H}_{T} [GeV]; N_{Jets}");
  MuonPurityMHTNJet->SetMarkerSize(2.0);
  MuonPurityMHTNJet->UseCurrentStyle();
  MuonPurityMHTNJet->Write();
  SaveEfficiency(MuonPurityMHTNJet);
  
  //elec
  //1D
  ElecPurityBTag_ = ratioCalculator(ElecPurityBTag_,ElecPurityBTagFail_);   
  ElecPurityBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e purity; B_{Tags}");
  ElecPurityBTag_->SetMarkerSize(2.0);
  ElecPurityBTag_->UseCurrentStyle();
  ElecPurityBTag_->Write();
  SaveEfficiency(ElecPurityBTag_);
  
  ElecPurityNJets_ = ratioCalculator(ElecPurityNJets_,ElecPurityNJetsFail_);   
  ElecPurityNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e purity; N_{Jets}");
  ElecPurityNJets_->SetMarkerSize(2.0);
  ElecPurityNJets_->UseCurrentStyle();
  ElecPurityNJets_->Write();
  SaveEfficiency(ElecPurityNJets_);
  
  ElecPurityHT_ = ratioCalculator(ElecPurityHT_,ElecPurityHTFail_);   
  ElecPurityHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e purity; H_{T} [GeV]");
  ElecPurityHT_->SetMarkerSize(2.0);
  ElecPurityHT_->UseCurrentStyle();
  ElecPurityHT_->Write();
  SaveEfficiency(ElecPurityHT_);
  
  ElecPurityMHT_ = ratioCalculator(ElecPurityMHT_,ElecPurityMHTFail_);   
  ElecPurityMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e purity; #slash{H}_{T} [GeV]");
  ElecPurityMHT_->SetMarkerSize(2.0);
  ElecPurityMHT_->UseCurrentStyle();
  ElecPurityMHT_->Write();
  SaveEfficiency(ElecPurityMHT_);
  //2D
  ElecPurityMHTNJet = ratioCalculator(ElecPurityMHTNJet,ElecPurityMHTNJetFail);   
  ElecPurityMHTNJet->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e purity; #slash{H}_{T} [GeV]; N_{Jets}");
  ElecPurityMHTNJet->SetMarkerSize(2.0);
  ElecPurityMHTNJet->UseCurrentStyle();
  ElecPurityMHTNJet->Write();
  SaveEfficiency(ElecPurityMHTNJet);
  
  
  
  
  
  // acc
  //muon
  //1D
  MuAccBTag_ = ratioCalculator(MuAccBTag_,MuAccBTagFail_);   
  MuAccBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu acc; B_{Tags}");
  MuAccBTag_->SetMarkerSize(2.0);
  MuAccBTag_->UseCurrentStyle();
  MuAccBTag_->Write();
  SaveEfficiency(MuAccBTag_);
  
  MuAccNJets_ = ratioCalculator(MuAccNJets_,MuAccNJetsFail_);   
  MuAccNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu acc; N_{Jets}");
  MuAccNJets_->SetMarkerSize(2.0);
  MuAccNJets_->UseCurrentStyle();
  MuAccNJets_->Write();
  SaveEfficiency(MuAccNJets_);
  
  MuAccHT_ = ratioCalculator(MuAccHT_,MuAccHTFail_);   
  MuAccHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu acc; H_{T} [GeV]");
  MuAccHT_->SetMarkerSize(2.0);
  MuAccHT_->UseCurrentStyle();
  MuAccHT_->Write();
  SaveEfficiency(MuAccHT_);
  
  MuAccMHT_ = ratioCalculator(MuAccMHT_,MuAccMHTFail_);   
  MuAccMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu acc; #slash{H}_{T} [GeV]");
  MuAccMHT_->SetMarkerSize(2.0);
  MuAccMHT_->UseCurrentStyle();
  MuAccMHT_->Write();
  SaveEfficiency(MuAccMHT_);
  
  //elec
  //1D
  ElecAccBTag_ = ratioCalculator(ElecAccBTag_,ElecAccBTagFail_);   
  ElecAccBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e acc; B_{Tags}");
  ElecAccBTag_->SetMarkerSize(2.0);
  ElecAccBTag_->UseCurrentStyle();
  ElecAccBTag_->Write();
  SaveEfficiency(ElecAccBTag_);
  
  ElecAccNJets_ = ratioCalculator(ElecAccNJets_,ElecAccNJetsFail_);   
  ElecAccNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e acc; N_{Jets}");
  ElecAccNJets_->SetMarkerSize(2.0);
  ElecAccNJets_->UseCurrentStyle();
  ElecAccNJets_->Write();
  SaveEfficiency(ElecAccNJets_);
  
  ElecAccHT_ = ratioCalculator(ElecAccHT_,ElecAccHTFail_);   
  ElecAccHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e acc; H_{T} [GeV]");
  ElecAccHT_->SetMarkerSize(2.0);
  ElecAccHT_->UseCurrentStyle();
  ElecAccHT_->Write();
  SaveEfficiency(ElecAccHT_);
  
  ElecAccMHT_ = ratioCalculator(ElecAccMHT_,ElecAccMHTFail_);   
  ElecAccMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e acc; #slash{H}_{T} [GeV]");
  ElecAccMHT_->SetMarkerSize(2.0);
  ElecAccMHT_->UseCurrentStyle();
  ElecAccMHT_->Write();
  SaveEfficiency(ElecAccMHT_);
  
  
  
  // reco
  //muon
  //1D
  MuRecoBTag_ = ratioCalculator(MuRecoBTag_,MuRecoBTagFail_);   
  MuRecoBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu reco; B_{Tags}");
  MuRecoBTag_->SetMarkerSize(2.0);
  MuRecoBTag_->UseCurrentStyle();
  MuRecoBTag_->Write();
  SaveEfficiency(MuRecoBTag_);
  
  MuRecoNJets_ = ratioCalculator(MuRecoNJets_,MuRecoNJetsFail_);   
  MuRecoNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu reco; N_{Jets}");
  MuRecoNJets_->SetMarkerSize(2.0);
  MuRecoNJets_->UseCurrentStyle();
  MuRecoNJets_->Write();
  SaveEfficiency(MuRecoNJets_);
  
  MuRecoHT_ = ratioCalculator(MuRecoHT_,MuRecoHTFail_);   
  MuRecoHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu reco; H_{T} [GeV]");
  MuRecoHT_->SetMarkerSize(2.0);
  MuRecoHT_->UseCurrentStyle();
  MuRecoHT_->Write();
  SaveEfficiency(MuRecoHT_);
  
  MuRecoMHT_ = ratioCalculator(MuRecoMHT_,MuRecoMHTFail_);   
  MuRecoMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu reco; #slash{H}_{T} [GeV]");
  MuRecoMHT_->SetMarkerSize(2.0);
  MuRecoMHT_->UseCurrentStyle();
  MuRecoMHT_->Write();
  SaveEfficiency(MuRecoMHT_);
  
  //elec
  //1D
  ElecRecoBTag_ = ratioCalculator(ElecRecoBTag_,ElecRecoBTagFail_);   
  ElecRecoBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e reco; B_{Tags}");
  ElecRecoBTag_->SetMarkerSize(2.0);
  ElecRecoBTag_->UseCurrentStyle();
  ElecRecoBTag_->Write();
  SaveEfficiency(ElecRecoBTag_);
  
  ElecRecoNJets_ = ratioCalculator(ElecRecoNJets_,ElecRecoNJetsFail_);   
  ElecRecoNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e reco; N_{Jets}");
  ElecRecoNJets_->SetMarkerSize(2.0);
  ElecRecoNJets_->UseCurrentStyle();
  ElecRecoNJets_->Write();
  SaveEfficiency(ElecRecoNJets_);
  
  ElecRecoHT_ = ratioCalculator(ElecRecoHT_,ElecRecoHTFail_);   
  ElecRecoHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e reco; H_{T} [GeV]");
  ElecRecoHT_->SetMarkerSize(2.0);
  ElecRecoHT_->UseCurrentStyle();
  ElecRecoHT_->Write();
  SaveEfficiency(ElecRecoHT_);
  
  ElecRecoMHT_ = ratioCalculator(ElecRecoMHT_,ElecRecoMHTFail_);   
  ElecRecoMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e reco; #slash{H}_{T} [GeV]");
  ElecRecoMHT_->SetMarkerSize(2.0);
  ElecRecoMHT_->UseCurrentStyle();
  ElecRecoMHT_->Write();
  SaveEfficiency(ElecRecoMHT_);
  
  
  
  // iso
  //muon
  //1D
  MuIsoBTag_ = ratioCalculator(MuIsoBTag_,MuIsoBTagFail_);   
  MuIsoBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu iso; B_{Tags}");
  MuIsoBTag_->SetMarkerSize(2.0);
  MuIsoBTag_->UseCurrentStyle();
  MuIsoBTag_->Write();
  SaveEfficiency(MuIsoBTag_);
  
  MuIsoNJets_ = ratioCalculator(MuIsoNJets_,MuIsoNJetsFail_);   
  MuIsoNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu iso; N_{Jets}");
  MuIsoNJets_->SetMarkerSize(2.0);
  MuIsoNJets_->UseCurrentStyle();
  MuIsoNJets_->Write();
  SaveEfficiency(MuIsoNJets_);
  
  MuIsoHT_ = ratioCalculator(MuIsoHT_,MuIsoHTFail_);   
  MuIsoHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu iso; H_{T} [GeV]");
  MuIsoHT_->SetMarkerSize(2.0);
  MuIsoHT_->UseCurrentStyle();
  MuIsoHT_->Write();
  SaveEfficiency(MuIsoHT_);
  
  MuIsoMHT_ = ratioCalculator(MuIsoMHT_,MuIsoMHTFail_);   
  MuIsoMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu iso; #slash{H}_{T} [GeV]");
  MuIsoMHT_->SetMarkerSize(2.0);
  MuIsoMHT_->UseCurrentStyle();
  MuIsoMHT_->Write();
  SaveEfficiency(MuIsoMHT_);
  
  //elec
  //1D
  ElecIsoBTag_ = ratioCalculator(ElecIsoBTag_,ElecIsoBTagFail_);   
  ElecIsoBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e iso; B_{Tags}");
  ElecIsoBTag_->SetMarkerSize(2.0);
  ElecIsoBTag_->UseCurrentStyle();
  ElecIsoBTag_->Write();
  SaveEfficiency(ElecIsoBTag_);
  
  ElecIsoNJets_ = ratioCalculator(ElecIsoNJets_,ElecIsoNJetsFail_);   
  ElecIsoNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e iso; N_{Jets}");
  ElecIsoNJets_->SetMarkerSize(2.0);
  ElecIsoNJets_->UseCurrentStyle();
  ElecIsoNJets_->Write();
  SaveEfficiency(ElecIsoNJets_);
  
  ElecIsoHT_ = ratioCalculator(ElecIsoHT_,ElecIsoHTFail_);   
  ElecIsoHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e iso; H_{T} [GeV]");
  ElecIsoHT_->SetMarkerSize(2.0);
  ElecIsoHT_->UseCurrentStyle();
  ElecIsoHT_->Write();
  SaveEfficiency(ElecIsoHT_);
  
  ElecIsoMHT_ = ratioCalculator(ElecIsoMHT_,ElecIsoMHTFail_);   
  ElecIsoMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e iso; #slash{H}_{T} [GeV]");
  ElecIsoMHT_->SetMarkerSize(2.0);
  ElecIsoMHT_->UseCurrentStyle();
  ElecIsoMHT_->Write();
  SaveEfficiency(ElecIsoMHT_);
  
  
  // m_{T}(w)
  //muon
  //1D
  MuMTWBTag_ = ratioCalculator(MuMTWBTag_,MuMTWBTagFail_);   
  MuMTWBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu m_{T}(w); B_{Tags}");
  MuMTWBTag_->SetMarkerSize(2.0);
  MuMTWBTag_->UseCurrentStyle();
  MuMTWBTag_->Write();
  SaveEfficiency(MuMTWBTag_);
  
  MuMTWNJets_ = ratioCalculator(MuMTWNJets_,MuMTWNJetsFail_);   
  MuMTWNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu m_{T}(w); N_{Jets}");
  MuMTWNJets_->SetMarkerSize(2.0);
  MuMTWNJets_->UseCurrentStyle();
  MuMTWNJets_->Write();
  SaveEfficiency(MuMTWNJets_);
  
  MuMTWHT_ = ratioCalculator(MuMTWHT_,MuMTWHTFail_);   
  MuMTWHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu m_{T}(w); H_{T} [GeV]");
  MuMTWHT_->SetMarkerSize(2.0);
  MuMTWHT_->UseCurrentStyle();
  MuMTWHT_->Write();
  SaveEfficiency(MuMTWHT_);
  
  MuMTWMHT_ = ratioCalculator(MuMTWMHT_,MuMTWMHTFail_);   
  MuMTWMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV #mu m_{T}(w); #slash{H}_{T} [GeV]");
  MuMTWMHT_->SetMarkerSize(2.0);
  MuMTWMHT_->UseCurrentStyle();
  MuMTWMHT_->Write();
  SaveEfficiency(MuMTWMHT_);
  
  //elec
  //1D
  ElecMTWBTag_ = ratioCalculator(ElecMTWBTag_,ElecMTWBTagFail_);   
  ElecMTWBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e m_{T}(w); B_{Tags}");
  ElecMTWBTag_->SetMarkerSize(2.0);
  ElecMTWBTag_->UseCurrentStyle();
  ElecMTWBTag_->Write();
  SaveEfficiency(ElecMTWBTag_);
  
  ElecMTWNJets_ = ratioCalculator(ElecMTWNJets_,ElecMTWNJetsFail_);   
  ElecMTWNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e m_{T}(w); N_{Jets}");
  ElecMTWNJets_->SetMarkerSize(2.0);
  ElecMTWNJets_->UseCurrentStyle();
  ElecMTWNJets_->Write();
  SaveEfficiency(ElecMTWNJets_);
  
  ElecMTWHT_ = ratioCalculator(ElecMTWHT_,ElecMTWHTFail_);   
  ElecMTWHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e m_{T}(w); H_{T} [GeV]");
  ElecMTWHT_->SetMarkerSize(2.0);
  ElecMTWHT_->UseCurrentStyle();
  ElecMTWHT_->Write();
  SaveEfficiency(ElecMTWHT_);
  
  ElecMTWMHT_ = ratioCalculator(ElecMTWMHT_,ElecMTWMHTFail_);   
  ElecMTWMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV e m_{T}(w); #slash{H}_{T} [GeV]");
  ElecMTWMHT_->SetMarkerSize(2.0);
  ElecMTWMHT_->UseCurrentStyle();
  ElecMTWMHT_->Write();
  SaveEfficiency(ElecMTWMHT_);
  
  
  
  // isoalted track
  //muon
  //1D
  IsoTrackMuBTag_ = ratioCalculator(IsoTrackMuBTag_,IsoTrackMuBTagFail_);   
  IsoTrackMuBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; B_{Tags}");
  IsoTrackMuBTag_->SetMarkerSize(2.0);
  IsoTrackMuBTag_->UseCurrentStyle();
  IsoTrackMuBTag_->Write();
  SaveEfficiency(IsoTrackMuBTag_);
  
  IsoTrackMuNJets_ = ratioCalculator(IsoTrackMuNJets_,IsoTrackMuNJetsFail_);   
  IsoTrackMuNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; N_{Jets}");
  IsoTrackMuNJets_->SetMarkerSize(2.0);
  IsoTrackMuNJets_->UseCurrentStyle();
  IsoTrackMuNJets_->Write();
  SaveEfficiency(IsoTrackMuNJets_);
  
  IsoTrackMuHT_ = ratioCalculator(IsoTrackMuHT_,IsoTrackMuHTFail_);   
  IsoTrackMuHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; H_{T} [GeV]");
  IsoTrackMuHT_->SetMarkerSize(2.0);
  IsoTrackMuHT_->UseCurrentStyle();
  IsoTrackMuHT_->Write();
  SaveEfficiency(IsoTrackMuHT_);
  
  IsoTrackMuMHT_ = ratioCalculator(IsoTrackMuMHT_,IsoTrackMuMHTFail_);   
  IsoTrackMuMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; #slash{H}_{T} [GeV]");
  IsoTrackMuMHT_->SetMarkerSize(2.0);
  IsoTrackMuMHT_->UseCurrentStyle();
  IsoTrackMuMHT_->Write();
  SaveEfficiency(IsoTrackMuMHT_);
  
  
  IsoTrackMuMatchedToIsoMuBTag_ = ratioCalculator(IsoTrackMuMatchedToIsoMuBTag_,IsoTrackMuMatchedToIsoMuBTagFail_);   
  IsoTrackMuMatchedToIsoMuBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMuMatchedToIsoMu; B_{Tags}");
  IsoTrackMuMatchedToIsoMuBTag_->SetMarkerSize(2.0);
  IsoTrackMuMatchedToIsoMuBTag_->UseCurrentStyle();
  IsoTrackMuMatchedToIsoMuBTag_->Write();
  SaveEfficiency(IsoTrackMuMatchedToIsoMuBTag_);
  
  IsoTrackMuMatchedToIsoMuNJets_ = ratioCalculator(IsoTrackMuMatchedToIsoMuNJets_,IsoTrackMuMatchedToIsoMuNJetsFail_);   
  IsoTrackMuMatchedToIsoMuNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMuMatchedToIsoMu; N_{Jets}");
  IsoTrackMuMatchedToIsoMuNJets_->SetMarkerSize(2.0);
  IsoTrackMuMatchedToIsoMuNJets_->UseCurrentStyle();
  IsoTrackMuMatchedToIsoMuNJets_->Write();
  SaveEfficiency(IsoTrackMuMatchedToIsoMuNJets_);
  
  IsoTrackMuMatchedToIsoMuHT_ = ratioCalculator(IsoTrackMuMatchedToIsoMuHT_,IsoTrackMuMatchedToIsoMuHTFail_);   
  IsoTrackMuMatchedToIsoMuHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMuMatchedToIsoMu; H_{T} [GeV]");
  IsoTrackMuMatchedToIsoMuHT_->SetMarkerSize(2.0);
  IsoTrackMuMatchedToIsoMuHT_->UseCurrentStyle();
  IsoTrackMuMatchedToIsoMuHT_->Write();
  SaveEfficiency(IsoTrackMuMatchedToIsoMuHT_);
  
  IsoTrackMuMatchedToIsoMuMHT_ = ratioCalculator(IsoTrackMuMatchedToIsoMuMHT_,IsoTrackMuMatchedToIsoMuMHTFail_);   
  IsoTrackMuMatchedToIsoMuMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMuMatchedToIsoMu; #slash{H}_{T} [GeV]");
  IsoTrackMuMatchedToIsoMuMHT_->SetMarkerSize(2.0);
  IsoTrackMuMatchedToIsoMuMHT_->UseCurrentStyle();
  IsoTrackMuMatchedToIsoMuMHT_->Write();
  SaveEfficiency(IsoTrackMuMatchedToIsoMuMHT_);
  
  //elec
  //1D
  IsoTrackElecBTag_ = ratioCalculator(IsoTrackElecBTag_,IsoTrackElecBTagFail_);   
  IsoTrackElecBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; B_{Tags}");
  IsoTrackElecBTag_->SetMarkerSize(2.0);
  IsoTrackElecBTag_->UseCurrentStyle();
  IsoTrackElecBTag_->Write();
  SaveEfficiency(IsoTrackElecBTag_);
  
  IsoTrackElecNJets_ = ratioCalculator(IsoTrackElecNJets_,IsoTrackElecNJetsFail_);   
  IsoTrackElecNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; N_{Jets}");
  IsoTrackElecNJets_->SetMarkerSize(2.0);
  IsoTrackElecNJets_->UseCurrentStyle();
  IsoTrackElecNJets_->Write();
  SaveEfficiency(IsoTrackElecNJets_);
  
  IsoTrackElecHT_ = ratioCalculator(IsoTrackElecHT_,IsoTrackElecHTFail_);   
  IsoTrackElecHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; H_{T} [GeV]");
  IsoTrackElecHT_->SetMarkerSize(2.0);
  IsoTrackElecHT_->UseCurrentStyle();
  IsoTrackElecHT_->Write();
  SaveEfficiency(IsoTrackElecHT_);
  
  IsoTrackElecMHT_ = ratioCalculator(IsoTrackElecMHT_,IsoTrackElecMHTFail_);   
  IsoTrackElecMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; #slash{H}_{T} [GeV]");
  IsoTrackElecMHT_->SetMarkerSize(2.0);
  IsoTrackElecMHT_->UseCurrentStyle();
  IsoTrackElecMHT_->Write();
  SaveEfficiency(IsoTrackElecMHT_);
  
  IsoTrackElecMatchedToIsoElecBTag_ = ratioCalculator(IsoTrackElecMatchedToIsoElecBTag_,IsoTrackElecMatchedToIsoElecBTagFail_);   
  IsoTrackElecMatchedToIsoElecBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElecMatchedToIsoElec; B_{Tags}");
  IsoTrackElecMatchedToIsoElecBTag_->SetMarkerSize(2.0);
  IsoTrackElecMatchedToIsoElecBTag_->UseCurrentStyle();
  IsoTrackElecMatchedToIsoElecBTag_->Write();
  SaveEfficiency(IsoTrackElecMatchedToIsoElecBTag_);
  
  IsoTrackElecMatchedToIsoElecNJets_ = ratioCalculator(IsoTrackElecMatchedToIsoElecNJets_,IsoTrackElecMatchedToIsoElecNJetsFail_);   
  IsoTrackElecMatchedToIsoElecNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElecMatchedToIsoElec; N_{Jets}");
  IsoTrackElecMatchedToIsoElecNJets_->SetMarkerSize(2.0);
  IsoTrackElecMatchedToIsoElecNJets_->UseCurrentStyle();
  IsoTrackElecMatchedToIsoElecNJets_->Write();
  SaveEfficiency(IsoTrackElecMatchedToIsoElecNJets_);
  
  IsoTrackElecMatchedToIsoElecHT_ = ratioCalculator(IsoTrackElecMatchedToIsoElecHT_,IsoTrackElecMatchedToIsoElecHTFail_);   
  IsoTrackElecMatchedToIsoElecHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElecMatchedToIsoElec; H_{T} [GeV]");
  IsoTrackElecMatchedToIsoElecHT_->SetMarkerSize(2.0);
  IsoTrackElecMatchedToIsoElecHT_->UseCurrentStyle();
  IsoTrackElecMatchedToIsoElecHT_->Write();
  SaveEfficiency(IsoTrackElecMatchedToIsoElecHT_);
  
  IsoTrackElecMatchedToIsoElecMHT_ = ratioCalculator(IsoTrackElecMatchedToIsoElecMHT_,IsoTrackElecMatchedToIsoElecMHTFail_);   
  IsoTrackElecMatchedToIsoElecMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElecMatchedToIsoElec; #slash{H}_{T} [GeV]");
  IsoTrackElecMatchedToIsoElecMHT_->SetMarkerSize(2.0);
  IsoTrackElecMatchedToIsoElecMHT_->UseCurrentStyle();
  IsoTrackElecMatchedToIsoElecMHT_->Write();
  SaveEfficiency(IsoTrackElecMatchedToIsoElecMHT_);
  
  //muon
  //1D
  IsoTrackMuMTWBTag_ = ratioCalculator(IsoTrackMuMTWBTag_,IsoTrackMuMTWBTagFail_);   
  IsoTrackMuMTWBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; B_{Tags}");
  IsoTrackMuMTWBTag_->SetMarkerSize(2.0);
  IsoTrackMuMTWBTag_->UseCurrentStyle();
  IsoTrackMuMTWBTag_->Write();
  SaveEfficiency(IsoTrackMuMTWBTag_);
  
  IsoTrackMuMTWNJets_ = ratioCalculator(IsoTrackMuMTWNJets_,IsoTrackMuMTWNJetsFail_);   
  IsoTrackMuMTWNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; N_{Jets}");
  IsoTrackMuMTWNJets_->SetMarkerSize(2.0);
  IsoTrackMuMTWNJets_->UseCurrentStyle();
  IsoTrackMuMTWNJets_->Write();
  SaveEfficiency(IsoTrackMuMTWNJets_);
  
  IsoTrackMuMTWHT_ = ratioCalculator(IsoTrackMuMTWHT_,IsoTrackMuMTWHTFail_);   
  IsoTrackMuMTWHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; H_{T} [GeV]");
  IsoTrackMuMTWHT_->SetMarkerSize(2.0);
  IsoTrackMuMTWHT_->UseCurrentStyle();
  IsoTrackMuMTWHT_->Write();
  SaveEfficiency(IsoTrackMuMTWHT_);
  
  IsoTrackMuMTWMHT_ = ratioCalculator(IsoTrackMuMTWMHT_,IsoTrackMuMTWMHTFail_);   
  IsoTrackMuMTWMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenMu; #slash{H}_{T} [GeV]");
  IsoTrackMuMTWMHT_->SetMarkerSize(2.0);
  IsoTrackMuMTWMHT_->UseCurrentStyle();
  IsoTrackMuMTWMHT_->Write();
  SaveEfficiency(IsoTrackMuMTWMHT_);
  
  //elec
  //1D
  IsoTrackElecMTWBTag_ = ratioCalculator(IsoTrackElecMTWBTag_,IsoTrackElecMTWBTagFail_);   
  IsoTrackElecMTWBTag_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; B_{Tags}");
  IsoTrackElecMTWBTag_->SetMarkerSize(2.0);
  IsoTrackElecMTWBTag_->UseCurrentStyle();
  IsoTrackElecMTWBTag_->Write();
  SaveEfficiency(IsoTrackElecMTWBTag_);
  
  IsoTrackElecMTWNJets_ = ratioCalculator(IsoTrackElecMTWNJets_,IsoTrackElecMTWNJetsFail_);   
  IsoTrackElecMTWNJets_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; N_{Jets}");
  IsoTrackElecMTWNJets_->SetMarkerSize(2.0);
  IsoTrackElecMTWNJets_->UseCurrentStyle();
  IsoTrackElecMTWNJets_->Write();
  SaveEfficiency(IsoTrackElecMTWNJets_);
  
  IsoTrackElecMTWHT_ = ratioCalculator(IsoTrackElecMTWHT_,IsoTrackElecMTWHTFail_);   
  IsoTrackElecMTWHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; H_{T} [GeV]");
  IsoTrackElecMTWHT_->SetMarkerSize(2.0);
  IsoTrackElecMTWHT_->UseCurrentStyle();
  IsoTrackElecMTWHT_->Write();
  SaveEfficiency(IsoTrackElecMTWHT_);
  
  IsoTrackElecMTWMHT_ = ratioCalculator(IsoTrackElecMTWMHT_,IsoTrackElecMTWMHTFail_);   
  IsoTrackElecMTWMHT_->SetTitle("CMS Simulation, L=5 fb-1, #sqrt(s)=13 TeV isotrack GenElec; #slash{H}_{T} [GeV]");
  IsoTrackElecMTWMHT_->SetMarkerSize(2.0);
  IsoTrackElecMTWMHT_->UseCurrentStyle();
  IsoTrackElecMTWMHT_->Write();
  SaveEfficiency(IsoTrackElecMTWMHT_);
  
}
TH2F* EffMaker::ratioCalculator(TH2F* passTH2, TH2F* failTH2)
{
  passTH2->Sumw2();
  TH2F *sum = (TH2F*)passTH2->Clone();
  failTH2->Sumw2();
  
  sum->Add(failTH2);
  passTH2->Divide(passTH2,sum,1,1,"B");
  return passTH2;
}
TH1F* EffMaker::ratioCalculator(TH1F* passTH1, TH1F* failTH1)
{
  passTH1->Sumw2();
  TH1F *sum = (TH1F*)passTH1->Clone();
  failTH1->Sumw2();
  
  sum->Add(failTH1);
  passTH1->Divide(passTH1,sum,1,1,"B");
  return passTH1;
}
void EffMaker::SaveEfficiency(TH2F *input)
{
  gROOT->SetBatch(true);
  const TString th2Name = input->GetName();
  const TString th2Title = input->GetTitle();
  TCanvas *c1 = new TCanvas(th2Name,th2Title,1);
  c1->cd();
  c1->SetLogx();
  c1->SetLogy();
  input->SetMarkerSize(2.0);
  input->UseCurrentStyle();
  input->Draw("ColZ,Text,E");
  // c1->SaveAs(s+"MuonAccEff3"+".png");
  if(saveEffToPDF_) c1->SaveAs(th2Name+".pdf");
  if(saveEffToPNG_) c1->SaveAs(th2Name+".png");
  delete c1;
  gROOT->SetBatch(false);
  
}

void EffMaker::SaveEfficiency(TH1F *input)
{
  gROOT->SetBatch(true);
  const TString th2Name = input->GetName();
  const TString th2Title = (TString)input->GetTitle();
  
  TCanvas *c1 = new TCanvas(th2Name,th2Title,1);
  c1->cd();
  //c1->SetLogx();
  //c1->SetLogy();
  input->SetMarkerSize(2.0);
  input->UseCurrentStyle();
  input->Draw("ColZ,Text,E");
  // c1->SaveAs(s+"MuonAccEff3"+".png");
  if(saveEffToPDF_) c1->SaveAs(th2Name+".pdf");
  if(saveEffToPNG_) c1->SaveAs(th2Name+".png");
  delete c1;
  gROOT->SetBatch(false);
  
}
