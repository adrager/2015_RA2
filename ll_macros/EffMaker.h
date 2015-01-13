#ifndef EffMaker_h
#define EffMaker_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TH2F.h>
#include <TH1F.h>
#include "TVector2.h"
#include <cmath>
#include "TCanvas.h"
// output control
const bool saveEffToPDF_=true;
const bool saveEffToPNG_=true;
// cuts

const double mtwCut_ = 100;
// binning of efficiencies
// gloabel 1D binning

const int oneDHT_=14;
double OneDHT_[oneDHT_] = {350,500,550,600,650,700,750,800,900,1000,1200,1500,2000,8000};
const int oneDMHT_=16;
double OneDMHT_[oneDMHT_] = {0,50,100,150,200,250,300,350,450,500,600,700,900,1200,1700,8000};
const int oneDNJets_=8;
double OneDNJets_[oneDNJets_] = {2,3,4,5,6,8,11,20};
const int oneDBJets_=6;
double OneDBJets_[oneDBJets_] = {0,1,2,3,5,10};
const int oneDDeltaR_=17;
double OneDDeltaR_[oneDDeltaR_]={0 ,0.1 ,0.2 ,0.3 ,0.4 ,0.5 ,0.6 ,0.7 ,0.8 ,0.9 ,1.0 ,1.1 ,1.3 ,1.5 ,1.8 ,2.0 , 5.0 };
const int oneDPT_=12;
double OneDPT_[oneDPT_]={10,15,20,25,30,40,50,60,70,90,110,1900};
const int oneDPTRel_=17;
double OneDPTRel_[oneDPTRel_]={0 ,0.1 ,0.2 ,0.3 ,0.4 ,0.5 ,0.6 ,0.7 ,0.8 ,0.9 ,1.0 ,1.1 ,1.3 ,1.5 ,1.8 ,2.0 , 5.0 };
  
const int oneDActivity_=9;
double OneDActivity_[oneDActivity_]={0,5,10,20,40,60,80,100,1600};


// purity
//mu
//1D

//2D
const int mupurityMHT_ = 7;
double muPurityMHT_[mupurityMHT_] ={0,100,200,800,900,1200,9600};
const int mupurityNJet_ = 5;
double muPurityNJet_[mupurityNJet_] ={2,3,4,5,22};

// elec

//1D


const int elecpurityMHT_ = 7;
double elecPurityMHT_[elecpurityMHT_] ={0,100,200,800,900,1200,9600};
const int elecpurityNJet_ = 5;
double elecPurityNJet_[elecpurityNJet_] ={2,3,4,5,22};
// mu acceptance
// 2D
const int muaccHT_ = 5;
double muAccHT_ [muaccHT_] = {500,600,800,1000,2500};
const int muaccNJets_ = 5;
double muAccNJets_ [muaccNJets_] = {2,3,4,7,20};

// elec acceptance
// 2D
const int elecaccHT_ = 5;
double elecAccHT_ [elecaccHT_] = {500,600,800,1000,2500};
const int elecaccNJets_ = 5;
double elecAccNJets_ [elecaccNJets_] = {2,3,4,7,20};
class EffMaker : public TSelector {
public :	
	TH2F* ratioCalculator(TH2F* passTH2, TH2F* failTH2);
	TH1F* ratioCalculator(TH1F* passTH1, TH1F* failTH1);
	double MTWCalculator(double metPt,double  metPhi,double  lepPt,double  lepPhi);
	void SaveEfficiency(TH2F *input);
	void SaveEfficiency(TH1F *input);
	TTree          *fChain;   //!pointer to the analyzed TTree or TChain
	
	// TH efficiencies
	//purity
	//mu
	//1D
	TH1F *MuPurityBTag_, *MuPurityBTagFail_;
	TH1F *MuPurityNJets_, *MuPurityNJetsFail_;
	TH1F *MuPurityHT_, *MuPurityHTFail_;
	TH1F *MuPurityMHT_, *MuPurityMHTFail_;
	TH1F *MuPurityPT_, *MuPurityPTFail_;
	TH1F *MuPurityActivity_, *MuPurityActivityFail_;
	//2D
	TH2F *MuonPurityMHTNJet, *MuonPurityMHTNJetFail;
	
	//elec
	//1D
	TH1F *ElecPurityBTag_, *ElecPurityBTagFail_;
	TH1F *ElecPurityNJets_, *ElecPurityNJetsFail_;
	TH1F *ElecPurityHT_, *ElecPurityHTFail_;
	TH1F *ElecPurityMHT_, *ElecPurityMHTFail_;
	TH1F *ElecPurityPT_, *ElecPurityPTFail_;
	TH1F *ElecPurityActivity_, *ElecPurityActivityFail_;
	//2D
	TH2F *ElecPurityMHTNJet, *ElecPurityMHTNJetFail;
	
	// Acceptance
	// mu 
	//1D
	TH1F *MuAccBTag_, *MuAccBTagFail_;
	TH1F *MuAccNJets_, *MuAccNJetsFail_;
	TH1F *MuAccHT_, *MuAccHTFail_;
	TH1F *MuAccMHT_, *MuAccMHTFail_;
	TH1F *MuAccPT_, *MuAccPTFail_;
	TH1F *MuAccActivity_, *MuAccActivityFail_;
	// 2D
	TH2F *MuAccHTNJets_, *MuAccHTNJetsFail_; 
	
	// elec
	//1D
	TH1F *ElecAccBTag_, *ElecAccBTagFail_;
	TH1F *ElecAccNJets_, *ElecAccNJetsFail_;
	TH1F *ElecAccHT_, *ElecAccHTFail_;
	TH1F *ElecAccMHT_, *ElecAccMHTFail_;
	TH1F *ElecAccPT_, *ElecAccPTFail_;
	TH1F *ElecAccActivity_, *ElecAccActivityFail_;
	
	// 2D
	TH2F *ElecAccHTNJets_, *ElecAccHTNJetsFail_; 
	
