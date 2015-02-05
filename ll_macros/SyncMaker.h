//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb  4 12:43:41 2015 by ROOT version 5.34/04
// from TTree PreSelection/PreSelection
// found on file: /nfs/dust/cms/user/adraeger/phys14/mc/TTJets_MSDecaysCKM_central_Tune4C_13TeV-madgraph-tauola/job_0_ReducedSelection.root
//////////////////////////////////////////////////////////

#ifndef SyncMaker_h
#define SyncMaker_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class SyncMaker : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   void ResetVariables();
   TTree	*tOut_;
	 int all, nJetcut, htcut, mhtcut, muveto, elecveto, deltaphiNcut, isotrakveto, btag0, btag1,btag2,btag3;
	 double alld, nJetcutd, htcutd, mhtcutd, muvetod, elecvetod, deltaphiNcutd, isotrakvetod, btag0d, btag1d,btag2d,btag3d;
	 
   // Declaration of leaf types
   UInt_t          RunNum;
   UInt_t          LumiBlockNum;
   UInt_t          EvtNum;
   Int_t           NVtx;
   Int_t           isoTracks;
   Int_t           LeptonsOld;
   Int_t           Leptons;
   Int_t           NJets;
   Int_t           BTags;
   Float_t         Weight;
   Float_t         HT;
   Float_t         MHT;
   Float_t         DeltaPhi1;
   Float_t         DeltaPhi2;
   Float_t         DeltaPhi3;
   Float_t         minDeltaPhiN;
   Float_t         DeltaPhiN1;
   Float_t         DeltaPhiN2;
   Float_t         DeltaPhiN3;
   Float_t         METPt;
   Float_t         METPhi;
   UShort_t        IsolatedTracksNum;
   Float_t         IsolatedTracksPt[4];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksEta[4];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksPhi[4];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksE[4];   //[IsolatedTracksNum]
   Float_t         IsolatedTracksTLorentzVector[4];   //[IsolatedTracksNum]
   UShort_t        selectedIDIsoMuonsNum;
   Float_t         selectedIDIsoMuonsPt[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsEta[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsPhi[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsE[3];   //[selectedIDIsoMuonsNum]
   Float_t         selectedIDIsoMuonsTLorentzVector[3];   //[selectedIDIsoMuonsNum]
   UShort_t        selectedIDMuonsNum;
   Float_t         selectedIDMuonsPt[4];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsEta[4];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsPhi[4];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsE[4];   //[selectedIDMuonsNum]
   Float_t         selectedIDMuonsTLorentzVector[4];   //[selectedIDMuonsNum]
   UShort_t        selectedIDIsoElectronsNum;
   Float_t         selectedIDIsoElectronsPt[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsEta[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsPhi[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsE[3];   //[selectedIDIsoElectronsNum]
   Float_t         selectedIDIsoElectronsTLorentzVector[3];   //[selectedIDIsoElectronsNum]
   UShort_t        selectedIDElectronsNum;
   Float_t         selectedIDElectronsPt[4];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsEta[4];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsPhi[4];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsE[4];   //[selectedIDElectronsNum]
   Float_t         selectedIDElectronsTLorentzVector[4];   //[selectedIDElectronsNum]
   UShort_t        GenBosonNum;
   Float_t         GenBosonPt[2];   //[GenBosonNum]
   Float_t         GenBosonEta[2];   //[GenBosonNum]
   Float_t         GenBosonPhi[2];   //[GenBosonNum]
   Float_t         GenBosonE[2];   //[GenBosonNum]
   Float_t         GenBosonTLorentzVector[2];   //[GenBosonNum]
   Int_t           GenBoson_GenBosonPDGId[2];   //[GenBosonNum]
   UShort_t        GenMuNum;
   Float_t         GenMuPt[2];   //[GenMuNum]
   Float_t         GenMuEta[2];   //[GenMuNum]
   Float_t         GenMuPhi[2];   //[GenMuNum]
   Float_t         GenMuE[2];   //[GenMuNum]
   Float_t         GenMuTLorentzVector[2];   //[GenMuNum]
   Int_t           GenMu_GenMuFromTau[2];   //[GenMuNum]
   UShort_t        GenElecNum;
   Float_t         GenElecPt[2];   //[GenElecNum]
   Float_t         GenElecEta[2];   //[GenElecNum]
   Float_t         GenElecPhi[2];   //[GenElecNum]
   Float_t         GenElecE[2];   //[GenElecNum]
   Float_t         GenElecTLorentzVector[2];   //[GenElecNum]
   Int_t           GenElec_GenElecFromTau[2];   //[GenElecNum]
   UShort_t        GenTauNum;
   Float_t         GenTauPt[2];   //[GenTauNum]
   Float_t         GenTauEta[2];   //[GenTauNum]
   Float_t         GenTauPhi[2];   //[GenTauNum]
   Float_t         GenTauE[2];   //[GenTauNum]
   Float_t         GenTauTLorentzVector[2];   //[GenTauNum]
   Int_t           GenTau_GenTauHad[2];   //[GenTauNum]
   UShort_t        JetsNum;
   Float_t         JetsPt[29];   //[JetsNum]
   Float_t         JetsEta[29];   //[JetsNum]
   Float_t         JetsPhi[29];   //[JetsNum]
   Float_t         JetsE[29];   //[JetsNum]
   Float_t         JetsTLorentzVector[29];   //[JetsNum]
   Float_t         Jets_bDiscriminator[29];   //[JetsNum]
   Float_t         Jets_chargedEmEnergyFraction[29];   //[JetsNum]
   Float_t         Jets_chargedHadronEnergyFraction[29];   //[JetsNum]
   Int_t           Jets_chargedHadronMultiplicity[29];   //[JetsNum]
   Int_t           Jets_electronMultiplicity[29];   //[JetsNum]
   Float_t         Jets_jetArea[29];   //[JetsNum]
   Float_t         Jets_muonEnergyFraction[29];   //[JetsNum]
   Int_t           Jets_muonMultiplicity[29];   //[JetsNum]
   Float_t         Jets_neutralEmEnergyFraction[29];   //[JetsNum]
   Int_t           Jets_neutralHadronMultiplicity[29];   //[JetsNum]
   Float_t         Jets_photonEnergyFraction[29];   //[JetsNum]
   Int_t           Jets_photonMultiplicity[29];   //[JetsNum]

   // List of branches
   TBranch        *b_RunNum;   //!
   TBranch        *b_LumiBlockNum;   //!
   TBranch        *b_EvtNum;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_isoTracks;   //!
   TBranch        *b_LeptonsOld;   //!
   TBranch        *b_Leptons;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_BTags;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_DeltaPhi1;   //!
   TBranch        *b_DeltaPhi2;   //!
   TBranch        *b_DeltaPhi3;   //!
   TBranch        *b_minDeltaPhiN;   //!
   TBranch        *b_DeltaPhiN1;   //!
   TBranch        *b_DeltaPhiN2;   //!
   TBranch        *b_DeltaPhiN3;   //!
   TBranch        *b_METPt;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_IsolatedTracksNum;   //!
   TBranch        *b_IsolatedTracksPt;   //!
   TBranch        *b_IsolatedTracksEta;   //!
   TBranch        *b_IsolatedTracksPhi;   //!
   TBranch        *b_IsolatedTracksE;   //!
   TBranch        *b_IsolatedTracksTLorentzVector;   //!
   TBranch        *b_selectedIDIsoMuonsNum;   //!
   TBranch        *b_selectedIDIsoMuonsPt;   //!
   TBranch        *b_selectedIDIsoMuonsEta;   //!
   TBranch        *b_selectedIDIsoMuonsPhi;   //!
   TBranch        *b_selectedIDIsoMuonsE;   //!
   TBranch        *b_selectedIDIsoMuonsTLorentzVector;   //!
   TBranch        *b_selectedIDMuonsNum;   //!
   TBranch        *b_selectedIDMuonsPt;   //!
   TBranch        *b_selectedIDMuonsEta;   //!
   TBranch        *b_selectedIDMuonsPhi;   //!
   TBranch        *b_selectedIDMuonsE;   //!
   TBranch        *b_selectedIDMuonsTLorentzVector;   //!
   TBranch        *b_selectedIDIsoElectronsNum;   //!
   TBranch        *b_selectedIDIsoElectronsPt;   //!
   TBranch        *b_selectedIDIsoElectronsEta;   //!
   TBranch        *b_selectedIDIsoElectronsPhi;   //!
   TBranch        *b_selectedIDIsoElectronsE;   //!
   TBranch        *b_selectedIDIsoElectronsTLorentzVector;   //!
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

   SyncMaker(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~SyncMaker() { }
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

   ClassDef(SyncMaker,0);
};

#endif

#ifdef SyncMaker_cxx
void SyncMaker::Init(TTree *tree)
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
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("isoTracks", &isoTracks, &b_isoTracks);
   fChain->SetBranchAddress("LeptonsOld", &LeptonsOld, &b_LeptonsOld);
   fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
   fChain->SetBranchAddress("minDeltaPhiN", &minDeltaPhiN, &b_minDeltaPhiN);
   fChain->SetBranchAddress("DeltaPhiN1", &DeltaPhiN1, &b_DeltaPhiN1);
   fChain->SetBranchAddress("DeltaPhiN2", &DeltaPhiN2, &b_DeltaPhiN2);
   fChain->SetBranchAddress("DeltaPhiN3", &DeltaPhiN3, &b_DeltaPhiN3);
   fChain->SetBranchAddress("METPt", &METPt, &b_METPt);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("IsolatedTracksNum", &IsolatedTracksNum, &b_IsolatedTracksNum);
   fChain->SetBranchAddress("IsolatedTracksPt", IsolatedTracksPt, &b_IsolatedTracksPt);
   fChain->SetBranchAddress("IsolatedTracksEta", IsolatedTracksEta, &b_IsolatedTracksEta);
   fChain->SetBranchAddress("IsolatedTracksPhi", IsolatedTracksPhi, &b_IsolatedTracksPhi);
   fChain->SetBranchAddress("IsolatedTracksE", IsolatedTracksE, &b_IsolatedTracksE);
   fChain->SetBranchAddress("IsolatedTracksTLorentzVector", IsolatedTracksTLorentzVector, &b_IsolatedTracksTLorentzVector);
   fChain->SetBranchAddress("selectedIDIsoMuonsNum", &selectedIDIsoMuonsNum, &b_selectedIDIsoMuonsNum);
   fChain->SetBranchAddress("selectedIDIsoMuonsPt", selectedIDIsoMuonsPt, &b_selectedIDIsoMuonsPt);
   fChain->SetBranchAddress("selectedIDIsoMuonsEta", selectedIDIsoMuonsEta, &b_selectedIDIsoMuonsEta);
   fChain->SetBranchAddress("selectedIDIsoMuonsPhi", selectedIDIsoMuonsPhi, &b_selectedIDIsoMuonsPhi);
   fChain->SetBranchAddress("selectedIDIsoMuonsE", selectedIDIsoMuonsE, &b_selectedIDIsoMuonsE);
   fChain->SetBranchAddress("selectedIDIsoMuonsTLorentzVector", selectedIDIsoMuonsTLorentzVector, &b_selectedIDIsoMuonsTLorentzVector);
   fChain->SetBranchAddress("selectedIDMuonsNum", &selectedIDMuonsNum, &b_selectedIDMuonsNum);
   fChain->SetBranchAddress("selectedIDMuonsPt", selectedIDMuonsPt, &b_selectedIDMuonsPt);
   fChain->SetBranchAddress("selectedIDMuonsEta", selectedIDMuonsEta, &b_selectedIDMuonsEta);
   fChain->SetBranchAddress("selectedIDMuonsPhi", selectedIDMuonsPhi, &b_selectedIDMuonsPhi);
   fChain->SetBranchAddress("selectedIDMuonsE", selectedIDMuonsE, &b_selectedIDMuonsE);
   fChain->SetBranchAddress("selectedIDMuonsTLorentzVector", selectedIDMuonsTLorentzVector, &b_selectedIDMuonsTLorentzVector);
   fChain->SetBranchAddress("selectedIDIsoElectronsNum", &selectedIDIsoElectronsNum, &b_selectedIDIsoElectronsNum);
   fChain->SetBranchAddress("selectedIDIsoElectronsPt", selectedIDIsoElectronsPt, &b_selectedIDIsoElectronsPt);
   fChain->SetBranchAddress("selectedIDIsoElectronsEta", selectedIDIsoElectronsEta, &b_selectedIDIsoElectronsEta);
   fChain->SetBranchAddress("selectedIDIsoElectronsPhi", selectedIDIsoElectronsPhi, &b_selectedIDIsoElectronsPhi);
   fChain->SetBranchAddress("selectedIDIsoElectronsE", selectedIDIsoElectronsE, &b_selectedIDIsoElectronsE);
   fChain->SetBranchAddress("selectedIDIsoElectronsTLorentzVector", selectedIDIsoElectronsTLorentzVector, &b_selectedIDIsoElectronsTLorentzVector);
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
}

Bool_t SyncMaker::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef SyncMaker_cxx
