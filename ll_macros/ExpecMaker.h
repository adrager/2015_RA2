#ifndef ExpecMaker_h
#define ExpecMaker_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TH2F.h>
#include <TH1F.h>
#include "TVector2.h"
#include <cmath>
#include "TCanvas.h"

// cuts baseline
const double minHT_=500;
const double minMHT_=200;
const double minNJets_=2.9;
const double deltaPhi1_=0.5;
const double deltaPhi2_=0.5;
const double deltaPhi3_=0.3;
const double minDeltaPhiN_=4.0;
const bool applyFilters_=false;
// lepton cuts
const double minMuPt_=7;
const double maxMuEta_=2.4;
const double minElecPt_=7;
const double maxElecEta_=2.5;
const double mtwCut_=100;
const double minTauPt_=10;
const double maxTauEta_=2.4;

// actity around lepton
const double maxDeltaRMuActivity_=1.0;
const double maxDeltaRElecActivity_=1.0;
const double maxDeltaRIsoTrackActivity_=1.0;
const unsigned int elecActivityMethod_=3;
const unsigned int muActivityMethod_=3;
const unsigned int isoTrackActivityMethod_=3;

// lepton matching
const double maxDeltaRGenToRecoMu_ =0.3;
const double maxDiffPtGenToRecoMu_ =0.3;
const double maxDeltaRRecoToIsoMu_ =0.1;
const double maxDiffPtRecoToIsoMu_ =0.1;
const double maxDeltaRIsoToGenMu_ = 0.3;
const double maxDiffPtIsoToGenMu_ = 0.3;

const double maxDeltaRGenToRecoElec_ =0.3;
const double maxDiffPtGenToRecoElec_ =0.3;
const double maxDeltaRRecoToIsoElec_ =0.1;
const double maxDiffPtRecoToIsoElec_ =0.1;
const double maxDeltaRIsoToGenElec_ = 0.3;
const double maxDiffPtIsoToGenElec_ = 0.3;

// isolated tracks
const double maxDeltaRGenMuToTack_ = 0.2;
const double maxDiffPtGenMuToTack_ = 0.5;
const double maxDeltaRRecoIsoMuToTack_ = 0.2;
const double maxDiffPtRecoIsoMuToTack_ = 0.5;

const double maxDeltaRGenElecToTack_ = 0.3;
const double maxDiffPtGenElecToTack_ = 0.5;
const double maxDeltaRRecoIsoElecToTack_ = 0.3;
const double maxDiffPtRecoIsoElecToTack_ = 0.5;

const double maxDeltaRGenTauToTack_ = 0.3;
const double maxDiffPtGenTauToTack_ = 0.5;

const double maxDeltaRGenToRecoIsoTrack_= 0.3;
const double maxDiffPtGenToRecoIsoTrack_=0.5;

// stand alone isolated track prediction

const double maxDeltaRIsoTrackToMu_= 0.3;
const double maxDiffPtIsoTrackToMu_= 0.5;

const double maxDeltaRIsoTrackToElec_= 0.3;
const double maxDiffPtIsoTrackToElec_= 0.5;
class ExpecMaker : public TSelector {
public :
	void resetValues();
	bool FiltersPass();
	double deltaR(double eta1, double phi1, double eta2, double phi2);
	double MTWCalculator(double metPt,double  metPhi,double  lepPt,double  lepPhi);
	double MuActivity(double muEta, double muPhi, unsigned int method);
	double ElecActivity( double elecEta, double elecPhi, unsigned int method);
	double IsoTrackActivityCalc( double isoTrackEta, double isoTrackPhi, unsigned int method);
	