	// Recoeptance
	// mu 
	//1D
	TH1F *MuRecoBTag_, *MuRecoBTagFail_;
	TH1F *MuRecoNJets_, *MuRecoNJetsFail_;
	TH1F *MuRecoHT_, *MuRecoHTFail_;
	TH1F *MuRecoMHT_, *MuRecoMHTFail_;
	TH1F *MuRecoPT_, *MuRecoPTFail_;
	TH1F *MuRecoActivity_, *MuRecoActivityFail_;
	
	
	// elec
	//1D
	TH1F *ElecRecoBTag_, *ElecRecoBTagFail_;
	TH1F *ElecRecoNJets_, *ElecRecoNJetsFail_;
	TH1F *ElecRecoHT_, *ElecRecoHTFail_;
	TH1F *ElecRecoMHT_, *ElecRecoMHTFail_;
	TH1F *ElecRecoPT_, *ElecRecoPTFail_;
	TH1F *ElecRecoActivity_, *ElecRecoActivityFail_;
	
	// Isoeptance
	// mu 
	//1D
	TH1F *MuIsoBTag_, *MuIsoBTagFail_;
	TH1F *MuIsoNJets_, *MuIsoNJetsFail_;
	TH1F *MuIsoHT_, *MuIsoHTFail_;
	TH1F *MuIsoMHT_, *MuIsoMHTFail_;
	TH1F *MuIsoPT_, *MuIsoPTFail_;
	TH1F *MuIsoActivity_, *MuIsoActivityFail_;
	
	// elec
	//1D
	TH1F *ElecIsoBTag_, *ElecIsoBTagFail_;
	TH1F *ElecIsoNJets_, *ElecIsoNJetsFail_;
	TH1F *ElecIsoHT_, *ElecIsoHTFail_;
	TH1F *ElecIsoMHT_, *ElecIsoMHTFail_;
	TH1F *ElecIsoPT_, *ElecIsoPTFail_;
	TH1F *ElecIsoActivity_, *ElecIsoActivityFail_;
	
	// MTWeptance
	// mu 
	//1D
	TH1F *MuMTWBTag_, *MuMTWBTagFail_;
	TH1F *MuMTWNJets_, *MuMTWNJetsFail_;
	TH1F *MuMTWHT_, *MuMTWHTFail_;
	TH1F *MuMTWMHT_, *MuMTWMHTFail_;
	TH1F *MuMTWPT_, *MuMTWPTFail_;
	TH1F *MuMTWActivity_, *MuMTWActivityFail_;
	
	// elec
	//1D
	TH1F *ElecMTWBTag_, *ElecMTWBTagFail_;
	TH1F *ElecMTWNJets_, *ElecMTWNJetsFail_;
	TH1F *ElecMTWHT_, *ElecMTWHTFail_;
	TH1F *ElecMTWMHT_, *ElecMTWMHTFail_;
	TH1F *ElecMTWPT_, *ElecMTWPTFail_;
	TH1F *ElecMTWActivity_, *ElecMTWActivityFail_;
	
	
	// Di lep control sample
	// mu 
	//1D
	TH1F *MuDiLepBTag_, *MuDiLepBTagFail_;
	TH1F *MuDiLepNJets_, *MuDiLepNJetsFail_;
	TH1F *MuDiLepHT_, *MuDiLepHTFail_;
	TH1F *MuDiLepMHT_, *MuDiLepMHTFail_;
	TH1F *MuDiLepPT_, *MuDiLepPTFail_;
	TH1F *MuDiLepActivity_, *MuDiLepActivityFail_;
	
	
	// elec
	//1D
	TH1F *ElecDiLepBTag_, *ElecDiLepBTagFail_;
	TH1F *ElecDiLepNJets_, *ElecDiLepNJetsFail_;
	TH1F *ElecDiLepHT_, *ElecDiLepHTFail_;
	TH1F *ElecDiLepMHT_, *ElecDiLepMHTFail_;
	TH1F *ElecDiLepPT_, *ElecDiLepPTFail_;
	TH1F *ElecDiLepActivity_, *ElecDiLepActivityFail_;
	
	// di lep mtw cut applied
	// mu 
	//1D
	TH1F *MuDiLepMTWBTag_, *MuDiLepMTWBTagFail_;
	TH1F *MuDiLepMTWNJets_, *MuDiLepMTWNJetsFail_;
	TH1F *MuDiLepMTWHT_, *MuDiLepMTWHTFail_;
	TH1F *MuDiLepMTWMHT_, *MuDiLepMTWMHTFail_;
	TH1F *MuDiLepMTWPT_, *MuDiLepMTWPTFail_;
	TH1F *MuDiLepMTWActivity_, *MuDiLepMTWActivityFail_;
	
	// elec
	//1D
	TH1F *ElecDiLepMTWBTag_, *ElecDiLepMTWBTagFail_;
	TH1F *ElecDiLepMTWNJets_, *ElecDiLepMTWNJetsFail_;
	TH1F *ElecDiLepMTWHT_, *ElecDiLepMTWHTFail_;
	TH1F *ElecDiLepMTWMHT_, *ElecDiLepMTWMHTFail_;
	TH1F *ElecDiLepMTWPT_, *ElecDiLepMTWPTFail_;
	TH1F *ElecDiLepMTWActivity_, *ElecDiLepMTWActivityFail_;
	
	
	// mu 
	//1D
	TH1F *MuDiLepContributionBTag_, *MuDiLepContributionBTagFail_;
	TH1F *MuDiLepContributionNJets_, *MuDiLepContributionNJetsFail_;
	TH1F *MuDiLepContributionHT_, *MuDiLepContributionHTFail_;
	TH1F *MuDiLepContributionMHT_, *MuDiLepContributionMHTFail_;
	
	// elec
	//1D
	TH1F *ElecDiLepContributionBTag_, *ElecDiLepContributionBTagFail_;
	TH1F *ElecDiLepContributionNJets_, *ElecDiLepContributionNJetsFail_;
	TH1F *ElecDiLepContributionHT_, *ElecDiLepContributionHTFail_;
	TH1F *ElecDiLepContributionMHT_, *ElecDiLepContributionMHTFail_;
	
	// di lep mtw cut applied
	// mu 
	//1D
	TH1F *MuDiLepContributionMTWBTag_, *MuDiLepContributionMTWBTagFail_;
	TH1F *MuDiLepContributionMTWNJets_, *MuDiLepContributionMTWNJetsFail_;
	TH1F *MuDiLepContributionMTWHT_, *MuDiLepContributionMTWHTFail_;
	TH1F *MuDiLepContributionMTWMHT_, *MuDiLepContributionMTWMHTFail_;
	
	// elec
	//1D
	TH1F *ElecDiLepContributionMTWBTag_, *ElecDiLepContributionMTWBTagFail_;
	TH1F *ElecDiLepContributionMTWNJets_, *ElecDiLepContributionMTWNJetsFail_;
	TH1F *ElecDiLepContributionMTWHT_, *ElecDiLepContributionMTWHTFail_;
	TH1F *ElecDiLepContributionMTWMHT_, *ElecDiLepContributionMTWMHTFail_;
	
	// single isolated track from mu or electron
	// muon
	TH1F *IsoTrackMuBTag_, *IsoTrackMuBTagFail_;
	TH1F *IsoTrackMuNJets_, *IsoTrackMuNJetsFail_;
	TH1F *IsoTrackMuHT_, *IsoTrackMuHTFail_;
	TH1F *IsoTrackMuMHT_, *IsoTrackMuMHTFail_;
	
	TH1F *IsoTrackMuMTWBTag_, *IsoTrackMuMTWBTagFail_;
	TH1F *IsoTrackMuMTWNJets_, *IsoTrackMuMTWNJetsFail_;
	TH1F *IsoTrackMuMTWHT_, *IsoTrackMuMTWHTFail_;
	TH1F *IsoTrackMuMTWMHT_, *IsoTrackMuMTWMHTFail_;
	// match to isolated muon
	TH1F *IsoTrackMuMatchedToIsoMuBTag_, *IsoTrackMuMatchedToIsoMuBTagFail_;
	TH1F *IsoTrackMuMatchedToIsoMuNJets_, *IsoTrackMuMatchedToIsoMuNJetsFail_;
	TH1F *IsoTrackMuMatchedToIsoMuHT_, *IsoTrackMuMatchedToIsoMuHTFail_;
	TH1F *IsoTrackMuMatchedToIsoMuMHT_, *IsoTrackMuMatchedToIsoMuMHTFail_;
	
	// elec
	TH1F *IsoTrackElecBTag_, *IsoTrackElecBTagFail_;
	TH1F *IsoTrackElecNJets_, *IsoTrackElecNJetsFail_;
	TH1F *IsoTrackElecHT_, *IsoTrackElecHTFail_;
	TH1F *IsoTrackElecMHT_, *IsoTrackElecMHTFail_;
	
	TH1F *IsoTrackElecMTWBTag_, *IsoTrackElecMTWBTagFail_;
	TH1F *IsoTrackElecMTWNJets_, *IsoTrackElecMTWNJetsFail_;
	TH1F *IsoTrackElecMTWHT_, *IsoTrackElecMTWHTFail_;
	TH1F *IsoTrackElecMTWMHT_, *IsoTrackElecMTWMHTFail_;
	// match to isolated muon
	TH1F *IsoTrackElecMatchedToIsoElecBTag_, *IsoTrackElecMatchedToIsoElecBTagFail_;
	TH1F *IsoTrackElecMatchedToIsoElecNJets_, *IsoTrackElecMatchedToIsoElecNJetsFail_;
	TH1F *IsoTrackElecMatchedToIsoElecHT_, *IsoTrackElecMatchedToIsoElecHTFail_;
	TH1F *IsoTrackElecMatchedToIsoElecMHT_, *IsoTrackElecMatchedToIsoElecMHTFail_;
	
	// isotrack di lep contribution and efficiency
	//mu contribution
	TH1F *IsoTrackMuDiLepContributionBTag_, *IsoTrackMuDiLepContributionBTagFail_;
	TH1F *IsoTrackMuDiLepContributionNJets_, *IsoTrackMuDiLepContributionNJetsFail_;
	TH1F *IsoTrackMuDiLepContributionHT_, *IsoTrackMuDiLepContributionHTFail_;
	TH1F *IsoTrackMuDiLepContributionMHT_, *IsoTrackMuDiLepContributionMHTFail_;
	// efficiency
	TH1F *IsoTrackMuDiLepEffBTag_, *IsoTrackMuDiLepEffBTagFail_;
	TH1F *IsoTrackMuDiLepEffNJets_, *IsoTrackMuDiLepEffNJetsFail_;
	TH1F *IsoTrackMuDiLepEffHT_, *IsoTrackMuDiLepEffHTFail_;
	TH1F *IsoTrackMuDiLepEffMHT_, *IsoTrackMuDiLepEffMHTFail_;
	TH1F *IsoTrackMuDiLepEffPT_, *IsoTrackMuDiLepEffPTFail_;
	TH1F *IsoTrackMuDiLepEffActivity_, *IsoTrackMuDiLepEffActivityFail_;
	
	//elec contribution
	TH1F *IsoTrackElecDiLepContributionBTag_, *IsoTrackElecDiLepContributionBTagFail_;
	TH1F *IsoTrackElecDiLepContributionNJets_, *IsoTrackElecDiLepContributionNJetsFail_;
	TH1F *IsoTrackElecDiLepContributionHT_, *IsoTrackElecDiLepContributionHTFail_;
	TH1F *IsoTrackElecDiLepContributionMHT_, *IsoTrackElecDiLepContributionMHTFail_;
	// efficiency
	TH1F *IsoTrackElecDiLepEffBTag_, *IsoTrackElecDiLepEffBTagFail_;
	TH1F *IsoTrackElecDiLepEffNJets_, *IsoTrackElecDiLepEffNJetsFail_;
	TH1F *IsoTrackElecDiLepEffHT_, *IsoTrackElecDiLepEffHTFail_;
	TH1F *IsoTrackElecDiLepEffMHT_, *IsoTrackElecDiLepEffMHTFail_;
	TH1F *IsoTrackElecDiLepEffPT_, *IsoTrackElecDiLepEffPTFail_;
	TH1F *IsoTrackElecDiLepEffActivity_, *IsoTrackElecDiLepEffActivityFail_;
	
	// 2D efficiencies
	TH2F *MuIsoPTActivity_, *MuIsoPTActivityFail_;
	