	TTree          *fChain;   //!pointer to the analyzed TTree or TChain
	// Storing stuff
	TTree	*tExpectation_;
	// eff variables fot the tree
	UShort_t Expectation;
	UShort_t FallsVetoLep, FallsVetoIsoTrack;
	UShort_t FallsVetoIsoTrackPT10, FallsVetoIsoTrackPT10IsoCut08, FallsVetoIsoTrackPT10IsoCut12;
	UShort_t muIso, muReco, muAcc, muMTW, muTotal;
	UShort_t muIsoMatched[40], muRecoMatched[40];
	UShort_t elecIso, elecReco, elecAcc, elecMTW, elecTotal;
	UShort_t elecIsoMatched[40], elecRecoMatched[40];
	UShort_t muIsoTrack, muIsoTrackMTW;
	UShort_t muIsoTrackMatched[40], elecIsoTrackMatched[40];
	UShort_t elecIsoTrack, elecIsoTrackMTW;
	UShort_t         RecoIsoMuonPromtMatched[40];
	Float_t         RecoIsoMuonPromtMatchedDeltaR[40];
	Float_t         RecoIsoMuonPromtMatchedRelPt[40];
	UShort_t         RecoIsoElecPromtMatched[40];
	Float_t         RecoIsoElecPromtMatchedDeltaR[40];
	Float_t         RecoIsoElecPromtMatchedRelPt[40];
	// isolated track studies
	UShort_t GenMuonIsoTrackMatched[40], RecoIsoMuonIsoTrackMatched[40];
	UShort_t GenElecIsoTrackMatched[40], RecoIsoElecIsoTrackMatched[40];
	UShort_t GenTauIsoTrackMatched[40];
	UShort_t SelectedIsoTracksMatchedToGenLepton[40], SelectedIsoTracksMatchedToRecoIsoLepton[40];
	Float_t SelectedIsoTracksMatchedToGenDeltaR[40], SelectedIsoTracksMatchedToGenRelPT[40];
	Float_t SelectedIsoTracksMatchedToRecoIsoDeltaR[40], SelectedIsoTracksMatchedToRecoIsoRelPT[40];
	
	UShort_t GenMuonIsolatedTracksPT10Matched[40], RecoIsoMuonIsolatedTracksPT10Matched[40];
	UShort_t GenElecIsolatedTracksPT10Matched[40], RecoIsoElecIsolatedTracksPT10Matched[40];
	UShort_t GenTauIsolatedTracksPT10Matched[40];
	UShort_t IsolatedTracksPT10MatchedToGenLepton[40], IsolatedTracksPT10MatchedToRecoIsoLepton[40];
	Float_t IsolatedTracksPT10MatchedToGenDeltaR[40], IsolatedTracksPT10MatchedToGenRelPT[40];
	Float_t IsolatedTracksPT10MatchedToRecoIsoDeltaR[40], IsolatedTracksPT10MatchedToRecoIsoRelPT[40];
	
	UShort_t GenMuonIsolatedTracksPT10IsoCut08Matched[40], RecoIsoMuonIsolatedTracksPT10IsoCut08Matched[40];
	UShort_t GenElecIsolatedTracksPT10IsoCut08Matched[40], RecoIsoElecIsolatedTracksPT10IsoCut08Matched[40];
	UShort_t GenTauIsolatedTracksPT10IsoCut08Matched[40];
	UShort_t IsolatedTracksPT10IsoCut08MatchedToGenLepton[40], IsolatedTracksPT10IsoCut08MatchedToRecoIsoLepton[40];
	Float_t IsolatedTracksPT10IsoCut08MatchedToGenDeltaR[40], IsolatedTracksPT10IsoCut08MatchedToGenRelPT[40];
	Float_t IsolatedTracksPT10IsoCut08MatchedToRecoIsoDeltaR[40], IsolatedTracksPT10IsoCut08MatchedToRecoIsoRelPT[40];
	
	
	UShort_t GenMuonIsolatedTracksPT10IsoCut12Matched[40], RecoIsoMuonIsolatedTracksPT10IsoCut12Matched[40];
	UShort_t GenElecIsolatedTracksPT10IsoCut12Matched[40], RecoIsoElecIsolatedTracksPT10IsoCut12Matched[40];
	UShort_t GenTauIsolatedTracksPT10IsoCut12Matched[40];
	UShort_t IsolatedTracksPT10IsoCut12MatchedToGenLepton[40], IsolatedTracksPT10IsoCut12MatchedToRecoIsoLepton[40];
	Float_t IsolatedTracksPT10IsoCut12MatchedToGenDeltaR[40], IsolatedTracksPT10IsoCut12MatchedToGenRelPT[40];
	Float_t IsolatedTracksPT10IsoCut12MatchedToRecoIsoDeltaR[40], IsolatedTracksPT10IsoCut12MatchedToRecoIsoRelPT[40];
	// di lep
	UShort_t ExpectationDiLep_, MuDiLepControlSample_, ElecDiLepControlSample_;
	// stand alone isolated track prediction
	UShort_t StandAloneGenMuIsoTrackMatched_, StandAloneIsoTrackToMuMatched_;
	UShort_t StandAloneGenElecIsoTrackMatched_, StandAloneIsoTrackToElecMatched_;
	UShort_t StandAloneIsoTrackToRecoMuMatched_, StandAloneIsoTrackToRecoElecMatched_;
	UShort_t IsoTrackDiLepControlSampleElec_, IsoTrackDiLepControlSampleMu_, IsoTrackDiLepElec_, IsoTrackDiLepMu_;
	