	TH2F *ElecIsoPTActivity_, *ElecIsoPTActivityFail_;
	
	// Declaration of leaf types
	Float_t         HT;
	Float_t         MHT;
	UShort_t        NJets;
	UShort_t        BTags;
	UShort_t        Leptons;
	UShort_t        NVtx;
	Float_t         DeltaPhi1;
	Float_t         DeltaPhi2;
	Float_t         DeltaPhi3;
	Float_t         Weight;
	Float_t         MET;
	Float_t         METPhi;
	UShort_t        GenMuNum;
	UShort_t        GenMuFromTau[2];   //[GenMuNum]
	Float_t         GenMuPt[2];   //[GenMuNum]
	Float_t         GenMuEta[2];   //[GenMuNum]
	Float_t         GenMuPhi[2];   //[GenMuNum]
	UShort_t        GenMuonIsoTrackMatched[2];   //[GenMuNum]
	Float_t         GenMuonActivity[2];   //[GenMuNum]
	UShort_t        GenElecNum;
	UShort_t        GenElecFromTau[2];   //[GenElecNum]
	Float_t         GenElecPt[2];   //[GenElecNum]
	Float_t         GenElecEta[2];   //[GenElecNum]
	Float_t         GenElecPhi[2];   //[GenElecNum]
	UShort_t        GenElecIsoTrackMatched[2];   //[GenElecNum]
	Float_t         GenElecActivity[2];   //[GenElecNum]
	UShort_t        GenTauNum;
	Float_t         GenTauPt[2];   //[GenTauNum]
	Float_t         GenTauEta[2];   //[GenTauNum]
	Float_t         GenTauPhi[2];   //[GenTauNum]
	UShort_t        GenTauIsoTrackMatched[2];   //[GenTauNum]
	Float_t         GenTauActivity[2];   //[GenTauNum]
	UShort_t        Expectation;
	UShort_t        muAcc;
	UShort_t        muReco;
	UShort_t        muIso;
	Float_t         mtw;
	Float_t         IsoTrackMTW;
	UShort_t        elecAcc;
	UShort_t        elecReco;
	UShort_t        elecIso;
	UShort_t        muIsoTrack;
	UShort_t        elecIsoTrack;
	UShort_t        FallsVetoLep;
	UShort_t        selectedIDIsoMuonsNum;
	Float_t         selectedIDIsoMuonsPt[3];   //[selectedIDIsoMuonsNum]
	UShort_t        muIsoMatched[3];   //[selectedIDIsoMuonsNum]
	UShort_t        RecoIsoMuonPromtMatched[3];   //[selectedIDIsoMuonsNum]
	Float_t         RecoIsoMuonPromtMatchedDeltaR[3];   //[selectedIDIsoMuonsNum]
	Float_t         RecoIsoMuonPromtMatchedRelPt[3];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsEta[3];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsPhi[3];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsE[3];   //[selectedIDIsoMuonsNum]
	Float_t         RecoIsoMuonActivity[3];   //[selectedIDIsoMuonsNum]
	UShort_t        selectedIDMuonsNum;
	Float_t         selectedIDMuonsPt[5];   //[selectedIDMuonsNum]
	UShort_t        selectedIDMuonsMatched[5];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsEta[5];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsPhi[5];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsE[5];   //[selectedIDMuonsNum]
	Float_t         RecoMuonActivity[5];   //[selectedIDMuonsNum]
	UShort_t        RecoIsoMuonIsoTrackMatched[3];   //[selectedIDIsoMuonsNum]
	UShort_t        selectedIDIsoElectronsNum;
	Float_t         selectedIDIsoElectronsPt[4];   //[selectedIDIsoElectronsNum]
	UShort_t        elecIsoMatched[4];   //[selectedIDIsoElectronsNum]
	UShort_t        RecoIsoElecPromtMatched[4];   //[selectedIDIsoElectronsNum]
	Float_t         RecoIsoElecPromtMatchedDeltaR[4];   //[selectedIDIsoElectronsNum]
	Float_t         RecoIsoElecPromtMatchedRelPt[4];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsEta[4];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsPhi[4];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsE[4];   //[selectedIDIsoElectronsNum]
	Float_t         RecoIsoElectronActivity[4];   //[selectedIDIsoElectronsNum]
	UShort_t        RecoIsoElecIsoTrackMatched[4];   //[selectedIDIsoElectronsNum]
	UShort_t        selectedIDElectronsNum;
	Float_t         selectedIDElectronsPt[7];   //[selectedIDElectronsNum]
	UShort_t        selectedIDElectronsMatched[7];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsEta[7];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsPhi[7];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsE[7];   //[selectedIDElectronsNum]
	Float_t         RecoElectronActivity[7];   //[selectedIDElectronsNum]
	UShort_t        IsolatedTracksNum;
	UShort_t        FallsVetoIsoTrack;
	Float_t         IsolatedTracksPt[4];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksEta[4];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksPhi[4];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksE[4];   //[IsolatedTracksNum]
	UShort_t        muIsoTrackMatched[4];   //[IsolatedTracksNum]
	UShort_t        elecIsoTrackMatched[4];   //[IsolatedTracksNum]
	UShort_t        SelectedIsoTracksMatchedToGenLepton[4];   //[IsolatedTracksNum]
	Float_t         SelectedIsoTracksMatchedToGenDeltaR[4];   //[IsolatedTracksNum]
	Float_t         SelectedIsoTracksMatchedToGenRelPT[4];   //[IsolatedTracksNum]
	UShort_t        SelectedIsoTracksMatchedToRecoIsoLepton[4];   //[IsolatedTracksNum]
	Float_t         IsoTrackActivity[4];   //[IsolatedTracksNum]
	UShort_t        JetsNum;
	Float_t         JetsPt[15];   //[JetsNum]
	Float_t         JetsEta[15];   //[JetsNum]
	Float_t         JetsPhi[15];   //[JetsNum]
	Float_t         JetsE[15];   //[JetsNum]
	Float_t         Jets_bDiscriminator[15];   //[JetsNum]
	Float_t         Jets_chargedEmEnergyFraction[15];   //[JetsNum]
	Float_t         Jets_chargedHadronEnergyFraction[15];   //[JetsNum]
	Int_t           Jets_chargedHadronMultiplicity[15];   //[JetsNum]
	Int_t           Jets_electronMultiplicity[15];   //[JetsNum]
	Float_t         Jets_jetArea[15];   //[JetsNum]
	Float_t         Jets_muonEnergyFraction[15];   //[JetsNum]
	Int_t           Jets_muonMultiplicity[15];   //[JetsNum]
	Float_t         Jets_neutralEmEnergyFraction[15];   //[JetsNum]
	Int_t           Jets_neutralHadronMultiplicity[15];   //[JetsNum]
	Float_t         Jets_photonEnergyFraction[15];   //[JetsNum]
	Int_t           Jets_photonMultiplicity[15];   //[JetsNum]
	UShort_t        ExpectationDiLep;
	UShort_t        MuDiLepControlSample;
	UShort_t        ElecDiLepControlSample;
	UShort_t        StandAloneGenMuIsoTrackMatched;
	UShort_t        StandAloneIsoTrackToMuMatched;
	UShort_t        StandAloneGenElecIsoTrackMatched;
	UShort_t        StandAloneIsoTrackToElecMatched;
	UShort_t        StandAloneIsoTrackToRecoMuMatched;
	UShort_t        StandAloneIsoTrackToRecoElecMatched;
	UShort_t        IsoTrackDiLepControlSampleMu;
	UShort_t        IsoTrackDiLepControlSampleElec;
	UShort_t        IsoTrackDiLepMu;
	UShort_t        IsoTrackDiLepElec;
	
	// List of branches
	TBranch        *b_HT;   //!
	TBranch        *b_MHT;   //!
	TBranch        *b_NJets;   //!
	TBranch        *b_BTags;   //!
	TBranch        *b_Leptons;   //!
	TBranch        *b_NVtx;   //!
	TBranch        *b_DeltaPhi1;   //!
	TBranch        *b_DeltaPhi2;   //!
	TBranch        *b_DeltaPhi3;   //!
	TBranch        *b_Weight;   //!
	TBranch        *b_MET;   //!
	TBranch        *b_METPhi;   //!
	TBranch        *b_GenMuNum;   //!
	TBranch        *b_GenMuFromTau;   //!
	TBranch        *b_GenMuPt;   //!
	TBranch        *b_GenMuEta;   //!
	TBranch        *b_GenMuPhi;   //!
	TBranch        *b_GenMuonIsoTrackMatched;   //!
	TBranch        *b_GenMuonActivity;   //!
	TBranch        *b_GenElecNum;   //!
	TBranch        *b_GenElecFromTau;   //!
	TBranch        *b_GenElecPt;   //!
	TBranch        *b_GenElecEta;   //!
	TBranch        *b_GenElecPhi;   //!
	TBranch        *b_GenElecIsoTrackMatched;   //!
	TBranch        *b_GenElecActivity;   //!
	TBranch        *b_GenTauNum;   //!
	TBranch        *b_GenTauPt;   //!
	TBranch        *b_GenTauEta;   //!
	TBranch        *b_GenTauPhi;   //!
	TBranch        *b_GenTauIsoTrackMatched;   //!
	TBranch        *b_GenTauActivity;   //!
	TBranch        *b_Expectation;   //!
	TBranch        *b_muAcc;   //!
	TBranch        *b_muReco;   //!
	TBranch        *b_muIso;   //!
	TBranch        *b_MTW;   //!
	TBranch        *b_IsoTrackMTW;   //!
	TBranch        *b_elecAcc;   //!
	TBranch        *b_elecReco;   //!
	TBranch        *b_elecIso;   //!
	TBranch        *b_muIsoTrack;   //!
	TBranch        *b_elecIsoTrack;   //!
	TBranch        *b_FallsVetoLep;   //!
	TBranch        *b_selectedIDIsoMuonsNum;   //!
	TBranch        *b_selectedIDIsoMuonsPt;   //!
	TBranch        *b_muIsoMatched;   //!
	TBranch        *b_RecoIsoMuonPromtMatched;   //!
	TBranch        *b_RecoIsoMuonPromtMatchedDeltaR;   //!
	TBranch        *b_RecoIsoMuonPromtMatchedRelPt;   //!
	TBranch        *b_selectedIDIsoMuonsEta;   //!
	TBranch        *b_selectedIDIsoMuonsPhi;   //!
	TBranch        *b_selectedIDIsoMuonsE;   //!
	TBranch        *b_RecoIsoMuonActivity;   //!
	TBranch        *b_selectedIDMuonsNum;   //!
	TBranch        *b_selectedIDMuonsPt;   //!
	TBranch        *b_selectedIDMuonsMatched;   //!
	TBranch        *b_selectedIDMuonsEta;   //!
	TBranch        *b_selectedIDMuonsPhi;   //!
	TBranch        *b_selectedIDMuonsE;   //!
	TBranch        *b_RecoMuonActivity;   //!
	TBranch        *b_RecoIsoMuonIsoTrackMatched;   //!
	TBranch        *b_selectedIDIsoElectronsNum;   //!
	TBranch        *b_selectedIDIsoElectronsPt;   //!
	TBranch        *b_elecIsoMatched;   //!
	TBranch        *b_RecoIsoElecPromtMatched;   //!
	TBranch        *b_RecoIsoElecPromtMatchedDeltaR;   //!
	TBranch        *b_RecoIsoElecPromtMatchedRelPt;   //!
	TBranch        *b_selectedIDIsoElectronsEta;   //!
	TBranch        *b_selectedIDIsoElectronsPhi;   //!
	TBranch        *b_selectedIDIsoElectronsE;   //!
	TBranch        *b_RecoIsoElectronActivity;   //!
	TBranch        *b_RecoIsoElecIsoTrackMatched;   //!
	TBranch        *b_selectedIDElectronsNum;   //!
	TBranch        *b_selectedIDElectronsPt;   //!
	TBranch        *b_selectedIDElectronsMatched;   //!
	TBranch        *b_selectedIDElectronsEta;   //!
	TBranch        *b_selectedIDElectronsPhi;   //!
	TBranch        *b_selectedIDElectronsE;   //!
	TBranch        *b_RecoElectronActivity;   //!
	TBranch        *b_IsolatedTracksNum;   //!
	TBranch        *b_FallsVetoIsoTrack;   //!
	TBranch        *b_IsolatedTracksPt;   //!
	TBranch        *b_IsolatedTracksEta;   //!
	TBranch        *b_IsolatedTracksPhi;   //!
	TBranch        *b_IsolatedTracksE;   //!
	TBranch        *b_muIsoTrackMatched;   //!
	TBranch        *b_elecIsoTrackMatched;   //!
	TBranch        *b_SelectedIsoTracksMatchedToGenLepton;   //!
	TBranch        *b_SelectedIsoTracksMatchedToGenDeltaR;   //!
	TBranch        *b_SelectedIsoTracksMatchedToGenRelPT;   //!
	TBranch        *b_SelectedIsoTracksMatchedToRecoIsoLepton;   //!
	TBranch        *b_IsoTrackActivity;   //!
	TBranch        *b_JetsNum;   //!
	TBranch        *b_JetsPt;   //!
	TBranch        *b_JetsEta;   //!
	TBranch        *b_JetsPhi;   //!
	TBranch        *b_JetsE;   //!
	TBranch        *b_Jets_bDiscriminator;   //!
	TBranch        *b_Jets_chargedEmEnergyFraction;   //!
	TBranch        *b_Jets_chargedHadronEnergyFraction;   //!
	TBranch        *b_Jets_chargedHadronMultiplicity;   //!
	TBranch        *b_Jets_electronMultiplicity;   //!
	TBranch        *b_Jets_jetArea;   //!
	TBranch        *b_Jets_muonEnergyFraction;   //!
	TBranch        *b_Jets_muonMultiplicity;   //!
	TBranch        *b_Jets_neutralEmEnergyFraction;   //!
	TBranch        *b_Jets_neutralHadronMultiplicity;   //!
	TBranch        *b_Jets_photonEnergyFraction;   //!
	TBranch        *b_Jets_photonMultiplicity;   //!
	TBranch        *b_ExpectationDiLep;   //!
	TBranch        *b_MuDiLepControlSample;   //!
	TBranch        *b_ElecDiLepControlSample;   //!
	TBranch        *b_StandAloneGenMuIsoTrackMatched;   //!
	TBranch        *b_StandAloneIsoTrackToMuMatched;   //!
	TBranch        *b_StandAloneGenElecIsoTrackMatched;   //!
	TBranch        *b_StandAloneIsoTrackToElecMatched;   //!
	TBranch        *b_StandAloneIsoTrackToRecoMuMatched;   //!
	TBranch        *b_StandAloneIsoTrackToRecoElecMatched;   //!
	TBranch        *b_IsoTrackDiLepControlSampleMu;   //!
	TBranch        *b_IsoTrackDiLepControlSampleElec;   //!
	TBranch        *b_IsoTrackDiLepMu;   //!
	TBranch        *b_IsoTrackDiLepElec;   //!
	