	// activity resetValues
	Float_t         RecoIsoMuonActivity[40], RecoMuonActivity[40], GenMuonActivity[40];
	Float_t         RecoIsoElectronActivity[40], RecoElectronActivity[40], GenElecActivity[40];
	
	Float_t IsoTrackActivity[40], GenTauActivity[40];
	UShort_t elecActivityMethod, muActivityMethod, isoTrackActivityMethod;
	
	
	
	Float_t mtw, isoTrackMTW_;
	
	// Declaration of leaf types
	UInt_t          RunNum;
	UInt_t          LumiBlockNum;
	UInt_t          EvtNum;
	Int_t           NJets;
	Int_t           BTags;
	Int_t           Leptons;
	Int_t           NVtx;
	Float_t         Weight;
	Float_t         MHT;
	Float_t         METPt;
	Float_t         METPhi;
	Float_t         HT;
	Float_t         DeltaPhi1;
	Float_t         DeltaPhi2;
	Float_t         DeltaPhi3;
	Float_t         minDeltaPhiN;
	Float_t         DeltaPhiN1;
	Float_t         DeltaPhiN2;
	Float_t         DeltaPhiN3;
	UShort_t        selectedIDIsoMuonsNum;
	Float_t         selectedIDIsoMuonsPt[10];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsEta[10];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsPhi[10];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsE[10];   //[selectedIDIsoMuonsNum]
	Float_t         selectedIDIsoMuonsTLorentzVector[10];   //[selectedIDIsoMuonsNum]
	UShort_t        selectedIDIsoElectronsNum;
	Float_t         selectedIDIsoElectronsPt[10];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsEta[10];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsPhi[10];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsE[10];   //[selectedIDIsoElectronsNum]
	Float_t         selectedIDIsoElectronsTLorentzVector[10];   //[selectedIDIsoElectronsNum]
	UShort_t        IsolatedTracksNum;
	Float_t         IsolatedTracksPt[10];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksEta[10];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksPhi[10];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksE[10];   //[IsolatedTracksNum]
	Float_t         IsolatedTracksTLorentzVector[10];   //[IsolatedTracksNum]
	UShort_t        selectedIDMuonsNum;
	Float_t         selectedIDMuonsPt[10];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsEta[10];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsPhi[10];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsE[10];   //[selectedIDMuonsNum]
	Float_t         selectedIDMuonsTLorentzVector[10];   //[selectedIDMuonsNum]
	UShort_t        selectedIDElectronsNum;
	Float_t         selectedIDElectronsPt[10];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsEta[10];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsPhi[10];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsE[10];   //[selectedIDElectronsNum]
	Float_t         selectedIDElectronsTLorentzVector[10];   //[selectedIDElectronsNum]
	UShort_t        GenBosonNum;
	Float_t         GenBosonPt[10];   //[GenBosonNum]
	Float_t         GenBosonEta[10];   //[GenBosonNum]
	Float_t         GenBosonPhi[10];   //[GenBosonNum]
	Float_t         GenBosonE[10];   //[GenBosonNum]
	Float_t         GenBosonTLorentzVector[10];   //[GenBosonNum]
	Int_t           GenBoson_GenBosonPDGId[10];   //[GenBosonNum]
	UShort_t        GenMuNum;
	Float_t         GenMuPt[10];   //[GenMuNum]
	Float_t         GenMuEta[10];   //[GenMuNum]
	Float_t         GenMuPhi[10];   //[GenMuNum]
	Float_t         GenMuE[10];   //[GenMuNum]
	Float_t         GenMuTLorentzVector[10];   //[GenMuNum]
	Int_t           GenMu_GenMuFromTau[10];   //[GenMuNum]
	UShort_t        GenElecNum;
	Float_t         GenElecPt[10];   //[GenElecNum]
	Float_t         GenElecEta[10];   //[GenElecNum]
	Float_t         GenElecPhi[10];   //[GenElecNum]
	Float_t         GenElecE[10];   //[GenElecNum]
	Float_t         GenElecTLorentzVector[10];   //[GenElecNum]
	Int_t           GenElec_GenElecFromTau[10];   //[GenElecNum]
	UShort_t        GenTauNum;
	Float_t         GenTauPt[10];   //[GenTauNum]
	Float_t         GenTauEta[10];   //[GenTauNum]
	Float_t         GenTauPhi[10];   //[GenTauNum]
	Float_t         GenTauE[10];   //[GenTauNum]
	Float_t         GenTauTLorentzVector[10];   //[GenTauNum]
	Int_t           GenTau_GenTauHad[10];   //[GenTauNum]
	UShort_t        JetsNum;
	Float_t         JetsPt[200];   //[JetsNum]
	Float_t         JetsEta[200];   //[JetsNum]
	Float_t         JetsPhi[200];   //[JetsNum]
	Float_t         JetsE[200];   //[JetsNum]
	Float_t         JetsTLorentzVector[200];   //[JetsNum]
	Float_t         Jets_bDiscriminator[200];   //[JetsNum]
	Float_t         Jets_chargedEmEnergyFraction[200];   //[JetsNum]
	Float_t         Jets_chargedHadronEnergyFraction[200];   //[JetsNum]
	Int_t           Jets_chargedHadronMultiplicity[200];   //[JetsNum]
	Int_t           Jets_electronMultiplicity[200];   //[JetsNum]
	Float_t         Jets_jetArea[200];   //[JetsNum]
	Float_t         Jets_muonEnergyFraction[200];   //[JetsNum]
	Int_t           Jets_muonMultiplicity[200];   //[JetsNum]
	Float_t         Jets_neutralEmEnergyFraction[200];   //[JetsNum]
	Int_t           Jets_neutralHadronMultiplicity[200];   //[JetsNum]
	Float_t         Jets_photonEnergyFraction[200];   //[JetsNum]
	Int_t           Jets_photonMultiplicity[200];   //[JetsNum]
	UShort_t        SelectedPFCandidatesNum;
	Float_t         SelectedPFCandidatesPt[1000];   //[SelectedPFCandidatesNum]
	Float_t         SelectedPFCandidatesEta[1000];   //[SelectedPFCandidatesNum]
	Float_t         SelectedPFCandidatesPhi[1000];   //[SelectedPFCandidatesNum]
	Float_t         SelectedPFCandidatesE[1000];   //[SelectedPFCandidatesNum]
	Int_t           SelectedPFCandidates_Charge[1000];   //[SelectedPFCandidatesNum]
	