	EffMaker(TTree * /*tree*/ =0) : fChain(0) { }
	virtual ~EffMaker() { }
	virtual Int_t   Version() const { return 2; }
	virtual void    Begin(TTree *tree);
	virtual void    SlaveBegin(TTree *tree);
	virtual void    Init(TTree *tree);
	virtual Bool_t  Notify();
	virtual Bool_t  Process(Long64_t entry);
	virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
	virtual void    SetOption(const char *option) { fOption = option; }
	virtual void    SetObject(TObject *obj) { fObject = obj; }
	virtual void    SetInputList(TList *input) { fInput = input; }
	virtual TList  *GetOutputList() const { return fOutput; }
	virtual void    SlaveTerminate();
	virtual void    Terminate();
	
	ClassDef(EffMaker,0);
};

#endif

#ifdef EffMaker_cxx
void EffMaker::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).
  
  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fChain->SetMakeClass(1);
  
  fChain->SetBranchAddress("HT", &HT, &b_HT);
  fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
  fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
  fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
  fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);
  fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
  fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
  fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
  fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
  fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
  fChain->SetBranchAddress("MET", &MET, &b_MET);
  fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
  fChain->SetBranchAddress("GenMuNum", &GenMuNum, &b_GenMuNum);
  fChain->SetBranchAddress("GenMuFromTau", GenMuFromTau, &b_GenMuFromTau);
  fChain->SetBranchAddress("GenMuPt", GenMuPt, &b_GenMuPt);
  fChain->SetBranchAddress("GenMuEta", GenMuEta, &b_GenMuEta);
  fChain->SetBranchAddress("GenMuPhi", GenMuPhi, &b_GenMuPhi);
  fChain->SetBranchAddress("GenMuonIsoTrackMatched", GenMuonIsoTrackMatched, &b_GenMuonIsoTrackMatched);
  fChain->SetBranchAddress("GenMuonActivity", GenMuonActivity, &b_GenMuonActivity);
  fChain->SetBranchAddress("GenElecNum", &GenElecNum, &b_GenElecNum);
  fChain->SetBranchAddress("GenElecFromTau", GenElecFromTau, &b_GenElecFromTau);
  fChain->SetBranchAddress("GenElecPt", GenElecPt, &b_GenElecPt);
  fChain->SetBranchAddress("GenElecEta", GenElecEta, &b_GenElecEta);
  fChain->SetBranchAddress("GenElecPhi", GenElecPhi, &b_GenElecPhi);
  fChain->SetBranchAddress("GenElecIsoTrackMatched", GenElecIsoTrackMatched, &b_GenElecIsoTrackMatched);
  fChain->SetBranchAddress("GenElecActivity", GenElecActivity, &b_GenElecActivity);
  fChain->SetBranchAddress("GenTauNum", &GenTauNum, &b_GenTauNum);
  fChain->SetBranchAddress("GenTauPt", GenTauPt, &b_GenTauPt);
  fChain->SetBranchAddress("GenTauEta", GenTauEta, &b_GenTauEta);
  fChain->SetBranchAddress("GenTauPhi", GenTauPhi, &b_GenTauPhi);
  fChain->SetBranchAddress("GenTauIsoTrackMatched", GenTauIsoTrackMatched, &b_GenTauIsoTrackMatched);
  fChain->SetBranchAddress("GenTauActivity", GenTauActivity, &b_GenTauActivity);
  fChain->SetBranchAddress("Expectation", &Expectation, &b_Expectation);
  fChain->SetBranchAddress("muAcc", &muAcc, &b_muAcc);
  fChain->SetBranchAddress("muReco", &muReco, &b_muReco);
  fChain->SetBranchAddress("muIso", &muIso, &b_muIso);
  fChain->SetBranchAddress("MTW", &mtw, &b_MTW);
  fChain->SetBranchAddress("IsoTrackMTW", &IsoTrackMTW, &b_IsoTrackMTW);
  fChain->SetBranchAddress("elecAcc", &elecAcc, &b_elecAcc);
  fChain->SetBranchAddress("elecReco", &elecReco, &b_elecReco);
  fChain->SetBranchAddress("elecIso", &elecIso, &b_elecIso);
  fChain->SetBranchAddress("muIsoTrack", &muIsoTrack, &b_muIsoTrack);
  fChain->SetBranchAddress("elecIsoTrack", &elecIsoTrack, &b_elecIsoTrack);
  fChain->SetBranchAddress("FallsVetoLep", &FallsVetoLep, &b_FallsVetoLep);
  fChain->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
  fChain->SetBranchAddress("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, &b_selectedIDIsoMuonsPt);
  fChain->SetBranchAddress("muIsoMatched", muIsoMatched, &b_muIsoMatched);
  fChain->SetBranchAddress("RecoIsoMuonPromtMatched", RecoIsoMuonPromtMatched, &b_RecoIsoMuonPromtMatched);
  fChain->SetBranchAddress("RecoIsoMuonPromtMatchedDeltaR", RecoIsoMuonPromtMatchedDeltaR, &b_RecoIsoMuonPromtMatchedDeltaR);
  fChain->SetBranchAddress("RecoIsoMuonPromtMatchedRelPt", RecoIsoMuonPromtMatchedRelPt, &b_RecoIsoMuonPromtMatchedRelPt);
  fChain->SetBranchAddress("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
  fChain->SetBranchAddress("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
  fChain->SetBranchAddress("selectedIDIsoMuonsE", selectedIDIsoMuonsE, &b_selectedIDIsoMuonsE);
  fChain->SetBranchAddress("RecoIsoMuonActivity", RecoIsoMuonActivity, &b_RecoIsoMuonActivity);
  fChain->SetBranchAddress("selectedIDMuonsNum", &selectedIDMuonsNum, &b_selectedIDMuonsNum);
  fChain->SetBranchAddress("selectedIDMuonsPt", selectedIDMuonsPt, &b_selectedIDMuonsPt);
  fChain->SetBranchAddress("selectedIDMuonsMatched", selectedIDMuonsMatched, &b_selectedIDMuonsMatched);
  fChain->SetBranchAddress("selectedIDMuonsEta", selectedIDMuonsEta, &b_selectedIDMuonsEta);
  fChain->SetBranchAddress("selectedIDMuonsPhi", selectedIDMuonsPhi, &b_selectedIDMuonsPhi);
  fChain->SetBranchAddress("selectedIDMuonsE", selectedIDMuonsE, &b_selectedIDMuonsE);
  fChain->SetBranchAddress("RecoMuonActivity", RecoMuonActivity, &b_RecoMuonActivity);
  fChain->SetBranchAddress("RecoIsoMuonIsoTrackMatched", RecoIsoMuonIsoTrackMatched, &b_RecoIsoMuonIsoTrackMatched);
  fChain->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
  fChain->SetBranchAddress("selectedIDIsoElectronsPt", selectedIDIsoElectronsPt, &b_selectedIDIsoElectronsPt);
  fChain->SetBranchAddress("elecIsoMatched", elecIsoMatched, &b_elecIsoMatched);
  fChain->SetBranchAddress("RecoIsoElecPromtMatched", RecoIsoElecPromtMatched, &b_RecoIsoElecPromtMatched);
  fChain->SetBranchAddress("RecoIsoElecPromtMatchedDeltaR", RecoIsoElecPromtMatchedDeltaR, &b_RecoIsoElecPromtMatchedDeltaR);
  fChain->SetBranchAddress("RecoIsoElecPromtMatchedRelPt", RecoIsoElecPromtMatchedRelPt, &b_RecoIsoElecPromtMatchedRelPt);
  fChain->SetBranchAddress("selectedIDIsoElectronsEta", selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
  fChain->SetBranchAddress("selectedIDIsoElectronsPhi", selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
  fChain->SetBranchAddress("selectedIDIsoElectronsE", selectedIDIsoElectronsE, &b_selectedIDIsoElectronsE);
  fChain->SetBranchAddress("RecoIsoElectronActivity", RecoIsoElectronActivity, &b_RecoIsoElectronActivity);
  fChain->SetBranchAddress("RecoIsoElecIsoTrackMatched", RecoIsoElecIsoTrackMatched, &b_RecoIsoElecIsoTrackMatched);
  fChain->SetBranchAddress("selectedIDElectronsNum", &selectedIDElectronsNum, &b_selectedIDElectronsNum);
  fChain->SetBranchAddress("selectedIDElectronsPt", selectedIDElectronsPt, &b_selectedIDElectronsPt);
  fChain->SetBranchAddress("selectedIDElectronsMatched", selectedIDElectronsMatched, &b_selectedIDElectronsMatched);
  fChain->SetBranchAddress("selectedIDElectronsEta", selectedIDElectronsEta, &b_selectedIDElectronsEta);
  fChain->SetBranchAddress("selectedIDElectronsPhi", selectedIDElectronsPhi, &b_selectedIDElectronsPhi);
  fChain->SetBranchAddress("selectedIDElectronsE", selectedIDElectronsE, &b_selectedIDElectronsE);
  fChain->SetBranchAddress("RecoElectronActivity", RecoElectronActivity, &b_RecoElectronActivity);
  fChain->SetBranchAddress("IsolatedTracksNum", &IsolatedTracksNum, &b_IsolatedTracksNum);
  fChain->SetBranchAddress("FallsVetoIsoTrack", &FallsVetoIsoTrack, &b_FallsVetoIsoTrack);
  fChain->SetBranchAddress("IsolatedTracksPt", IsolatedTracksPt, &b_IsolatedTracksPt);
  fChain->SetBranchAddress("IsolatedTracksEta", IsolatedTracksEta, &b_IsolatedTracksEta);
  fChain->SetBranchAddress("IsolatedTracksPhi", IsolatedTracksPhi, &b_IsolatedTracksPhi);
  fChain->SetBranchAddress("IsolatedTracksE", IsolatedTracksE, &b_IsolatedTracksE);
  fChain->SetBranchAddress("muIsoTrackMatched", muIsoTrackMatched, &b_muIsoTrackMatched);
  fChain->SetBranchAddress("elecIsoTrackMatched", elecIsoTrackMatched, &b_elecIsoTrackMatched);
  fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenLepton", SelectedIsoTracksMatchedToGenLepton, &b_SelectedIsoTracksMatchedToGenLepton);
  fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenDeltaR", SelectedIsoTracksMatchedToGenDeltaR, &b_SelectedIsoTracksMatchedToGenDeltaR);
  fChain->SetBranchAddress("SelectedIsoTracksMatchedToGenRelPT", SelectedIsoTracksMatchedToGenRelPT, &b_SelectedIsoTracksMatchedToGenRelPT);
  fChain->SetBranchAddress("SelectedIsoTracksMatchedToRecoIsoLepton", SelectedIsoTracksMatchedToRecoIsoLepton, &b_SelectedIsoTracksMatchedToRecoIsoLepton);
  fChain->SetBranchAddress("IsoTrackActivity", IsoTrackActivity, &b_IsoTrackActivity);
  fChain->SetBranchAddress("JetsNum", &JetsNum, &b_JetsNum);
  fChain->SetBranchAddress("JetsPt", JetsPt, &b_JetsPt);
  fChain->SetBranchAddress("JetsEta", JetsEta, &b_JetsEta);
  fChain->SetBranchAddress("JetsPhi", JetsPhi, &b_JetsPhi);
  fChain->SetBranchAddress("JetsE", JetsE, &b_JetsE);
  fChain->SetBranchAddress("Jets_bDiscriminator", Jets_bDiscriminator, &b_Jets_bDiscriminator);
  fChain->SetBranchAddress("Jets_chargedEmEnergyFraction", Jets_chargedEmEnergyFraction, &b_Jets_chargedEmEnergyFraction);
  fChain->SetBranchAddress("Jets_chargedHadronEnergyFraction", Jets_chargedHadronEnergyFraction, &b_Jets_chargedHadronEnergyFraction);
  fChain->SetBranchAddress("Jets_chargedHadronMultiplicity", Jets_chargedHadronMultiplicity, &b_Jets_chargedHadronMultiplicity);
  fChain->SetBranchAddress("Jets_electronMultiplicity", Jets_electronMultiplicity, &b_Jets_electronMultiplicity);
  fChain->SetBranchAddress("Jets_jetArea", Jets_jetArea, &b_Jets_jetArea);
  fChain->SetBranchAddress("Jets_muonEnergyFraction", Jets_muonEnergyFraction, &b_Jets_muonEnergyFraction);
  fChain->SetBranchAddress("Jets_muonMultiplicity", Jets_muonMultiplicity, &b_Jets_muonMultiplicity);
  fChain->SetBranchAddress("Jets_neutralEmEnergyFraction", Jets_neutralEmEnergyFraction, &b_Jets_neutralEmEnergyFraction);
  fChain->SetBranchAddress("Jets_neutralHadronMultiplicity", Jets_neutralHadronMultiplicity, &b_Jets_neutralHadronMultiplicity);
  fChain->SetBranchAddress("Jets_photonEnergyFraction", Jets_photonEnergyFraction, &b_Jets_photonEnergyFraction);
  fChain->SetBranchAddress("Jets_photonMultiplicity", Jets_photonMultiplicity, &b_Jets_photonMultiplicity);
  fChain->SetBranchAddress("ExpectationDiLep", &ExpectationDiLep, &b_ExpectationDiLep);
  fChain->SetBranchAddress("MuDiLepControlSample", &MuDiLepControlSample, &b_MuDiLepControlSample);
  fChain->SetBranchAddress("ElecDiLepControlSample", &ElecDiLepControlSample, &b_ElecDiLepControlSample);
  fChain->SetBranchAddress("StandAloneGenMuIsoTrackMatched", &StandAloneGenMuIsoTrackMatched, &b_StandAloneGenMuIsoTrackMatched);
  fChain->SetBranchAddress("StandAloneIsoTrackToMuMatched", &StandAloneIsoTrackToMuMatched, &b_StandAloneIsoTrackToMuMatched);
  fChain->SetBranchAddress("StandAloneGenElecIsoTrackMatched", &StandAloneGenElecIsoTrackMatched, &b_StandAloneGenElecIsoTrackMatched);
  fChain->SetBranchAddress("StandAloneIsoTrackToElecMatched", &StandAloneIsoTrackToElecMatched, &b_StandAloneIsoTrackToElecMatched);
  fChain->SetBranchAddress("StandAloneIsoTrackToRecoMuMatched", &StandAloneIsoTrackToRecoMuMatched, &b_StandAloneIsoTrackToRecoMuMatched);
  fChain->SetBranchAddress("StandAloneIsoTrackToRecoElecMatched", &StandAloneIsoTrackToRecoElecMatched, &b_StandAloneIsoTrackToRecoElecMatched);
  fChain->SetBranchAddress("IsoTrackDiLepControlSampleMu", &IsoTrackDiLepControlSampleMu, &b_IsoTrackDiLepControlSampleMu);
  fChain->SetBranchAddress("IsoTrackDiLepControlSampleElec", &IsoTrackDiLepControlSampleElec, &b_IsoTrackDiLepControlSampleElec);
  fChain->SetBranchAddress("IsoTrackDiLepMu", &IsoTrackDiLepMu, &b_IsoTrackDiLepMu);
  fChain->SetBranchAddress("IsoTrackDiLepElec", &IsoTrackDiLepElec, &b_IsoTrackDiLepElec);
}

Bool_t EffMaker::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.
  
  return kTRUE;
}

#endif // #ifdef EffMaker_cxx