	// List of branches
	TBranch        *b_RunNum;   //!
	TBranch        *b_LumiBlockNum;   //!
	TBranch        *b_EvtNum;   //!
	TBranch        *b_NJets;   //!
	TBranch        *b_BTags;   //!
	TBranch        *b_Leptons;   //!
	TBranch        *b_NVtx;   //!
	TBranch        *b_Weight;   //!
	TBranch        *b_MHT;   //!
	TBranch        *b_METPt;   //!
	TBranch        *b_METPhi;   //!
	TBranch        *b_HT;   //!
	TBranch        *b_DeltaPhi1;   //!
	TBranch        *b_DeltaPhi2;   //!
	TBranch        *b_DeltaPhi3;   //!
	TBranch        *b_minDeltaPhiN;   //!
	TBranch        *b_DeltaPhiN1;   //!
	TBranch        *b_DeltaPhiN2;   //!
	TBranch        *b_DeltaPhiN3;   //!
	TBranch        *b_selectedIDIsoMuonsNum;   //!
	TBranch        *b_selectedIDIsoMuonsPt;   //!
	TBranch        *b_selectedIDIsoMuonsEta;   //!
	TBranch        *b_selectedIDIsoMuonsPhi;   //!
	TBranch        *b_selectedIDIsoMuonsE;   //!
	TBranch        *b_selectedIDIsoMuonsTLorentzVector;   //!
	TBranch        *b_selectedIDIsoElectronsNum;   //!
	TBranch        *b_selectedIDIsoElectronsPt;   //!
	TBranch        *b_selectedIDIsoElectronsEta;   //!
	TBranch        *b_selectedIDIsoElectronsPhi;   //!
	TBranch        *b_selectedIDIsoElectronsE;   //!
	TBranch        *b_selectedIDIsoElectronsTLorentzVector;   //!
	TBranch        *b_IsolatedTracksNum;   //!
	TBranch        *b_IsolatedTracksPt;   //!
	TBranch        *b_IsolatedTracksEta;   //!
	TBranch        *b_IsolatedTracksPhi;   //!
	TBranch        *b_IsolatedTracksE;   //!
	TBranch        *b_IsolatedTracksTLorentzVector;   //!
	TBranch        *b_selectedIDMuonsNum;   //!
	TBranch        *b_selectedIDMuonsPt;   //!
	TBranch        *b_selectedIDMuonsEta;   //!
	TBranch        *b_selectedIDMuonsPhi;   //!
	TBranch        *b_selectedIDMuonsE;   //!
	TBranch        *b_selectedIDMuonsTLorentzVector;   //!
	TBranch        *b_selectedIDElectronsNum;   //!
	TBranch        *b_selectedIDElectronsPt;   //!
	TBranch        *b_selectedIDElectronsEta;   //!
	TBranch        *b_selectedIDElectronsPhi;   //!
	TBranch        *b_selectedIDElectronsE;   //!
	TBranch        *b_selectedIDElectronsTLorentzVector;   //!
	TBranch        *b_GenBosonNum;   //!
	TBranch        *b_GenBosonPt;   //!
	TBranch        *b_GenBosonEta;   //!
	TBranch        *b_GenBosonPhi;   //!
	TBranch        *b_GenBosonE;   //!
	TBranch        *b_GenBosonTLorentzVector;   //!
	TBranch        *b_GenBoson_GenBosonPDGId;   //!
	TBranch        *b_GenMuNum;   //!
	TBranch        *b_GenMuPt;   //!
	TBranch        *b_GenMuEta;   //!
	TBranch        *b_GenMuPhi;   //!
	TBranch        *b_GenMuE;   //!
	TBranch        *b_GenMuTLorentzVector;   //!
	TBranch        *b_GenMu_GenMuFromTau;   //!
	TBranch        *b_GenElecNum;   //!
	TBranch        *b_GenElecPt;   //!
	TBranch        *b_GenElecEta;   //!
	TBranch        *b_GenElecPhi;   //!
	TBranch        *b_GenElecE;   //!
	TBranch        *b_GenElecTLorentzVector;   //!
	TBranch        *b_GenElec_GenElecFromTau;   //!
	TBranch        *b_GenTauNum;   //!
	TBranch        *b_GenTauPt;   //!
	TBranch        *b_GenTauEta;   //!
	TBranch        *b_GenTauPhi;   //!
	TBranch        *b_GenTauE;   //!
	TBranch        *b_GenTauTLorentzVector;   //!
	TBranch        *b_GenTau_GenTauHad;   //!
	TBranch        *b_JetsNum;   //!
	TBranch        *b_JetsPt;   //!
	TBranch        *b_JetsEta;   //!
	TBranch        *b_JetsPhi;   //!
	TBranch        *b_JetsE;   //!
	TBranch        *b_JetsTLorentzVector;   //!
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
	TBranch        *b_SelectedPFCandidatesNum;   //!
	TBranch        *b_SelectedPFCandidatesPt;   //!
	TBranch        *b_SelectedPFCandidatesEta;   //!
	TBranch        *b_SelectedPFCandidatesPhi;   //!
	TBranch        *b_SelectedPFCandidatesE;   //!
	TBranch        *b_SelectedPFCandidates_Charge;   //!
	
	ExpecMaker(TTree * /*tree*/ =0) : fChain(0) { }
	virtual ~ExpecMaker() { }
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
	
	ClassDef(ExpecMaker,0);
};

#endif

#ifdef ExpecMaker_cxx
void ExpecMaker::Init(TTree *tree)
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
	
	fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
	fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);
	fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
	fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
	fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
	fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);
	fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
	fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
	fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
	fChain->SetBranchAddress("METPt", &METPt, &b_METPt);
	fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
	fChain->SetBranchAddress("HT", &HT, &b_HT);
	fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
	fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
	fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
	fChain->SetBranchAddress("minDeltaPhiN", &minDeltaPhiN, &b_minDeltaPhiN);
	fChain->SetBranchAddress("DeltaPhiN1", &DeltaPhiN1, &b_DeltaPhiN1);
	fChain->SetBranchAddress("DeltaPhiN2", &DeltaPhiN2, &b_DeltaPhiN2);
	fChain->SetBranchAddress("DeltaPhiN3", &DeltaPhiN3, &b_DeltaPhiN3);
	fChain->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
	fChain->SetBranchAddress("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, &b_selectedIDIsoMuonsPt);
	fChain->SetBranchAddress("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
	fChain->SetBranchAddress("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
	fChain->SetBranchAddress("selectedIDIsoMuonsE", selectedIDIsoMuonsE, &b_selectedIDIsoMuonsE);
	fChain->SetBranchAddress("selectedIDIsoMuonsTLorentzVector", selectedIDIsoMuonsTLorentzVector, &b_selectedIDIsoMuonsTLorentzVector);
	fChain->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
	fChain->SetBranchAddress("selectedIDIsoElectronsPt", selectedIDIsoElectronsPt, &b_selectedIDIsoElectronsPt);
	fChain->SetBranchAddress("selectedIDIsoElectronsEta", selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
	fChain->SetBranchAddress("selectedIDIsoElectronsPhi", selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
	fChain->SetBranchAddress("selectedIDIsoElectronsE", selectedIDIsoElectronsE, &b_selectedIDIsoElectronsE);
	fChain->SetBranchAddress("selectedIDIsoElectronsTLorentzVector", selectedIDIsoElectronsTLorentzVector, &b_selectedIDIsoElectronsTLorentzVector);
	fChain->SetBranchAddress("IsolatedTracksNum", &IsolatedTracksNum, &b_IsolatedTracksNum);
	fChain->SetBranchAddress("IsolatedTracksPt", IsolatedTracksPt, &b_IsolatedTracksPt);
	fChain->SetBranchAddress("IsolatedTracksEta", IsolatedTracksEta, &b_IsolatedTracksEta);
	fChain->SetBranchAddress("IsolatedTracksPhi", IsolatedTracksPhi, &b_IsolatedTracksPhi);
	fChain->SetBranchAddress("IsolatedTracksE", IsolatedTracksE, &b_IsolatedTracksE);
	fChain->SetBranchAddress("IsolatedTracksTLorentzVector", IsolatedTracksTLorentzVector, &b_IsolatedTracksTLorentzVector);
	fChain->SetBranchAddress("selectedIDMuonsNum", &selectedIDMuonsNum, &b_selectedIDMuonsNum);
	fChain->SetBranchAddress("selectedIDMuonsPt", selectedIDMuonsPt, &b_selectedIDMuonsPt);
	fChain->SetBranchAddress("selectedIDMuonsEta", selectedIDMuonsEta, &b_selectedIDMuonsEta);
	fChain->SetBranchAddress("selectedIDMuonsPhi", selectedIDMuonsPhi, &b_selectedIDMuonsPhi);
	fChain->SetBranchAddress("selectedIDMuonsE", selectedIDMuonsE, &b_selectedIDMuonsE);
	fChain->SetBranchAddress("selectedIDMuonsTLorentzVector", selectedIDMuonsTLorentzVector, &b_selectedIDMuonsTLorentzVector);
	fChain->SetBranchAddress("selectedIDElectronsNum", &selectedIDElectronsNum, &b_selectedIDElectronsNum);
	fChain->SetBranchAddress("selectedIDElectronsPt", selectedIDElectronsPt, &b_selectedIDElectronsPt);
	fChain->SetBranchAddress("selectedIDElectronsEta", selectedIDElectronsEta, &b_selectedIDElectronsEta);
	fChain->SetBranchAddress("selectedIDElectronsPhi", selectedIDElectronsPhi, &b_selectedIDElectronsPhi);
	fChain->SetBranchAddress("selectedIDElectronsE", selectedIDElectronsE, &b_selectedIDElectronsE);
	fChain->SetBranchAddress("selectedIDElectronsTLorentzVector", selectedIDElectronsTLorentzVector, &b_selectedIDElectronsTLorentzVector);
	fChain->SetBranchAddress("GenBosonNum", &GenBosonNum, &b_GenBosonNum);
	fChain->SetBranchAddress("GenBosonPt", GenBosonPt, &b_GenBosonPt);
	fChain->SetBranchAddress("GenBosonEta", GenBosonEta, &b_GenBosonEta);
	fChain->SetBranchAddress("GenBosonPhi", GenBosonPhi, &b_GenBosonPhi);
	fChain->SetBranchAddress("GenBosonE", GenBosonE, &b_GenBosonE);
	fChain->SetBranchAddress("GenBosonTLorentzVector", GenBosonTLorentzVector, &b_GenBosonTLorentzVector);
	fChain->SetBranchAddress("GenBoson_GenBosonPDGId", GenBoson_GenBosonPDGId, &b_GenBoson_GenBosonPDGId);
	fChain->SetBranchAddress("GenMuNum", &GenMuNum, &b_GenMuNum);
	fChain->SetBranchAddress("GenMuPt", GenMuPt, &b_GenMuPt);
	fChain->SetBranchAddress("GenMuEta", GenMuEta, &b_GenMuEta);
	fChain->SetBranchAddress("GenMuPhi", GenMuPhi, &b_GenMuPhi);
	fChain->SetBranchAddress("GenMuE", GenMuE, &b_GenMuE);
	fChain->SetBranchAddress("GenMuTLorentzVector", GenMuTLorentzVector, &b_GenMuTLorentzVector);
	fChain->SetBranchAddress("GenMu_GenMuFromTau", GenMu_GenMuFromTau, &b_GenMu_GenMuFromTau);
	fChain->SetBranchAddress("GenElecNum", &GenElecNum, &b_GenElecNum);
	fChain->SetBranchAddress("GenElecPt", GenElecPt, &b_GenElecPt);
	fChain->SetBranchAddress("GenElecEta", GenElecEta, &b_GenElecEta);
	fChain->SetBranchAddress("GenElecPhi", GenElecPhi, &b_GenElecPhi);
	fChain->SetBranchAddress("GenElecE", GenElecE, &b_GenElecE);
	fChain->SetBranchAddress("GenElecTLorentzVector", GenElecTLorentzVector, &b_GenElecTLorentzVector);
	fChain->SetBranchAddress("GenElec_GenElecFromTau", GenElec_GenElecFromTau, &b_GenElec_GenElecFromTau);
	fChain->SetBranchAddress("GenTauNum", &GenTauNum, &b_GenTauNum);
	fChain->SetBranchAddress("GenTauPt", GenTauPt, &b_GenTauPt);
	fChain->SetBranchAddress("GenTauEta", GenTauEta, &b_GenTauEta);
	fChain->SetBranchAddress("GenTauPhi", GenTauPhi, &b_GenTauPhi);
	fChain->SetBranchAddress("GenTauE", GenTauE, &b_GenTauE);
	fChain->SetBranchAddress("GenTauTLorentzVector", GenTauTLorentzVector, &b_GenTauTLorentzVector);
	fChain->SetBranchAddress("GenTau_GenTauHad", GenTau_GenTauHad, &b_GenTau_GenTauHad);
	fChain->SetBranchAddress("JetsNum", &JetsNum, &b_JetsNum);
	fChain->SetBranchAddress("JetsPt", JetsPt, &b_JetsPt);
	fChain->SetBranchAddress("JetsEta", JetsEta, &b_JetsEta);
	fChain->SetBranchAddress("JetsPhi", JetsPhi, &b_JetsPhi);
	fChain->SetBranchAddress("JetsE", JetsE, &b_JetsE);
	fChain->SetBranchAddress("JetsTLorentzVector", JetsTLorentzVector, &b_JetsTLorentzVector);
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
	fChain->SetBranchAddress("SelectedPFCandidatesNum", &SelectedPFCandidatesNum, &b_SelectedPFCandidatesNum);
	fChain->SetBranchAddress("SelectedPFCandidatesPt", SelectedPFCandidatesPt, &b_SelectedPFCandidatesPt);
	fChain->SetBranchAddress("SelectedPFCandidatesEta", SelectedPFCandidatesEta, &b_SelectedPFCandidatesEta);
	fChain->SetBranchAddress("SelectedPFCandidatesPhi", SelectedPFCandidatesPhi, &b_SelectedPFCandidatesPhi);
	fChain->SetBranchAddress("SelectedPFCandidatesE", SelectedPFCandidatesE, &b_SelectedPFCandidatesE);
	fChain->SetBranchAddress("SelectedPFCandidates_Charge", SelectedPFCandidates_Charge, &b_SelectedPFCandidates_Charge);
}

Bool_t ExpecMaker::Notify()
{
	// The Notify() function is called when a new file is opened. This
	// can be either for a new TTree in a TChain or when when a new TTree
	// is started when using PROOF. It is normally not necessary to make changes
	// to the generated code, but the routine can be extended by the
	// user if needed. The return value is currently not used.
	
	return kTRUE;
}

#endif // #ifdef ExpecMaker_cxx

